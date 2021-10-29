/*
	File: fn_addResourceAction.sqf
	Author: Dom
	Description: Adds the resource action to trucks at supply depot raid
*/
params [
	["_object",objNull,[objNull]],
	["_type","supplies",[""]]
];

private _action = [
	"secureResources",
	"Secure Resources",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\truck_ca.paa",
	{
		private _type = param [2];

		deleteVehicle _target;
		private _index = call {
			if (_type isEqualTo "supplies") exitWith {0};
			if (_type isEqualTo "fuel") exitWith {1};
			2
		};
		private _array = [0,0,0];
		_array set [_index,400];
		AW_resourcesAvailable = AW_resourcesAvailable vectorAdd _array;
		publicVariable "AW_resourcesAvailable";
		["Resources stored."] call AW_fnc_notify;
	},
	{
		isNull objectParent player && 
		{[getPosATL player,50] call AW_fnc_isNearFOB}
	},
	{},
	_type
] call ace_interact_menu_fnc_createAction;
[_object,0,["ACE_MainActions"],_action] call ace_interact_menu_fnc_addActionToObject;