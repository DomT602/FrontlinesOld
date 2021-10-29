/*
	File: fn_checkVehicleAccess.sqf
	Author: Dom
	Description: Checks if a player can use a vehicle
*/
params [
	["_vehicle",objNull,[objNull]],
	["_moveOut",false,[true]]
];

if (getPlayerUID player in AW_staffUIDs) exitWith {true};
if (_vehicle isKindOf "ParachuteBase") exitWith {true};

private _cargoIndex = _vehicle getCargoIndex player;
if (_cargoIndex isNotEqualTo -1) exitWith {true};

private _isPilot = driver _vehicle isEqualTo player;
private _roleDescription = roleDescription player;

if (_vehicle isKindOf "Air" && {_isPilot}) exitWith {
	if ("Pilot" in _roleDescription) exitWith {
		true;
	};
	["You must be a pilot to use this vehicle."] call AW_fnc_notify;
	if (_moveOut) then {moveOut player};
	false;
};

if (_vehicle isKindOf "Tank" && {!(_vehicle isKindOf "APC_Tracked_02_base_F")}) exitWith {
	if ("Hammer" in _roleDescription || {"Anvil" in _roleDescription || {"Logistics" in _roleDescription}}) exitWith {
		true;
	};
	["You must be in Hammer, Anvil or Logistics to use this vehicle."] call AW_fnc_notify;
	if (_moveOut) then {moveOut player};
	false;
};

true;