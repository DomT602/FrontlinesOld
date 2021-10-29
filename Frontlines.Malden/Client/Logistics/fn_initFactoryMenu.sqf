/*
	File: fn_initFactoryMenu.sqf
	Author: Dom
	Description: Opens and populates the factory menu
*/

createDialog "AW_factoryMenu";
private _display = findDisplay 9642;
private _listbox = _display displayCtrl 1500;

{
	_x params ["_sector","_type","_resources"];
	_listbox lbAdd (markerText _sector);
	_listbox lbSetData [_forEachIndex,str(_x)];

	if (_type isNotEqualTo -1) then {
		private _colour = switch _type do {
			case 0: {[0,0.75,0,1]};
			case 1: {[0.75,0.75,0,1]};
			case 2: {[0.75,0,0,1]};
		};
		_listbox lbSetColor [_forEachIndex,_colour];
	};
} forEach AW_factorySetup;

_listbox lbSetCurSel 0;