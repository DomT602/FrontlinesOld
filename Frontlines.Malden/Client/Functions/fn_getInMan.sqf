/*
	File: fn_getInMan.sqf
	Author: Dom
	Description: Handles entry into any vehicle
*/
params ["_unit","_role","_vehicle","_turret"];

if !([_vehicle,true] call AW_fnc_checkVehicleAccess) exitWith {};

if !(_vehicle getVariable ["AW_playerUsed",false]) then {
	private _civVehicles = getArray(missionConfigFile >> "Civilian_Setup" >> "AW_civilianVehicleTypes");
	if ((typeOf _vehicle) in _civVehicles) then {
		private _penalty = getNumber(missionConfigFile >> "Core_Settings" >> "AW_seizedCivVehicleRepLoss");
		[_penalty] remoteExecCall ["AW_fnc_adjustCivRep",2];
		["A civilian vehicle has been seized."] remoteExecCall ["AW_fnc_notify",-2];
	};

	_vehicle setVariable ["AW_playerUsed",true,true];
};

if (_role isEqualTo "driver") then {
	private _maxSpeed = getNumber(configOf _vehicle >> "maxSpeed");
	[AW_fnc_fuelConsumptionLoop,60,[_vehicle,_maxSpeed]] call CBA_fnc_addPerFrameHandler;
};