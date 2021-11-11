/*
	File: fn_manualZeusAction.sqf
	Author: Dom
	Description: Applys action from manual zeus menu
*/
params [
	["_action","",[""]],
	["_data",0,[0]]
];

private _display = findDisplay 9647;
private _editBox = _display displayCtrl 1400;
private _sectorListbox = _display displayCtrl 1500;

switch _action do {
	case "adjustIntel": {
		private _text = ctrlText _editBox;
		if !([_text] call AW_fnc_checkNumber) exitWith {};
		private _number = parseNumber _text;

		[_number] remoteExecCall ["AW_fnc_adjustIntel",2];
		["Intel updated."] call AW_fnc_notify;
	};

	case "adjustCivRep": {
		private _text = ctrlText _editBox;
		if !([_text] call AW_fnc_checkNumber) exitWith {};
		private _number = parseNumber _text;

		[_number] remoteExecCall ["AW_fnc_adjustCivRep",2];
		["Civilian Reputation updated."] call AW_fnc_notify;
	};

	case "adjustThreat": {
		private _text = ctrlText _editBox;
		if !([_text] call AW_fnc_checkNumber) exitWith {};
		private _number = parseNumber _text;

		[_number] remoteExecCall ["AW_fnc_adjustThreat",2];
		["Threat Level updated."] call AW_fnc_notify;
	};

	case "adjustResources": {
		private _text = ctrlText _editBox;
		if !([_text] call AW_fnc_checkNumber) exitWith {};
		private _number = parseNumber _text;

		private _vector = [0,0,0];
		_vector set [_data,_number];
		AW_resourcesAvailable = AW_resourcesAvailable vectorAdd _vector;
		publicVariable "AW_resourcesAvailable";
		["Resources updated."] call AW_fnc_notify;
	};

	case "forceSave": {
		[] remoteExecCall ["AW_fnc_saveGame",2];
		["Save request sent to server."] call AW_fnc_notify;
	};

	case "wipeSave": {
		private _action = [
			"Are you sure you want to wipe the server progress (this should only need to be done before switching maps)",
			"Wiping Save",
			"Confirm",
			"Cancel"
		] call BIS_fnc_guiMessage;

		if (_action) then {
			[] remoteExecCall ["AW_fnc_wipeServer",2];
			["Wipe request sent to server."] call AW_fnc_notify;
		};
	};

	case "assignZeus": {
		[player] remoteExecCall ["AW_fnc_assignZeus",2];
	};

	case "sendReinforcements": {
		private _index = lbCurSel _sectorListbox;
		if (_index isEqualTo -1) exitWith {};

		private _sector = _sectorListbox lbData _index;
		if !(_sector in AW_activeSectors) exitWith {["Sector is not active."] call AW_fnc_notify};
		[_sector,markerPos _sector] remoteExecCall ["AW_fnc_callReinforcements",2];
		["Reinforcements have been called in - they will arrive in the configured time."] call AW_fnc_notify;
	};

	case "activateSector": {
		private _index = lbCurSel _sectorListbox;
		if (_index isEqualTo -1) exitWith {};

		private _sector = _sectorListbox lbData _index;
		if (_sector in AW_bluforSectors) exitWith {["This sector is already captured."] call AW_fnc_notify};
		if (_sector in AW_activeSectors) exitWith {["Sector must be inactive."] call AW_fnc_notify};

		[_sector] remoteExecCall ["AW_fnc_activateSector",2];
	};

	case "captureSector": {
		private _index = lbCurSel _sectorListbox;
		if (_index isEqualTo -1) exitWith {};

		private _sector = _sectorListbox lbData _index;
		if (_sector in AW_bluforSectors) exitWith {["This sector is already captured."] call AW_fnc_notify};
		if (_sector in AW_activeSectors) exitWith {["Sector must be inactive."] call AW_fnc_notify};

		AW_bluforSectors pushBack _sector;
		publicVariable "AW_bluforSectors";
		_sector setMarkerColor "colorBLUFOR";
		[_sector,0] remoteExecCall ["AW_fnc_setGarrisonStrength",2];
		_sectorListbox lbSetColor [_index,[0,0.3,0.6,1]];

		if (_sector in AW_radioTowerSectors) then {
			[_sector,true] remoteExecCall ["AW_fnc_setTower",2];
		} else {
			if (_sector in AW_factorySectors) then {
				AW_factorySetup pushBack [_sector,-1,[0,0,0]];
				publicVariable "AW_factorySetup";
			};
		};
	};

	case "loseSector": {
		private _index = lbCurSel _sectorListbox;
		if (_index isEqualTo -1) exitWith {};

		private _sector = _sectorListbox lbData _index;
		if !(_sector in AW_bluforSectors) exitWith {["This sector is not captured."] call AW_fnc_notify};
		if (_sector in AW_activeSectors) exitWith {["Sector must be inactive."] call AW_fnc_notify};

		private _sectorIndex = AW_bluforSectors find _sector;
		AW_bluforSectors deleteAt _sectorIndex;
		publicVariable "AW_bluforSectors";
		_sector setMarkerColor "colorOPFOR";
		[_sector,0.5] remoteExecCall ["AW_fnc_setGarrisonStrength",2];
		_sectorListbox lbSetColor [_index,[0.5,0,0,1]];

		private _factoryIndex = AW_factorySetup findIf {_x select 0 isEqualTo _sector};
		if (_factoryIndex isNotEqualTo -1) then {
			AW_factorySetup deleteAt _factoryIndex;
			publicVariable "AW_factorySetup";
		} else {
			if (_sector in AW_radioTowerSectors) then {
				[_sector,false] remoteExecCall ["AW_fnc_setTower",2];
			};
		};
	};

	case "fobAssault": {
		private _count = count playableUnits;
		if (_count < 3) exitWith {["Too few players on."] call AW_fnc_notify};
		[_count] remoteExecCall ["AW_fnc_fobAssault",2];
	};

	case "convoyAmbush": {
		if ((AW_logisticsSetup select 2) isEqualTo []) exitWith {["No convoys moving."] call AW_fnc_notify};
		private _count = count playableUnits;
		[_count] remoteExecCall ["AW_fnc_logisticsAmbush",2];
	};

	case "sectorCounterAttack": {
		if (AW_bluforSectors isEqualTo []) exitWith {["No sectors to attack."] call AW_fnc_notify};
		[] remoteExecCall ["AW_fnc_sectorCounterAttack",2];
	};

	case "allowDamage": {
		if (isDamageAllowed player) then {
			player allowDamage false;
			["Damage disabled."] call AW_fnc_notify;
		} else {
			player allowDamage true;
			["Damage enabled."] call AW_fnc_notify;
		};
	};

	case "openArsenal": {
		[player,player,true] call ace_arsenal_fnc_openBox;
	};

	case "heal": {
		private _vehicle = objectParent player;
		if !(isNull _vehicle) then {
			_vehicle setDamage 0;
		};
		[player] call ace_medical_treatment_fnc_fullHealLocal;
	};

	case "mapTP": {
		private _mapVar = missionNamespace getVariable ["AW_mapTpEnabled",false];
		if (_mapVar) then {
			onMapSingleClick "";
			missionNamespace setVariable ["AW_mapTpEnabled",false];
			["Map TP disabled."] call AW_fnc_notify;
		} else {
			onMapSingleClick "if (_alt) then {vehicle player setPosATL _pos}";
			missionNamespace setVariable ["AW_mapTpEnabled",true];
			["Use alt + left click to TP."] call AW_fnc_notify;
		};
	};

	case "hideObject": {
		if (isObjectHidden player) then {
			[player,false] remoteExecCall ["hideObjectGlobal",2];
			["Player object now shown."] call AW_fnc_notify;
		} else {
			[player,true] remoteExecCall ["hideObjectGlobal",2];
			["Player object now invisible."] call AW_fnc_notify;
		};
	};

	case "clearSmoke": {
		private _text = ctrlText _editBox;
		if !([_text,0] call AW_fnc_checkNumber) exitWith {};
		private _number = parseNumber _text;

		{
			deleteVehicle _x;
		} forEach (player nearObjects ["SmokeShell",_number]);
	};

	case "clearMines": {
		private _text = ctrlText _editBox;
		if !([_text,0] call AW_fnc_checkNumber) exitWith {};
		private _number = parseNumber _text;

		{
			deleteVehicle _x;
		} forEach (player nearObjects ["MineBase",_number]);
	};
};