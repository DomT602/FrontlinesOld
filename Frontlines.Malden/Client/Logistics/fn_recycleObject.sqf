/*
	File: fn_recycleObject.sqf
	Author: Dom
	Description: Handles recycling an object
*/
params [
	["_object",objNull,[objNull]]
];

private _className = typeOf _object;
private _resourcesToReturn = [0,0,0];

if (_object isKindOf "Car" || {_object isKindOf "Tank" || {_object isKindOf "Ship" || {_object isKindOf "Air"}}}) then {
	private _multiplier = 50;
	if (_object isKindOf "Tank" || {(_object isKindOf "Air" && !("UAV" in _className))}) then {_multiplier = 150};

	private _damageArray = (getAllHitPointsDamage _object) select 2;
	private _maxDamage = count _damageArray;
	private _currentDamage = 0;
	{
		_currentDamage = _currentDamage + _x;
	} forEach _damageArray;
	_currentDamage = abs (_currentDamage / _maxDamage);
	_resourcesToReturn set [0,(_multiplier * (1 - _currentDamage))];

	private _fuel = fuel _object;
	_resourcesToReturn set [1,(_fuel * _multiplier)];

	private _ammo = 0;
	private _magazineArray = magazinesAmmo [_object,false];
	if (_magazineArray isNotEqualTo []) then {
		private _maxAmmo = 0;
		{
			_x params ["_class","_count"];
			_ammo = _ammo + _count;
			_maxAmmo = _maxAmmo + getNumber(configFile >> "CfgMagazines" >> _class >> "count");
		} forEach _magazineArray;
		_ammo = _ammo / _maxAmmo;
	};
	_resourcesToReturn set [2,(_ammo * _multiplier)];
} else {
	private _bluforBuildables = (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforDefences"));
	_bluforBuildables append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforBuildings"));
	_bluforBuildables append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforLogistics"));
	{
		if (_x select 0 isEqualType []) then {
			_x set [0,(_x select 0) select 0];
		};
	} forEach _bluforBuildables;

	private _index = _bluforBuildables findIf {_x select 0 == _className};
	(_bluforBuildables select _index) params ["","_resources"];
	_resourcesToReturn = _resources vectorMultiply 0.5;
};

_resourcesToReturn = _resourcesToReturn apply {floor _x};
_resourcesToReturn params ["_supplies","_fuel","_ammo"];
private _action = [
	format ["Recycling this will return %1 supplies, %2 fuel and %3 ammunition.",_supplies,_fuel,_ammo],
	"Recycling",
	"Recycle",
	"Cancel"
] call BIS_fnc_guiMessage;

if (_action) then {
	private _mobileRespawnIndex = AW_mobileRespawns find _object;
	if (_mobileRespawnIndex isNotEqualTo -1) then {
		AW_mobileRespawns deleteAt _mobileRespawnIndex;
		publicVariable "AW_mobileRespawns";
	};

	if (_object isKindOf "Air") then {
		private _heliIndex = AW_currentHelicopters find _object;
		if (_heliIndex isNotEqualTo -1) then {
			AW_currentHelicopters deleteAt _heliIndex;
			publicVariable "AW_currentHelicopters";
		} else {
			private _planeIndex = AW_currentPlanes find _object;
			if (_planeIndex isNotEqualTo -1) then {
				AW_currentPlanes deleteAt _planeIndex;
				publicVariable "AW_currentPlanes";
			};
		};
	};

	deleteVehicle _object;
	AW_resourcesAvailable = AW_resourcesAvailable vectorAdd _resourcesToReturn;
	publicVariable "AW_resourcesAvailable";
};