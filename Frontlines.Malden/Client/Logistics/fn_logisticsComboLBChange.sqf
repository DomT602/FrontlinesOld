/*
	File: fn_logisticsComboLBChange.sqf
	Author: Dom
	Description: Called on a new selection in the logistics (new route) menu
*/

private _display = findDisplay 9643;
private _fromCombobox = _display displayCtrl 2100;
private _fromIndex = lbCurSel _fromCombobox;
private _toCombobox = _display displayCtrl 2101;
private _toIndex = lbCurSel _toCombobox;

if (_fromIndex isEqualTo -1 || {_toIndex isEqualTo -1}) exitWith {
	(_display displayCtrl 1015) ctrlSetText "Error";
	(_display displayCtrl 1016) ctrlSetText "Error";
};

(parseSimpleArray (_fromCombobox lbData _fromIndex)) params ["_sector","_position"];
(parseSimpleArray (_toCombobox lbData _toIndex)) params ["_sector2","_position2"];

private _mapControl = _display displayCtrl 1200;
_mapControl ctrlMapAnimAdd [2,0.3,_position];
ctrlMapAnimCommit _mapControl;

private _travelDistance = _position distance2D _position2;
private _travelTime = ceil ((_travelDistance / 1000) * 4);
private _travelFuel = _travelTime * 2;

(_display displayCtrl 1015) ctrlSetText format ["Total travel time: %1 minutes",_travelTime];
(_display displayCtrl 1016) ctrlSetText format ["Fuel required: %1 litres per truck",_travelFuel];

private _button = _display displayCtrl 2401;
if (ctrlEnabled _button) then {
	_button ctrlEnable false;
};