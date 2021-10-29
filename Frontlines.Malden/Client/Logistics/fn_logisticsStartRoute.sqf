/*
	File: fn_logisticsStartRoute.sqf
	Author: Dom
	Description: Final checks before sending route to server to begin
*/

private _display = findDisplay 9643;
private _fromCombobox = _display displayCtrl 2100;
private _toCombobox = _display displayCtrl 2101;
(parseSimpleArray (_fromCombobox lbData (lbCurSel _fromCombobox))) params ["_sector","_position",["_resources",AW_resourcesAvailable]];
(parseSimpleArray (_toCombobox lbData (lbCurSel _toCombobox))) params ["_sector2","_position2"];
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
private _travelDistance = _position distance2D _position2;
private _travelTime = ceil ((_travelDistance / 1000) * 4);
private _travelFuel = (_travelTime * 2) * _requiredTrucks;
private _arrivalTime = CBA_missionTime + (_travelTime * 60);

["newMission",[_sector,_sector2,_requiredTrucks,CBA_missionTime,_arrivalTime,[_suppliesToMove,_fuelToMove,_ammoToMove],_travelFuel]] remoteExecCall ["AW_fnc_logisticsCall",2];
["Request sent."] call AW_fnc_notify;

private _button = _display displayCtrl 2401;
_button ctrlEnable false;