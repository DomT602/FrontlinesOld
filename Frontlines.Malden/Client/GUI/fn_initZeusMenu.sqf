/*
	File: fn_initZeusMenu.sqf
	Author: Dom
	Description: Starts the zeus menu
*/

createDialog "AW_zeusMenu";

private _display = findDisplay 9647;
private _listbox = _display displayCtrl 1500;

{
	_listbox lbAdd format ["%1",markerText _x];
	_listbox lbSetData [_forEachIndex,_x];

	private _colour = [0.5,0,0,1];
	if (_x in AW_bluforSectors) then {
		_colour = [0,0.3,0.6,1];
	};
	_listbox lbSetColor [_forEachIndex,_colour];
} forEach AW_allSectors;
lbSort _listbox;
_listbox lbSetCurSel 0;