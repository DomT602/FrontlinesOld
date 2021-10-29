/*
	File: fn_confirmSecondary.sqf
	Author: Dom
	Description: Begins secondary mission process
*/

private _display = findDisplay 9645;
private _control = _display displayCtrl 1500;

(parseSimpleArray (_control lbData (lbCurSel _control))) params ["","_conditions","_code"];

if ([_conditions] call AW_fnc_conditionChecker && {AW_secondaryActive isEqualTo ""}) then {
	call compile _code;
	closeDialog 0;
} else {
	["Conditions not met."] call AW_fnc_notify;
};