/*
	File: fn_checkGroup.sqf
	Author: Dom
	Description: Check the players group is correctly assigned on respawn
*/
params [
	["_unit",player,[objNull]]
];

private _currentGroup = group _unit;
if ("-" in (str _currentGroup)) then {
	private _roleDescription = roleDescription _unit;
	private _length = _roleDescription find " ";
	private _shortenedGroup = _roleDescription select [0,_length];

	private _bluforGroups = allGroups select {side _x isEqualTo west};
	private _correctGroup = _bluforGroups findIf {str(_x) find _shortenedGroup isNotEqualTo -1};
	if (_correctGroup isEqualTo -1) exitWith {};

	private _newGroup = _bluforGroups select _correctGroup;
	if (_newGroup isEqualTo _currentGroup) exitWith {};
	[player] joinSilent _newGroup;
	
	if (units _currentGroup isEqualTo []) then {
		deleteGroup _currentGroup;
	};
};