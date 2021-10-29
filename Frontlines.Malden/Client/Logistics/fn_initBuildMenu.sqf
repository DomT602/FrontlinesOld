/*
	File: fn_initBuildMenu.sqf
	Author: Dom
	Description: Opens and populates the build menu
*/

createDialog "AW_buildMenu";
private _display = findDisplay 9641;
private _tree = _display displayCtrl 1500;

{
	_tree tvAdd [[],_x];
} forEach ["Light Vehicles","Heavy Vehicles","Air","Naval","Defences","Buildings","Logistics"];

private _baseCfg = missionConfigFile >> "Blufor_Setup";

private "_text";
private "_detailsArray";
{
	private _index = _forEachIndex;
	{
		_x params ["_class","_resources","_conditions"];
		_resources params ["_supplies","_fuel","_ammo"];

		if (_class isEqualType []) then {
			_text = _class select 1;
			_class = _class select 0;
			_detailsArray = [_class] call AW_fnc_fetchDetails;
		} else {
			_detailsArray = [_class] call AW_fnc_fetchDetails;
			_text = _detailsArray select 0;
		};
		private _icon = _detailsArray select 1;

		_tree tvAdd [[_index],_text];

		if !(_icon in ["","pictureStaticObject","pictureThing"]) then {
			_tree tvSetPicture [[_index,_forEachIndex],_icon];
		};

		_tree tvSetData [[_index,_forEachIndex],str(_x)];
	} forEach _x;
} forEach [
	getArray(_baseCfg >> "AW_bluforLightVehicles"),
	getArray(_baseCfg >> "AW_bluforHeavyVehicles"),
	getArray(_baseCfg >> "AW_bluforAirVehicles"),
	getArray(_baseCfg >> "AW_bluforNavalVehicles"),
	getArray(_baseCfg >> "AW_bluforDefences"),
	getArray(_baseCfg >> "AW_bluforBuildings"),
	getArray(_baseCfg >> "AW_bluforLogistics")
];

AW_canBuild = false;
AW_buildAction = 0;
AW_alignToTerrain = true;
if !(AW_preserveBuildData) then {
	AW_buildElevation = 0;
	AW_buildRotation = 0;
};