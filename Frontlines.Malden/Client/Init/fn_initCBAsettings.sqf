/*
	File: fn_initCBAsettings.sqf
	Author: Dom
	Description: Sets up the CBA settings
*/
[
	"AW_preserveBuildData",
	"CHECKBOX",
	["Preserve build data","Saves height and direction when building."],
	["Frontlines","Building"]
] call CBA_fnc_addSetting;
AW_buildElevation = 0;
AW_buildRotation = 0;

[
	"AW_buildRotationIncrement",
	"SLIDER",
	["Build rotation increment","Select your desired rotation increment."],
	["Frontlines","Building"],
	[1,90,45,0]
] call CBA_fnc_addSetting;

[
	"AW_buildHeightIncrement",
	"SLIDER",
	["Build height increment","Select your desired height increment when moving an object up or down."],
	["Frontlines","Building"],
	[0.01,1,0.2,2]
] call CBA_fnc_addSetting;

[
	"AW_postBuildAction",
	"LIST",
	["Post build action","Choose what action should happen after a build occurs, repeat will not work with any vehicles."],
	["Frontlines","Building"],
	[[0,1,2],["None","Repeat Build","Re-open Menu"]]
] call CBA_fnc_addSetting;

[
	"AW_uiUpdateInterval",
	"SLIDER",
	["UI Update Interval","Choose the time interval between UI updates, the longer the interval the slower the update which may help performance for lower end systems."],
	["Frontlines","User Interface"],
	[0,10,0.5,2],
	nil,
	{
		if !(isNil "AW_uiHandle") then {
			[AW_uiHandle] call CBA_fnc_removePerFrameHandler;

			private _markerVar = "";
			([getPosATL player] call AW_fnc_findNearestSector) params ["_sector","","_distance"];
			private _radius = (getArray(missionConfigFile >> "Core_Settings" >> "AW_sectorCaptureRadius")) select ([_sector] call AW_fnc_getSectorTypeIndex);
			if (_distance < _radius) then {
				_markerVar = format ["%1Marker",_sector];
			};
			AW_uiHandle = [AW_fnc_updateUI,AW_uiUpdateInterval,[[0],true,_markerVar]] call CBA_fnc_addPerFrameHandler;
		};
	}
] call CBA_fnc_addSetting;

[
	"AW_mapUpdateInterval",
	"SLIDER",
	["Map Update Interval","Choose the time interval between blufor map marker updates."],
	["Frontlines","Map"],
	[0,10,0,2]
] call CBA_fnc_addSetting;

[
	"AW_showUiOnMap",
	"CHECKBOX",
	["Show the Frontlines UI when map is open","When the map is opened, whether the UI containing resources, assets and current mission environment should be shown."],
	["Frontlines","Map"],
	true
] call CBA_fnc_addSetting;

[
	"AW_showEmptyOwnedVehicles",
	"CHECKBOX",
	["Show Blufor and seized vehicles","When the map is opened, whether all Blufor and seized assets should be shown (map will load slightly slower)."],
	["Frontlines","Map"]
] call CBA_fnc_addSetting;

[
	"AW_autoSetRadioChannel",
	"CHECKBOX",
	["Automatically set radio channel","Once your radio is recieved, automatically set the radio channel appropriate to your current group."],
	["Frontlines","Radio"],
	true
] call CBA_fnc_addSetting;

[
	"AW_showIntro",
	"CHECKBOX",
	["Show intro screen","Shows the welcome screen, deselect to load straight in."],
	["Frontlines","User Interface"],
	true
] call CBA_fnc_addSetting;

[
	"AW_showCaptureBar",
	"CHECKBOX",
	["Show capture bar","Shows the capture bar when inside an objectives radius."],
	["Frontlines","User Interface"],
	true,
	nil,
	{
		if !(AW_showCaptureBar) then {
			private _hud = uiNamespace getVariable ["AW_HUD",displayNull];
			private _control = _hud displayCtrl 1201;
			if (ctrlShown _control) then {
				_control ctrlShow false;
				(_hud displayCtrl 1000) ctrlShow false;
				(_hud displayCtrl 1900) ctrlShow false;
				(_hud displayCtrl 1901) ctrlShow false;
			};
		};
	}
] call CBA_fnc_addSetting;