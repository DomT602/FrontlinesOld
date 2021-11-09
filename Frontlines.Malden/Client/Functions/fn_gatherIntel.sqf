/*
	File: fn_gatherIntel.sqf
	Author: Dom
	Description: Adds action for gathering intel from radio towers
*/
params [
	["_object",objNull,[objNull]],
	["_sector","",[""]]
];

private _action = [
	"gatherIntelTower",
	"Download intel",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\download_ca.paa",
	{
		AW_canGatherIntel = false;
		publicVariable "AW_canGatherIntel";

		private _intelGained = round ((ln (AW_bluforTowerCount ^ 2)) + 1);
		[format["You obtained %1 intel from the communications network.",_intelGained]] call AW_fnc_notify;
		[_intelGained] remoteExecCall ["AW_fnc_adjustIntel",2];
	},
	{
		private _sector = param [2];
		private _nearestTowers = nearestObjects [getPosATL _target,["Land_Communication_F","Land_TTowerSmall_2_F","Land_TTowerBig_1_F"],30,true] select {alive _x};
		AW_canGatherIntel && {_sector in AW_bluforSectors && {_nearestTowers isNotEqualTo []}}
	},
	{},
	_sector
] call ace_interact_menu_fnc_createAction;
[_object,0,["ACE_MainActions"],_action] call ace_interact_menu_fnc_addActionToObject;