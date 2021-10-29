/*
	File: fn_initSecondaryMenu.sqf
	Author: Dom
	Description: Starts the squad management menu
*/

if !(dialog) then {
	createDialog "AW_squadManagement";
};

private _display = findDisplay 9646;
private _listbox = _display displayCtrl 1500;

lbClear _listbox;
private _playerGroups = allGroups select {side _x isEqualTo west && {units _x isNotEqualTo [] && {isPlayer (leader _x)}}};
{
	private _groupCount = count (units _x);
	_listbox lbAdd format ["%1 (%2)",groupID _x,_groupCount];
} forEach _playerGroups;
_listbox lbSetCurSel 0;