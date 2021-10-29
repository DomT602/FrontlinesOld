/*
	File: fn_secureLaptop.sqf
	Author: Dom
	Description: ACE Action to secure a laptop
*/
params [
	["_object",objNull,[objNull]]
];

private _action = [
	"secureLaptop",
	"Secure intel",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\download_ca.paa",
	{
		deleteVehicle _target;
		["The intel from the IED factory has been secured."] call AW_fnc_notify;
		[10] remoteExecCall ["AW_fnc_adjustIntel",2];
	},
	{alive _target}
] call ace_interact_menu_fnc_createAction;
[_object,0,["ACE_MainActions"],_action] call ace_interact_menu_fnc_addActionToObject;