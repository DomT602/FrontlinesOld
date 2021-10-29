/*
	File: fn_fuelConsumptionLoop.sqf
	Author: Dom
	Description: Handles increased fuel usage on selected vehicle
*/
params ["_args","_handle"];
_args params ["_vehicle","_maxSpeed"];

if (driver _vehicle isEqualTo player) then {
	private _speed = speed _vehicle;
	if (isEngineOn _vehicle && {_speed > 0}) then {
		private _normalFuel = getNumber(missionConfigFile >> "Core_Settings" >> "AW_normalFuelConsumption");
		if (_speed > (_maxSpeed * 0.75)) then {
			_normalFuel = _normalFuel * 0.75;
		};
		_vehicle setFuel (fuel _vehicle - (1 / (_normalFuel * 60)));
	};
} else {
	[_handle] call CBA_fnc_removePerFrameHandler;
};