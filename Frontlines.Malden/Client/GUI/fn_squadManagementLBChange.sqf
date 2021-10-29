/*
	File: fn_squadManagementLBChange.sqf
	Author: Dom
	Description: Called on change of selection on squad management menu
*/
params [
	["_control",controlNull,[controlNull]],
	["_index",0,[0]]
];

private _display = findDisplay 9646;
private _listbox = _display displayCtrl 1501;
private _button = _display displayCtrl 2402;

private _playerGroups = allGroups select {side _x isEqualTo west && {isPlayer (leader _x)}};
private _selectedGroup = _playerGroups select _index;

lbClear _listbox;
{
	_listbox lbAdd (name _x);
	_listbox lbSetData [_forEachIndex,str(_x)];
} forEach (units _selectedGroup);

private _myGroup = group player;
if (leader _myGroup isEqualTo player && {_myGroup isEqualTo _selectedGroup}) then {
	_button ctrlEnable true;
} else {
	_button ctrlEnable false;
};