/*
	File: fn_removeFromGroup.sqf
	Author: Dom
	Description: Remove desired unit from a group
*/
params [
	["_unit",objNull,[objNull]]
];

private _group = group _unit;
private _oldPath = [];

private _groupIndex = DT_dynamicGroups findIf {_x select 3 isEqualTo _group};
if (_groupIndex isNotEqualTo -1) then {
	private _groupToUpdate = DT_dynamicGroups select _groupIndex;
	private _unitsInGroup = _groupToUpdate select 4;
	private _unitIndex = _unitsInGroup find _unit;
	_unitsInGroup set [_unitIndex,objNull];
	_groupToUpdate set [4,_unitsInGroup];
	DT_dynamicGroups set [_groupIndex,_groupToUpdate];
	_oldPath = [_groupIndex,_unitIndex];
};

_oldPath