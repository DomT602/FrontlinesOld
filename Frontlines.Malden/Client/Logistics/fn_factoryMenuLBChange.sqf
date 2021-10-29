/*
	File: fn_factoryMenuLBChange.sqf
	Author: Dom
	Description: Called on a new selection in the factory menu
*/
params [
	["_control",controlNull,[controlNull]],
	["_index",0,[0]]
];

private _display = findDisplay 9642;
(AW_factorySetup select _index) params ["_sector","_type","_resources"];

(_display displayCtrl 1600) lbSetCurSel (_type + 1);
_type = switch _type do {
	case -1: {"None"};
	case 0: {"Supplies"};
	case 1: {"Fuel"};
	case 2: {"Ammo"};
};
(_display displayCtrl 1000) ctrlSetText format ["Producing: %1",_type];

_resources params ["_supplies","_fuel","_ammo"];
(_display displayCtrl 1001) ctrlSetText format ["Supplies: %1",_supplies];
(_display displayCtrl 1002) ctrlSetText format ["Fuel: %1",_fuel];
(_display displayCtrl 1003) ctrlSetText format ["Ammo: %1",_ammo];

private _mapControl = _display displayCtrl 1200;
_mapControl ctrlMapAnimAdd [2,0.3,markerPos _sector];
ctrlMapAnimCommit _mapControl;