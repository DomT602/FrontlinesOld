/*
	File: fn_notify.sqf
	Author: Dom
	Description: AW Custom Notification System
	To-do: Make it custom!
*/
params [
	["_message","",[""]],
	["_template","",[""]],
	["_title","",[""]]
];
if (_message isEqualTo "") exitWith {};

systemChat _message;

if (_template isNotEqualTo "") then {
	[_template,[_title,_message]] call BIS_fnc_showNotification;
};