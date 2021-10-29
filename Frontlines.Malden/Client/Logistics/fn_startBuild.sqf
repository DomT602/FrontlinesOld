/*
	File: fn_startBuild.sqf
	Author: Dom
	Description: Starts the building process
*/
params [
	["_data",[],[[]]]
];

if (_data isEqualTo []) then {
	private _display = findDisplay 9641;
	private _tree = _display displayCtrl 1500;
	private _selectionPath = tvCurSel _tree;

	if (count _selectionPath isEqualTo 1) exitWith {["You haven't selected an item to build."] call AW_fnc_notify};
	private _array = (parseSimpleArray (_tree tvData _selectionPath));
	_array params ["_class"];
	if (_class isEqualType []) then {
		_array set [0,(_class select 0)];
	};
	_data = _array;
} else {
	private _baseCfg = missionConfigFile >> "Blufor_Setup";
	private _allConfig = [];

	{
		_allConfig append _x;
	} forEach [
		getArray(_baseCfg >> "AW_bluforLightVehicles"),
		getArray(_baseCfg >> "AW_bluforHeavyVehicles"),
		getArray(_baseCfg >> "AW_bluforAirVehicles"),
		getArray(_baseCfg >> "AW_bluforNavalVehicles"),
		getArray(_baseCfg >> "AW_bluforDefences"),
		getArray(_baseCfg >> "AW_bluforBuildings"),
		getArray(_baseCfg >> "AW_bluforLogistics")
	];

	private _index = _allConfig findIf {_x select 0 isEqualTo (_data select 0)};
	_data = _allConfig select _index;
};

_data params ["_class","_resources","_conditions"];
AW_resourcesAvailable params ["_currentSupplies","_currentFuel","_currentAmmo"];
_resources params ["_neededSupplies","_neededFuel","_neededAmmo"];
if (_currentSupplies >= _neededSupplies && {_currentFuel >= _neededFuel && {_currentAmmo >= _neededAmmo && {[_conditions] call AW_fnc_conditionChecker}}}) then {
	([_class,true] call AW_fnc_setupBuild) params ["_previewObject","_objectPreviewSpheres","_collisionZone","_actions"];
	
	closeDialog 0;
	[AW_fnc_buildLoop,0,[_previewObject,_objectPreviewSpheres,_collisionZone,_actions,_class,_resources,false]] call CBA_fnc_addPerFrameHandler;
} else {
	["Conditions/resource requirement not met."] call AW_fnc_notify;
};