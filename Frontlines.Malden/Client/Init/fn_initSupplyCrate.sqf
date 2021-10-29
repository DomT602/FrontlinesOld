/*
	File: fn_initSupplyCrate.sqf
	Author: Dom
	Description: Sets up the supply crate using config values
*/
params [
	["_box",objNull,[objNull]]
];

private _medicalCrateCategory = [
	"medicalCrateCategory",
	"Medical",
	"",
	{},
	{isNull objectParent player}
] call ace_interact_menu_fnc_createAction;
[_box,0,["ACE_MainActions"],_medicalCrateCategory] call ace_interact_menu_fnc_addActionToObject;

private _lightWeaponCrateCategory = [
	"lightWeaponCrateCategory",
	"Light Weapons",
	"",
	{},
	{isNull objectParent player}
] call ace_interact_menu_fnc_createAction;
[_box,0,["ACE_MainActions"],_lightWeaponCrateCategory] call ace_interact_menu_fnc_addActionToObject;

private _heavyWeaponCrateCategory = [
	"heavyWeaponCrateCategory",
	"Heavy Weapons",
	"",
	{},
	{isNull objectParent player}
] call ace_interact_menu_fnc_createAction;
[_box,0,["ACE_MainActions"],_heavyWeaponCrateCategory] call ace_interact_menu_fnc_addActionToObject;

private _staticWeaponCrateCategory = [
	"staticWeaponCrateCategory",
	"Static Weapons",
	"",
	{},
	{isNull objectParent player}
] call ace_interact_menu_fnc_createAction;
[_box,0,["ACE_MainActions"],_staticWeaponCrateCategory] call ace_interact_menu_fnc_addActionToObject;

private _miscCrateCategory = [
	"miscWeaponCrateCategory",
	"Miscellaneous",
	"",
	{},
	{isNull objectParent player}
] call ace_interact_menu_fnc_createAction;
[_box,0,["ACE_MainActions"],_miscCrateCategory] call ace_interact_menu_fnc_addActionToObject;

private _allSupplyBoxes = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_supplyCrates");
{
	_x params ["_category","_title","_crateSize","_resourcesRequired","_contents"];
	private _action = [
		format["crateAction%1",_forEachIndex],
		_title,
		"",
		{_this spawn AW_fnc_createSupplyCrate},
		{true},
		{},
		[_crateSize,_resourcesRequired,_contents]
	] call ace_interact_menu_fnc_createAction;
	[_box,0,["ACE_MainActions",_category],_action] call ace_interact_menu_fnc_addActionToObject;
} forEach _allSupplyBoxes;