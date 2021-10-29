/*
	File: fn_checkNumber.sqf
	Author: Dom
	Description: Validates a number if !([_number,0] call AW_fnc_checkNumber) exitWith {};
*/
params [
	["_number","",[""]],
	["_lowest",-5,[0]]
];

private _parsed = parseNumber _number;
if (_number isNotEqualTo str(_parsed)) exitWith {["Invalid number."] call AW_fnc_notify; false};
if (_lowest isNotEqualTo -5) exitWith {
	if (_parsed > _lowest) exitWith {true};
	[format["You need to enter a number greater then %1.",_lowest]] call AW_fnc_notify;
	false
};
true