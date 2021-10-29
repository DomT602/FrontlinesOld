/*
	File: fn_moveObject.sqf
	Author: Dom
	Description: Starts the process of moving an object
*/
params [
	["_object",objNull,[objNull]]
];

AW_canBuild = false;
AW_buildAction = 0;
AW_alignToTerrain = true;
if !(AW_preserveBuildData) then {
	AW_buildElevation = 0;
	AW_buildRotation = 0;
};

private _class = typeOf _object;
deleteVehicle _object;
([_class] call AW_fnc_setupBuild) params ["_previewObject","_objectPreviewSpheres","_collisionZone","_actions"];

[AW_fnc_buildLoop,0,[_previewObject,_objectPreviewSpheres,_collisionZone,_actions,_class,[0,0,0],true]] call CBA_fnc_addPerFrameHandler;