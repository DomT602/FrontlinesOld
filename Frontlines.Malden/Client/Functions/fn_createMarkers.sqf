/*
	File: fn_createMarkers.sqf
	Author: Dom
	Description: Creates markers when map is opened
*/

private _staticMarkers = [];
{
	if (alive _x && {speed _x < 1}) then {
		private _marker = createMarkerLocal [format["mobRespawn%1",_forEachIndex],_x];
		_marker setMarkerTypeLocal "mil_start";
		_marker setMarkerTextLocal format ["Mobile Respawn - %1",mapGridPosition _x];
		_marker setMarkerColorLocal "ColorBLUFOR";
		_staticMarkers pushBack _marker;
	};
} forEach AW_mobileRespawns;

if (AW_showEmptyOwnedVehicles) then {
	private _bluforVehicles = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforLightVehicles");
	_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforHeavyVehicles"));
	_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforAirVehicles"));
	_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforNavalVehicles"));
	_bluforVehicles append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforLogistics"));
	_bluforVehicles = _bluforVehicles apply {if (_x select 0 isEqualType []) then {(_x select 0) select 0} else {_x select 0}};
	{
		private _class = typeOf _x;
		if (alive _x && {crew _x isEqualTo [] && {!("Slingload" in _class) && {_x getVariable ["AW_playerUsed",false] || {_class in _bluforVehicles}}}}) then {
			private _marker = createMarkerLocal [format["allVeh%1",_forEachIndex],_x];
			_marker setMarkerTypeLocal "mil_dot";
			([typeOf _x] call AW_fnc_fetchDetails) params ["_vehName"];
			_marker setMarkerTextLocal format ["%1",_vehName];
			_marker setMarkerColorLocal "ColorGrey";
			_staticMarkers pushBack _marker;
		};
	} forEach (vehicles - AW_mobileRespawns);
};

private _movingMarkers = [];
{
	if (leader (group _x) isEqualTo _x) then {
		private _roleDescription = roleDescription _x;
		_roleDescription = _roleDescription select [0,_roleDescription find "@"];

		private _marker = createMarkerLocal [format["grpLdr%1",_forEachIndex],_x];
		_marker setMarkerColorLocal "ColorBLUFOR";
		if (isNull objectParent _x) then {
			_marker setMarkerTypeLocal "b_inf";
			_marker setMarkerTextLocal format ["%1 - %2",_roleDescription,name _x];
		} else {
			private _vehicle = objectParent _x;
			if (_vehicle isKindOf "Tank") then {
				_marker setMarkerTypeLocal "b_armor";
			} else {
				if (_vehicle isKindOf "Air") then {
					if (_vehicle isKindOf "Plane") then {
						_marker setMarkerTypeLocal "b_plane";
					} else {
						_marker setMarkerTypeLocal "b_air";
					};
				} else {
					if (_vehicle isKindOf "Ship") then {
						_marker setMarkerTypeLocal "b_naval";
					} else {
						_marker setMarkerTypeLocal "b_motor_inf";
					};
				};
			};
			private _vehName = getText(configOf _vehicle >> "displayName");
			_marker setMarkerTextLocal format ["%1 - %2 - %3",_vehName,_roleDescription,name _x];
		};
		_movingMarkers pushBack [_marker,_x];
	};
} forEach playableUnits;

{
	if (side driver _x isEqualTo west) then {
		private _marker = createMarkerLocal [format["uav%1",_forEachIndex],_x];
		_marker setMarkerColorLocal "ColorBLUFOR";
		_marker setMarkerTypeLocal "b_uav";
		_marker setMarkerTextLocal (getText(configOf _x >> "displayName"));
		_movingMarkers pushBack [_marker,_x];
	};
} forEach allUnitsUAV;

[
	{
		params ["_args","_handle"];
		_args params ["_staticMarkers","_movingMarkers"];

		if !(visibleMap) exitWith {
			[_handle] call CBA_fnc_removePerFrameHandler;
			{
				deleteMarkerLocal _x;
			} forEach _staticMarkers;

			{
				_x params ["_marker"];
				deleteMarkerLocal _marker;
			} forEach _movingMarkers;
		};

		{
			_x params ["_marker",["_unit",objNull]];
			if !(isNull _unit) then {
				_marker setMarkerPosLocal (getPosATL _unit);
			};
		} forEach _movingMarkers;
	},
	AW_mapUpdateInterval,
	[_staticMarkers,_movingMarkers]
] call CBA_fnc_addPerFrameHandler;