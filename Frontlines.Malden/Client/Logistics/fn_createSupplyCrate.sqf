/*
	File: fn_createSupplyCrate.sqf
	Author: Dom
	Description: Creates the supply crate
*/
params [
	["_target",objNull,[objNull,[]]],
	["_unit",objNull,[objNull]],
	["_crateInfo",[],[[]]]
];
_crateInfo params ["_type","_resources","_contents"];
_resources params ["_supplies","_fuel","_ammo"];

AW_resourcesAvailable params ["_currentSupplies","_currentFuel","_currentAmmo"];
if (_supplies > _currentSupplies || {_fuel > _currentFuel || {_ammo > _currentAmmo}}) exitWith {
	["You don't have enough resources."] call AW_fnc_notify;
};

private _allSupplyClasses = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_supplyCrateTypes");
private _crateIndex = _allSupplyClasses findIf {_x select 0 == _type};
private _crateClass = (_allSupplyClasses select _crateIndex) select 1;

private _crate = objNull;
if (isNull _unit) then {
	_target = _target vectorAdd [0,0,100];
	_crate = createVehicle [_crateClass,_target,[],10];
	private _chute = createVehicle ["B_Parachute_02_F",_target,[],0,"FLY"];
	_chute setPosASL (getPosASL _crate);
	_crate attachTo [_chute];
} else {
	private _action = [
		format ["This crate required %1 supplies, %2 fuel and %3 ammunition.",_supplies,_fuel,_ammo],
		"Supply Crate",
		"Produce",
		"Cancel"
	] call BIS_fnc_guiMessage;

	if (_action) then {
		_crate = createVehicle [_crateClass,_target];
		[player,_crate] call ace_dragging_fnc_carryObject;
	};
};
if (isNull _crate) exitWith {};

AW_resourcesAvailable = AW_resourcesAvailable vectorDiff _resources;
publicVariable "AW_resourcesAvailable";

[_crate] call AW_fnc_clearCargo;
[_crate,true,[0,2,0],0,true] remoteExecCall ["ace_dragging_fnc_setDraggable",-2,_crate];

{
	_x params ["_class","_count"];
	if (isClass(configFile >> "CfgVehicles" >> _class) && {getNumber(configFile >> "CfgVehicles" >> _class >> "isBackpack") isEqualTo 1}) then {
		_crate addBackpackCargoGlobal [_class,_count];
	} else {
		_crate addItemCargoGlobal [_class,_count];
	};
} forEach _contents;