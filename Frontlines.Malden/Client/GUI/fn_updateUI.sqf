/*
	File: fn_updateUI.sqf
	Author: Dom
	Description: Handles all UI elements
	_index = CBA_common_perFrameHandlerArray findIf {_x select 5 isEqualTo _handle};
*/
params ["_args"];
_args params ["_lastData","_sectorShown","_marker"];

private _hud = uiNamespace getVariable ["AW_HUD",displayNull];
private _pos = getPosATL player;

if (visibleMap && {AW_showUiOnMap} || {[_pos] call AW_fnc_isNearFOB}) then {
	private _currentData = +AW_resourcesAvailable;
	_currentData pushBack count AW_currentHelicopters;
	_currentData pushBack AW_maxHelicopterCount;
	_currentData pushBack count AW_currentPlanes;
	_currentData pushBack AW_maxPlaneCount;
	_currentData pushBack AW_opforThreat;
	_currentData pushBack AW_civRep;
	_currentData pushBack AW_intel;
	_currentData pushBack count (allPlayers - entities "HeadlessClient_F");

	if (_lastData isNotEqualTo _currentData) then {
		_currentData params ["_supplies","_fuel","_ammo","_helis","_maxHelis","_planes","_maxPlanes","_threat","_civRep","_intel","_players"];
		(_hud displayCtrl 1200) ctrlShow true;
		(_hud displayCtrl 1001) ctrlSetText format ["Fuel: %1",_fuel];
		(_hud displayCtrl 1002) ctrlSetText format ["Supplies: %1",_supplies];
		(_hud displayCtrl 1003) ctrlSetText format ["Ammo: %1",_ammo];
		(_hud displayCtrl 1004) ctrlSetText format ["Rotary: %1/%2",_helis,_maxHelis];
		(_hud displayCtrl 1005) ctrlSetText format ["Fixed-Wing: %1/%2",_planes,_maxPlanes];
		(_hud displayCtrl 1006) ctrlSetText format ["Threat: %1%2",_threat,"%"];
		(_hud displayCtrl 1007) ctrlSetText format ["Civ Rep: %1%2",_civRep,"%"];
		(_hud displayCtrl 1008) ctrlSetText format ["Intel: %1",_intel];
		(_hud displayCtrl 1009) ctrlSetText format ["Players: %1",_players];
		_args set [0,_currentData];
	};
} else {
	if (_lastData isNotEqualTo []) then {
		(_hud displayCtrl 1200) ctrlShow false;
		for "_i" from 1001 to 1009 do {
			(_hud displayCtrl _i) ctrlSetText "";
		};
		_args set [0,[]];
	};
};

([_pos] call AW_fnc_findNearestSector) params ["_sector","","_distance"];
private _radius = (getArray(missionConfigFile >> "Core_Settings" >> "AW_sectorCaptureRadius")) select ([_sector] call AW_fnc_getSectorTypeIndex);
if (_distance < _radius) then {
	private _closestSectorVar = format ["%1Marker",_sector];
	if (_marker isEqualTo "" || {_marker isNotEqualTo _closestSectorVar}) then {
		if (_marker isNotEqualTo _closestSectorVar) then {deleteMarkerLocal _marker};
		_marker = createMarkerLocal [_closestSectorVar,markerPos _sector];
		_marker setMarkerShapeLocal "Ellipse";
		_marker setMarkerSizeLocal [_radius,_radius];
		_marker setMarkerBrushLocal "SolidBorder";
		_marker setMarkerColorLocal "ColorGrey";
		_args set [2,_marker];
	};

	private _ratio = [markerPos _sector,_sector] call AW_fnc_getCaptureRatio;
	if (AW_showCaptureBar) then {
		if !(_sectorShown) then {
			(_hud displayCtrl 1000) ctrlShow true;
			(_hud displayCtrl 1201) ctrlShow true;
			(_hud displayCtrl 1900) ctrlShow true;
			(_hud displayCtrl 1901) ctrlShow true;
			_args set [1,true];
		};
		(_hud displayCtrl 1900) progressSetPosition _ratio;
	};

	private _newColor = call {
		if (_ratio isEqualTo 0) exitWith {"ColorOPFOR"};
		if (_ratio isEqualTo 1) exitWith {"ColorBLUFOR"};
		"ColorCivilian"
	};
	if (_newColor isNotEqualTo (markerColor _marker)) then {
		_marker setMarkerColorLocal _newColor;
	};
} else {
	if (_sectorShown) then {
		(_hud displayCtrl 1000) ctrlShow false;
		(_hud displayCtrl 1201) ctrlShow false;
		(_hud displayCtrl 1900) ctrlShow false;
		(_hud displayCtrl 1901) ctrlShow false;
		_args set [1,false];
	};
	
	if (_marker isNotEqualTo "") then {
		deleteMarkerLocal _marker;
		_args set [2,""];
	};
};