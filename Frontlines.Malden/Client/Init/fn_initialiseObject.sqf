/*
	File: fn_initialiseObject.sqf
	Author: Dom
	Description: Initialises any extra properties for an object
*/
params [
	["_object",objNull,[objNull]],
	["_moving",false,[false]]
];
if (isNull _object) exitWith {};

private _initConfig = getArray(missionConfigFile >> "Core_Settings" >> "AW_objectInits");
private _class = typeOf _object;

if !(_moving) then {
	if (_class in ["Land_HelipadSquare_F","Land_HelipadCircle_F","Land_HelipadRescue_F"]) then {
		AW_maxHelicopterCount = AW_maxHelicopterCount + 1; 
		publicVariable "AW_maxHelicopterCount";
	} else {
		if (_class isEqualTo "Land_TentHangar_V1_F") then {
			AW_maxPlaneCount = AW_maxPlaneCount + 1; 
			publicVariable "AW_maxPlaneCount";
		};
	};
};

{
	_x params ["_classes","_code"];

	if (_classes isEqualType "") then {
		_classes = [_classes];
	};

	if (_class in _classes) then {
		_object call compile _code;
	};
} forEach _initConfig;