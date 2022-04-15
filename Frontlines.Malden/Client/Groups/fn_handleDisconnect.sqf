/*
	File: fn_handleDisconnect.sqf
	Author: Dom
	Description: Handles a players disconnection
*/
params ["_unit"];

private _oldSelectionPath = [_unit] call DT_fnc_removeFromGroup;

[DT_dynamicGroups,_oldSelectionPath] remoteExecCall ["DT_fnc_updateGroups",-2,"DT_DG_JIP"];