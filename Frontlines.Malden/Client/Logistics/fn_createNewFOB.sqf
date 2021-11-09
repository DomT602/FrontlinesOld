/*
	File: fn_createNewFOB.sqf
	Author: Dom
	Description: Creates a new FOB at nearest suitable position
*/
params [
	["_object",objNull,[objNull]]
];

private _action = [
	"Are you sure you want to establish a new FOB, you cannot cancel this action and the vehicle will be consumed.",
	"Establish FOB",
	"Establish",
	"Cancel"
] call BIS_fnc_guiMessage;

if (_action) then {
	private _fobNames = getArray(missionConfigFile >> "Core_Settings" >> "AW_fobDefaultNames");
	private _index = count AW_fobDetails;
	AW_fobDetails pushBack [(_fobNames select _index),(getPosATL _object)];
	deleteVehicle _object;

	AW_canBuild = false;
	AW_buildAction = 0;
	if !(AW_preserveBuildData) then {
		AW_buildElevation = 0;
		AW_buildRotation = 0;
	};

	private _fobBuildingClass = getText(missionConfigFile >> "Blufor_Setup" >> "AW_fobBuilding");
	([_fobBuildingClass] call AW_fnc_setupBuild) params ["_previewObject","_objectPreviewSpheres","_collisionZone","_actions"];

	[AW_fnc_buildLoop,0,[_previewObject,_objectPreviewSpheres,_collisionZone,_actions,_fobBuildingClass,[0,0,0]]] call CBA_fnc_addPerFrameHandler;
};