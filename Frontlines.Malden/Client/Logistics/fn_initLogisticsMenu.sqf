/*
	File: fn_initLogisticsMenu.sqf
	Author: Dom
	Description: Opens and populates the logistics menu
*/
params [
	["_firstOpen",false,[true]]
];

if (_firstOpen) then {
	createDialog "AW_logisticsMenu";
};
private _display = findDisplay 9643;

AW_logisticsSetup params ["_trucksAvailable","_trucksInUse","_currentRoutes"];
(_display displayCtrl 1000) ctrlSetText format ["Trucks available: %1",_trucksAvailable];
(_display displayCtrl 1001) ctrlSetText format ["Trucks in transit: %1",_trucksInUse];

private _listbox = _display displayCtrl 1500;
lbClear _listbox;
{
	_x params ["_from","_to"];
	if ("factory" in _from) then {_from = markerText _from};
	if ("factory" in _to) then {_to = markerText _to};
	_listbox lbAdd format ["%1 to %2",_from,_to];
	_listbox lbSetData [_forEachIndex,str(_x)];
} forEach _currentRoutes;

private _fromComboBox = _display displayCtrl 2100;
lbClear _fromComboBox;
private _toComboBox = _display displayCtrl 2101;
lbClear _toComboBox;

{
	_x params ["_name","_pos"];
	_fromComboBox lbAdd _name;
	_fromComboBox lbSetData [_forEachIndex,str(_x)];
	_toComboBox lbAdd _name;
	_toComboBox lbSetData [_forEachIndex,str(_x)];
} forEach AW_fobDetails;

{
	_x params ["_sector","","_resources"];
	private _index = (lbSize _fromComboBox) + 1;
	_fromComboBox lbAdd format ["%1 %2",markerText _sector,_resources];
	_fromComboBox lbSetData [(lbSize _fromComboBox) - 1,str([_sector,markerPos _sector,_resources])];
	_toComboBox lbAdd format ["%1 %2",markerText _sector,_resources];
	_toComboBox lbSetData [(lbSize _toComboBox) - 1,str([_sector,markerPos _sector,_resources])];
} forEach AW_factorySetup;

_fromComboBox lbSetCurSel 0;
_toComboBox lbSetCurSel 0;