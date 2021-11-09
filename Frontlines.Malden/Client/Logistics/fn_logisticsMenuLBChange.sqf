/*
	File: fn_logisticsMenuLBChange.sqf
	Author: Dom
	Description: Called on a new selection in the logistics (current route) menu
*/
params [
	["_control",controlNull,[controlNull]],
	["_index",0,[0]]
];

private _display = findDisplay 9643;
(parseSimpleArray (_control lbData _index)) params ["_from","_to","_truckCount","_startTransitTime","_endTransitTime","_carrying"];

if ("factory" in _from) then {_from = markerText _from};
if ("factory" in _to) then {_to = markerText _to};
(_display displayCtrl 1002) ctrlSetText format ["Pickup: %1",_from];
(_display displayCtrl 1003) ctrlSetText format ["Drop-off: %1",_to];
(_display displayCtrl 1004) ctrlSetText format ["Trucks assigned: %1",_truckCount];
private _timeRemaining = ceil ((_endTransitTime - CBA_missionTime) / 60);
(_display displayCtrl 1005) ctrlSetText format ["Time remaining: %1 minutes",_timeRemaining];
_carrying params ["_supplies","_fuel","_ammo"];
(_display displayCtrl 1006) ctrlSetText format ["Supplies: %1",_supplies];
(_display displayCtrl 1007) ctrlSetText format ["Fuel: %1",_fuel];
(_display displayCtrl 1008) ctrlSetText format ["Ammo: %1",_ammo];