/*
	File: fn_respawn.sqf
	Author: Dom
	Description: Runs on player respawn
*/
params ["_unit","_corpse"];

[_unit] call AW_fnc_checkGroup;

if (isNil "AW_respawnLoadout") then {
	private _defaultLoadout = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_defaultLoadout");
	_unit setUnitLoadout _defaultLoadout;
} else {
	_unit setUnitLoadout AW_respawnLoadout;
};

private _roleDescription = roleDescription _unit;
if ("Logistics Engineer" in _roleDescription) then {
	_unit setVariable ["ACE_IsEngineer",2,true];
};

if (AW_isTFAREnabled && {call TFAR_fnc_haveLRRadio}) then {call AW_fnc_initLrRadio};

call AW_fnc_initDeployMenu;