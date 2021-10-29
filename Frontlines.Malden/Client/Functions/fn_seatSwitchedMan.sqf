/*
	File: fn_seatSwitchedMan.sqf
	Author: Dom
	Description: Handles switching seat in a vehicle
*/
params ["_unit1","_unit2","_vehicle"];

if !([_vehicle,true] call AW_fnc_checkVehicleAccess) exitWith {};

if (driver _vehicle isEqualTo player) then {
	private _maxSpeed = getNumber(configOf _vehicle >> "maxSpeed");
	[AW_fnc_fuelConsumptionLoop,1,[_vehicle,_maxSpeed]] call CBA_fnc_addPerFrameHandler;
};