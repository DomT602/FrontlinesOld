/*
	File: fn_initRetrieveMenu.sqf
	Author: Dom
	Description: Opens the menu to retrieve supply crates
*/
private _storedResources = [];
private _pos = getPosATL player;
if ([_pos,100] call AW_fnc_isNearFOB) then {
	_storedResources = +AW_resourcesAvailable;
} else {
	([_pos,AW_factorySectors] call AW_fnc_findNearestSector) params ["_sector"];
	private _factoryIndex = AW_factorySetup findIf {_x select 0 isEqualTo _sector};
	if (_factoryIndex isEqualTo -1) exitWith {};

	private _factoryData = AW_factorySetup select _factoryIndex;
	_factoryData params ["","","_resources"];
	_storedResources = _resources;
};
if (_storedResources isEqualTo [0,0,0]) exitWith {["No resources are here."] call AW_fnc_notify};

createDialog "AW_retrieveMenu";

private _display = findDisplay 9648;
private _supplyBox = _display displayCtrl 1400;
private _fuelBox = _display displayCtrl 1401;
private _ammoBox = _display displayCtrl 1402;

_storedResources params ["_supplies","_fuel","_ammo"];
_supplyBox ctrlSetText str floor(_supplies / 100);
_fuelBox ctrlSetText str floor(_fuel / 100);
_ammoBox ctrlSetText str floor(_ammo / 100);