/*
	File: fn_assignPlayer.sqf
	Author: Dom
	Description: Assigns the player in the desired group
*/
params [
	["_unit",objNull,[objNull]],
	["_selectionPath",[],[[]]],
	["_desiredRole","",[""]],
	["_isRespawn",false,[true]]
];

_selectionPath params ["_groupIndex","_unitIndex"];
private _groupToUpdate = DT_dynamicGroups select _groupIndex;
private _unitsInGroup = _groupToUpdate select 4;
private _desiredUnit = _unitsInGroup select _unitIndex;

if (!isNull _desiredUnit && {!_respawn}) exitWith {
	["Role already taken."] remoteExecCall ["hint",_unit];
};
[_desiredRole,_isRespawn] remoteExecCall ["DT_fnc_setupPlayer",_unit];

private _oldSelectionPath = if (_isRespawn) then {[]} else {[_unit] call DT_fnc_removeFromGroup};

private _selectedGroup = _groupToUpdate select 3;
if (isNull _selectedGroup) then {
	_selectedGroup = createGroup [side _unit,true];
	_selectedGroup setGroupIdGlobal [_groupToUpdate select 0];
	_groupToUpdate set [3,_selectedGroup];
};
[_unit] joinSilent _selectedGroup;

_unitsInGroup set [_unitIndex,_unit];
_groupToUpdate set [4,_unitsInGroup];
DT_dynamicGroups set [_groupIndex,_groupToUpdate];

[DT_dynamicGroups,_oldSelectionPath,_selectionPath,_unit] remoteExecCall ["DT_fnc_updateGroups",-2,"DT_DG_JIP"];