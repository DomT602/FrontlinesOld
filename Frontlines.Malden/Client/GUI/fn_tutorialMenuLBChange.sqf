/*
	File: fn_tutorialMenuLBChange.sqf
	Author: Dom
	Description: Called on change of selection on tutorial menu
*/
params [
	["_control",controlNull,[controlNull]],
	["_index",0,[0]]
];

private _text = _control lbData _index;
private _display = findDisplay 9644;
(_display displayCtrl 1100) ctrlSetStructuredText parseText _text;