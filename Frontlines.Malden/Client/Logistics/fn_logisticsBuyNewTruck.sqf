/*
	File: fn_logisticsBuyNewTruck.sqf
	Author: Dom
	Description: Buys a logistics truck
*/
AW_resourcesAvailable params ["_supplies"];
AW_logisticsSetup params ["_trucksAvailable"];

if (_supplies >= 100) then {
	AW_resourcesAvailable = AW_resourcesAvailable vectorDiff [100,0,0];
	publicVariable "AW_resourcesAvailable";
	["addTruck",1] remoteExecCall ["AW_fnc_logisticsCall",2];
	private _display = findDisplay 9643;
	(_display displayCtrl 1000) ctrlSetText format ["Trucks available: %1",(_trucksAvailable + 1)];
} else {
	["You need 100 supplies to buy a new truck."] call AW_fnc_notify;	
};