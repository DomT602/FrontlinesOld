AW_serverReady = false;
publicVariable "AW_serverReady";

AW_maxHelicopterCount = 0;
publicVariable "AW_maxHelicopterCount";
AW_maxPlaneCount = 0;
publicVariable "AW_maxPlaneCount";
AW_currentHelicopters = [];
publicVariable "AW_currentHelicopters";
AW_currentPlanes = [];
publicVariable "AW_currentPlanes";

AW_secondaryActive = "";
publicVariable "AW_secondaryActive";
AW_reliefTrucks = [];
AW_canGatherIntel = false;
publicVariable "AW_canGatherIntel";

AW_isLambsEnabled = isClass(configFile >> "CfgPatches" >> "lambs_main");
AW_isZenEnabled = isClass(configFile >> "CfgPatches" >> "ZEN_main");
AW_isTFAREnabled = isClass (configFile >> "CfgPatches" >> "task_force_radio");
publicVariable "AW_isTFAREnabled";

AW_activeIEDs = [];
AW_iedMonitorHandle = -1;
AW_logisticsHandle = -1;
AW_ambientCivs = [];
AW_ambientCivHandle = -1;
AW_ambientCivAir = [];
AW_ambientCivAirHandle = -1;
AW_ambientOpfor = [];
AW_ambientOpforHandle = -1;
AW_guerillaCooldown = 0;
publicVariable "AW_guerillaCooldown";

[] call AW_fnc_addClassEventHandlers;

AW_allSectors = [];
AW_militarySectors = [];
AW_townSectors = [];
AW_citySectors = [];
AW_radioTowerSectors = [];
AW_factorySectors = [];
{
	if ("tower" in _x) then {
		AW_radioTowerSectors pushBack _x; 
		AW_allSectors pushBack _x;
		_x setMarkerText format ["%1 - %2",markerText _x,mapGridPosition (markerPos _x)];
	} else {
		if ("factory" in _x) then {AW_factorySectors pushBack _x; AW_allSectors pushBack _x} else {
			if ("military" in _x) then {AW_militarySectors pushBack _x; AW_allSectors pushBack _x} else {
				if ("city" in _x) then {AW_citySectors pushBack _x; AW_allSectors pushBack _x} else {
					if ("town" in _x) then {AW_townSectors pushBack _x; AW_allSectors pushBack _x};
				};
			};
		};
	};
} forEach allMapMarkers;
publicVariable "AW_allSectors";
publicVariable "AW_militarySectors";
publicVariable "AW_townSectors";
publicVariable "AW_citySectors";
publicVariable "AW_radioTowerSectors";
publicVariable "AW_factorySectors";
AW_activeSectors = [];
publicVariable "AW_activeSectors";

private _saveArray = profileNamespace getVariable ["AW_serverSave",[]];
if (_saveArray isEqualTo []) then {
	[] call AW_fnc_initialSetup;
} else {
	[_saveArray] call AW_fnc_loadSave;
};

AW_bluforTowerCount = 0;
{
	[AW_fnc_spawnTower,[_x],5] call CBA_fnc_waitAndExecute;
} forEach AW_radioTowerSectors;

addMissionEventHandler ["BuildingChanged",{_this call AW_fnc_buildingChanged}];
addMissionEventHandler ["EntityKilled",{_this call AW_fnc_entityKilled}];
addMissionEventHandler ["HandleDisconnect",{_this call AW_fnc_handleDisconnect}];
addMissionEventHandler ["PlayerConnected",{_this call AW_fnc_playerConnected}];

{
    _x params ["_name","_pos"];
	private _marker = createMarker [format["FOBmarker%1",_forEachIndex],_pos];
	_marker setMarkerType "b_hq";
	_marker setMarkerSize [1.5,1.5];
	_marker setMarkerText _name;
} forEach AW_fobDetails;

[AW_fnc_mainSectorLoop,2] call CBA_fnc_addPerFrameHandler;
[AW_fnc_mainServerLoop,60,[-1]] call CBA_fnc_addPerFrameHandler;

AW_staffUIDs = getArray(missionConfigFile >> "Core_Settings" >> "AW_adminUIDs");
publicVariable "AW_staffUIDs";

AW_serverReady = true;
publicVariable "AW_serverReady";

[
	{
		private _maxAmbientCiv = getNumber(missionConfigFile >> "Core_Settings" >> "AW_maxAmbientCivs");
		[_maxAmbientCiv] call AW_fnc_spawnAmbientCiv;
		[] call AW_fnc_spawnAmbientOpfor;
		if (count (allAirports select 0) > 1) then {
			private _maxAmbientAir = getNumber(missionConfigFile >> "Core_Settings" >> "AW_maxAmbientCivAir");
			[_maxAmbientAir] call AW_fnc_spawnAmbientAir;
		};
	},
	[],
	5
] call CBA_fnc_waitAndExecute;