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
	private _helipads = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_helipads");
	if (_class in _helipads) then {
		AW_maxHelicopterCount = AW_maxHelicopterCount + 1; 
		publicVariable "AW_maxHelicopterCount";
	} else {
		private _hangars = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_hangars");
		if (_class in _hangars) then {
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