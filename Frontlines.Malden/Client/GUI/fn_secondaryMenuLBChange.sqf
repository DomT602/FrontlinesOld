/*
	File: fn_secondaryMenuLBChange.sqf
	Author: Dom
	Description: Called on change of selection on secondary mission menu
*/
params [
	["_control",controlNull,[controlNull]],
	["_index",0,[0]]
];

(parseSimpleArray (_control lbData _index)) params ["","_conditions","","_description"];
private _display = findDisplay 9645;
private _button = _display displayCtrl 2400;

(_display displayCtrl 1100) ctrlSetStructuredText parseText _description;

if ([_conditions] call AW_fnc_conditionChecker) then {
	_button ctrlEnable true;
} else {
	_button ctrlEnable false;
};