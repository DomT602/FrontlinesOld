/*
	File: fn_retrieveSupplies.sqf
	Author: Dom
	Description: Pulls desired supplies out of a factory
*/
private _display = findDisplay 9648;
private _desiredSupplies = ctrlText (_display displayCtrl 1400);
private _desiredFuel = ctrlText (_display displayCtrl 1401);
private _desiredAmmo = ctrlText (_display displayCtrl 1402);
if (!([_desiredSupplies] call AW_fnc_checkNumber) || {!([_desiredFuel] call AW_fnc_checkNumber) || {!([_desiredAmmo] call AW_fnc_checkNumber)}}) exitWith {};
private _desiredArray = [];
_desiredArray pushBack (parseNumber _desiredSupplies);
_desiredArray pushBack (parseNumber _desiredFuel);
_desiredArray pushBack (parseNumber _desiredAmmo);

private _pos = getPosATL player;
private _isAtFOB = [_pos,100] call AW_fnc_isNearFOB;
private _safePosition = _pos findEmptyPosition [0,75,"Land_HelipadEmpty_F"];
if (_safePosition isEqualTo []) exitWith {["No suitable position to spawn crates, move somewhere else."] call AW_fnc_notify};

private _storedResources = [];
private "_factoryIndex";
private "_factoryData";
if (_isAtFOB) then {
	_storedResources = +AW_resourcesAvailable;
} else {
	([_pos,["factory"] call AW_fnc_getSectorsByType] call AW_fnc_findNearestSector) params ["_sector"];
	_factoryIndex = AW_factorySetup findIf {_x select 0 isEqualTo _sector};
	_factoryData = AW_factorySetup select _factoryIndex;
	_storedResources = _factoryData select 2;
};
_storedResources = _storedResources apply {_x / 100};

private _enoughResources = true;
{
	if (_x > (_storedResources select _forEachIndex)) exitWith {
		_enoughResources = false;
	};
} forEach _desiredArray;
if !(_enoughResources) exitWith {["Not enough resources are stored here."] call AW_fnc_notify};
closeDialog 0;

private _crateTypes = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforCrates");
private _offset = 2.5;

{
	for "_i" from 1 to _x do {
		private _spawnPos = _safePosition getPos [_offset,(90 * _forEachIndex)];
		private _crate = createVehicle [(_crateTypes select _forEachIndex),_spawnPos];
		_offset = _offset + 2;
	};

	_offset = 2.5;
} forEach _desiredArray;

_desiredArray = _desiredArray apply {_x * 100};
if (_isAtFOB) then {
	AW_resourcesAvailable = AW_resourcesAvailable vectorDiff _desiredArray;
	publicVariable "AW_resourcesAvailable";
} else {
	_factoryData set [2,(((AW_factorySetup select _factoryIndex) select 2) vectorDiff _desiredArray)];
	AW_factorySetup set [_factoryIndex,_factoryData];
	publicVariable "AW_factorySetup";
};