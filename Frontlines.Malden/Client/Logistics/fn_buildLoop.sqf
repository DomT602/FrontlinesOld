/*
	File: fn_buildLoop.sqf
	Author: Dom
	Description: Manages PFH of building
*/
params ["_args","_handle"];
_args params ["_previewObject","_spheres","_collisionZone","_actions","_class","_resources","_moving"];

if (AW_buildAction > 0 || {!alive player || {!isNull objectParent player}}) then {
	[_handle] call CBA_fnc_removePerFrameHandler;
	private _finalPosition = getPosATLVisual _previewObject;
	private _finalDir = getDir _previewObject;
	deleteVehicle _previewObject;
	{
		deleteVehicle _x;
	} forEach _spheres;
	{
		player removeAction _x;
	} forEach _actions;

	AW_resourcesAvailable params ["_currentSupplies","_currentFuel","_currentAmmo"];
	_resources params ["_neededSupplies","_neededFuel","_neededAmmo"];
	if (AW_buildAction isEqualTo 1 && {_currentSupplies >= _neededSupplies && {_currentFuel >= _neededFuel && {_currentAmmo >= _neededAmmo}}}) then {
		AW_resourcesAvailable = AW_resourcesAvailable vectorDiff _resources;
		publicVariable "AW_resourcesAvailable";
		[
			{
				params ["_class","_finalPosition","_finalDir","_moving"];
				private _object = createVehicle [_class,_finalPosition,[],0,"CAN_COLLIDE"];
				_object setPosATL _finalPosition;
				_object setDir _finalDir;
				if (AW_alignToTerrain) then {
					_object setVectorUp surfaceNormal (getPosATL _object);
				};
				[_object,_moving] call AW_fnc_initialiseObject;

				if (unitIsUAV _object) then {
					[_object] call AW_fnc_setupUAV;
				};

				private _fobBuildingClassname = getText(missionConfigFile >> "Blufor_Setup" >> "AW_fobBuilding");
				if (_class isEqualTo _fobBuildingClassname) then {
					private _index = count AW_fobDetails - 1;
					private _fobArray = AW_fobDetails select _index;
					_fobArray set [1,_finalPosition];
					publicVariable "AW_fobDetails";

					private _fobName = _fobArray select 0;
					private _marker = createMarker [format["FOBmarker%1",_index],_finalPosition];
					_marker setMarkerType "b_hq";
					_marker setMarkerSize [1.5,1.5];
					_marker setMarkerText _fobName;

					["A new FOB has been established.","successNotif","New FOB"] remoteExecCall ["AW_fnc_notify",-2];

					createDialog "AW_fobNameMenu";
					private _display = findDisplay 9650;
					(_display displayCtrl 1400) ctrlSetText _fobName;
					uiNamespace setVariable ["AW_currentFOB",_index];
				} else {
					if (AW_postBuildAction > 0 && {!_moving}) then {
						if (AW_postBuildAction isEqualTo 1) then {
							if (_object isKindOf "AllVehicles") exitWith {};
							AW_canBuild = false;
							AW_buildAction = 0;
							if !(AW_preserveBuildData) then {
								AW_buildElevation = 0;
								AW_buildRotation = 0;
							};

							[AW_fnc_startBuild,[[_class]],0.3] call CBA_fnc_waitAndExecute;
						} else {
							[] call AW_fnc_initBuildMenu;
						};
					};
				};
				[] remoteExecCall ["AW_fnc_saveGame",2];
			},
			[_class,_finalPosition,_finalDir,_moving],
			0.01
		] call CBA_fnc_waitAndExecute;
	} else {
		["Build cancelled."] call AW_fnc_notify;
	};
} else {
	private _nextPreviewPos = player modelToWorld [0,3 + _collisionZone,AW_buildElevation];
	_previewObject setPosATL _nextPreviewPos;
	_previewObject setDir ((getDir player) + AW_buildRotation);

	private _nearbyObjects = nearestObjects [_nextPreviewPos,["AllVehicles","House"],_collisionZone,true];
	_nearbyObjects append (nearestTerrainObjects [_nextPreviewPos,["TREE","BUILDING"],_collisionZone,false,true]);

	private _ignoreObjects = getArray(missionConfigFile >> "Core_Settings" >> "AW_ignoreWhenBuilding");
	private _collidingObjects = [];
	{
		if !(_x isKindOf "CAManBase" || {(typeOf _x) in _ignoreObjects || {_x isEqualTo _previewObject}}) then {
			_collidingObjects pushBack _x;
		};
	} forEach _nearbyObjects;

	private _sphereColour = "#(rgb,8,8,3)color(1,0,0,1)";
	if (_collidingObjects isEqualTo [] && {[getPosATL player] call AW_fnc_isNearFob}) then {
		_sphereColour = "#(rgb,8,8,3)color(0,1,0,1)";
		AW_canBuild = true;
	} else {
		AW_canBuild = false;
		{
			drawIcon3D ["\A3\ui_f\data\map\markers\handdrawn\objective_CA.paa",[1,0,0,1],(getPosATL _x vectorAdd [0,0,2]),1,1,0,getText(configOf _x >> "displayName"),0,0.04];
		} forEach _collidingObjects;
	};

	{
		_x setPosATL (_nextPreviewPos getPos [_collisionZone,10 * _forEachIndex]);
		_x setObjectTexture [0,_sphereColour];
	} forEach _spheres;
};