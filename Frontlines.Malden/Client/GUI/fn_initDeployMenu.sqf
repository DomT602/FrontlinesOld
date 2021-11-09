/*
	File: fn_initDeployMenu.sqf
	Author: Dom
	Description: Starts the deploy menu
*/
if (dialog) exitWith {
	[{!dialog},AW_fnc_initDeployMenu] call CBA_fnc_waitUntilAndExecute;
};

createDialog "AW_deployMenu";
private _display = findDisplay 9640;
private _listbox = _display displayCtrl 1500;

AW_spawnCamera = "camera" camCreate [worldSize / 2,worldSize / 2,250];
AW_spawnCamera cameraEffect ["internal","back"];
showCinemaBorder false;
camUseNVG false;

private _populateListbox = {
	params ["_listbox","_showMobileRespawn"];
	lbClear _listbox;

	private _units = playableUnits;
	private _fobRadius = getNumber(missionConfigFile >> "Core_Settings" >> "AW_fobBuildRadius");
	private _fobNames = getArray(missionConfigFile >> "Core_Settings" >> "AW_fobNames");
	{
		_x params ["_name","_pos"];
		private _fobPlayerCount = count (_units inAreaArray [_pos,_fobRadius,_fobRadius]);
		_listbox lbAdd format ["%1 - %2 (%3)",_name,mapGridPosition _pos,_fobPlayerCount];
		_listbox lbSetData [_forEachIndex,str(_pos)];
		_listbox lbSetValue [_forEachIndex,0];
	} forEach AW_fobDetails;

	if (_showMobileRespawn) then {
		{
			if (alive _x && {speed _x < 1}) then {
				private _pos = getPosATL _x;
				private _mobPlayerCount = count (_units inAreaArray [_pos,100,100]);
				_listbox lbAdd format ["Mobile Respawn - %1 (%2)",mapGridPosition _x,_mobPlayerCount];
				private _index = (lbSize _listbox) - 1;
				_listbox lbSetData [_index,str(_pos)];
				_listbox lbSetValue [_index,1];
			};
		} forEach AW_mobileRespawns;
	};
};

private _lastMobileRespawnTime = missionNamespace getVariable ["AW_lastMobileRespawn",-60];
private _mobileRespawnTimer = getNumber(missionConfigFile >> "Core_Settings" >> "AW_mobileRespawnTimer");
if ((CBA_missionTime - _lastMobileRespawnTime) > _mobileRespawnTimer) then {
	[_listbox,true] call _populateListbox;
} else {
	[_listbox,false] call _populateListbox;
	[
		{
			params ["_display","_currentTime","_timeLimit"];
			isNull _display || {(CBA_missionTime - _currentTime) > _timeLimit}
		},
		{
			params ["_display","","","_listbox","_populateListbox"];
			if (isNull _display) exitWith {};

			[_listbox,true] call _populateListbox;
		},
		[_display,_lastMobileRespawnTime,_mobileRespawnTimer,_listbox,_populateListbox]
	] call CBA_fnc_waitUntilAndExecute;
};

private _countedMobileRespawns = {speed _x < 1} count AW_mobileRespawns;
[
	{
		params ["_display","_count","_listbox"];
		isNull _display || {_count isNotEqualTo ({speed _x isEqualTo 0} count AW_mobileRespawns)}
	},
	{
		params ["_display","","_listbox","_populateListbox"];
		if (isNull _display) exitWith {};

		[_listbox,true] call _populateListbox;
	},
	[_display,_countedMobileRespawns,_listbox,_populateListbox]
] call CBA_fnc_waitUntilAndExecute;

_listbox lbSetCurSel 0;