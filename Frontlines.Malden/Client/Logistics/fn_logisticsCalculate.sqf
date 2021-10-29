/*
	File: fn_logisticsCalculate.sqf
	Author: Dom
	Description: Calculates requirements for a route to be run
*/

private _display = findDisplay 9643;
(_display displayCtrl 2401) ctrlEnable false;
private _fromCombobox = _display displayCtrl 2100;
private _toCombobox = _display displayCtrl 2101;
private _fromIndex = lbCurSel _fromCombobox;
private _toIndex = lbCurSel _toCombobox;
if (_fromIndex isEqualTo -1 || {_toIndex isEqualTo -1}) exitWith {};

(parseSimpleArray (_fromCombobox lbData _fromIndex)) params ["_sector","_position",["_resources",AW_resourcesAvailable]];
(parseSimpleArray (_toCombobox lbData _toIndex)) params ["_sector2","_position2"];
if (_sector isEqualTo _sector2) exitWith {["The resources are already there."] call AW_fnc_notify};
_resources params ["_sectorSupplies","_sectorFuel","_sectorAmmo"];

private _suppliesToMove = ctrlText (_display displayCtrl 1400);
private _fuelToMove = ctrlText (_display displayCtrl 1401);
private _ammoToMove = ctrlText (_display displayCtrl 1402);
if (!([_suppliesToMove] call AW_fnc_checkNumber) || {!([_fuelToMove] call AW_fnc_checkNumber) || {!([_ammoToMove] call AW_fnc_checkNumber)}}) exitWith {};
_suppliesToMove = parseNumber _suppliesToMove;
_fuelToMove = parseNumber _fuelToMove;
_ammoToMove = parseNumber _ammoToMove;

private _totalToMove = _suppliesToMove + _fuelToMove + _ammoToMove;
if (_totalToMove isEqualTo 0) exitWith {["Nothing to move."] call AW_fnc_notify};

private _requiredTrucks = ceil (_totalToMove / 200);
AW_logisticsSetup params ["_trucksAvailable"];
(_display displayCtrl 1017) ctrlSetText format ["Trucks required: %1",_requiredTrucks];

private _travelDistance = _position distance2D _position2;
private _travelTime = ceil ((_travelDistance / 1000) * 4);
private _travelFuel = (_travelTime * 2) * _requiredTrucks;
AW_resourcesAvailable params ["","_fuelAvailable"];
(_display displayCtrl 1018) ctrlSetText format ["Total fuel required: %1 litres",_travelFuel];

if (_suppliesToMove > _sectorSupplies || {_fuelToMove > _sectorFuel || {_ammoToMove > _sectorAmmo}}) exitWith {
	["The sector doesn't have the required supplies."] call AW_fnc_notify;
};
if (_requiredTrucks > _trucksAvailable) exitWith {
	["Not enough trucks available."] call AW_fnc_notify;
};
if (_travelFuel > _fuelAvailable) exitWith {
	["Not enough fuel."] call AW_fnc_notify;
};

(_display displayCtrl 2401) ctrlEnable true;