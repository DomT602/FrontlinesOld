/*
	File: fn_updateFactoryProduction.sqf
	Author: Dom
	Description: Updates what a factory produces
*/

private _display = findDisplay 9642;
private _listbox = _display displayCtrl 1500;
private _index = lbCurSel _listbox;
private _toolbox = _display displayCtrl 1600;
private _toolboxIndex = (lbCurSel _toolbox) - 1;

private _data = (AW_factorySetup select _index);
_data params ["","_type","_resources"];
if (_type isEqualTo _toolboxIndex) exitWith {["No update required."] call AW_fnc_notify};
_resources params ["_suppliesAvailable"];
if (_suppliesAvailable < 100) exitWith {["100 supplies need to be available at the factory to change its production."] call AW_fnc_notify};

_resources = _resources vectorDiff [100,0,0];
_data set [1,_toolboxIndex];
_data set [2,_resources];
AW_factorySetup set [_index,_data];
publicVariable "AW_factorySetup";

["Factory updated."] call AW_fnc_notify;

(switch _toolboxIndex do {
	case -1: {["None",[1,1,1,1]]};
	case 0: {["Supplies",[0,0.75,0,1]]};
	case 1: {["Fuel",[0.75,0.75,0,1]]};
	case 2: {["Ammo",[0.75,0,0,1]]};
}) params ["_type","_colour"];
(_display displayCtrl 1000) ctrlSetText format ["Producing: %1",_type];
_listbox lbSetColor [_index,_colour];
_listbox lbSetCurSel _index;