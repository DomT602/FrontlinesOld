/*
	File: fn_createAceActions.sqf
	Author: Dom
	Description: Sets up the ACE actions for the player
*/
private _roleDescription = roleDescription player;
private _isAdmin = (getPlayerUID player) in AW_staffUIDs;
private _isLeader = "Leader" in _roleDescription;
private _isPilot = "Pilot" in _roleDescription;
private _isCommander = "Commander" in _roleDescription;
private _isLogistics = "Logistics" in _roleDescription;
private _isEngineer = "Engineer" in _roleDescription;
private _isPlatoon = "Platoon" in _roleDescription;
private _fobClass = getText(missionConfigFile >> "Blufor_Setup" >> "AW_fobBuilding");

private _bluforBuildables = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforLightVehicles");
_bluforBuildables append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforHeavyVehicles"));
_bluforBuildables append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforAirVehicles"));
_bluforBuildables append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforNavalVehicles"));
_bluforBuildables append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforDefences"));
_bluforBuildables append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforBuildings"));
_bluforBuildables append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforLogistics"));
_bluforBuildables = _bluforBuildables apply {if (_x select 0 isEqualType []) then {(_x select 0) select 0} else {_x select 0}};

private _baseCategory = [
	"baseCategory",
	"Frontlines",
	"",
	{},
	{alive player}
] call ace_interact_menu_fnc_createAction;

[player,1,["ACE_SelfActions"],_baseCategory] call ace_interact_menu_fnc_addActionToObject;

private _tutorialMenu = [
	"tutorialMenu",
	"Tutorial menu",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\unknown_ca.paa",
	{call AW_fnc_initTutorialMenu},
	{
		[getPosATL player] call AW_fnc_isNearFOB
	}
] call ace_interact_menu_fnc_createAction;
[player,1,["ACE_SelfActions","baseCategory"],_tutorialMenu] call ace_interact_menu_fnc_addActionToObject;

private _squadMenu = [
	"squadMenu",
	"Squad menu",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\meet_ca.paa",
	{call AW_fnc_initSquadMenu},
	{true}
] call ace_interact_menu_fnc_createAction;
[player,1,["ACE_SelfActions","ACE_TeamManagement"],_squadMenu] call ace_interact_menu_fnc_addActionToObject;

private _secondaryMenu = [
	"secondaryMenu",
	"Secondary Missions",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\scout_ca.paa",
	{call AW_fnc_initSecondaryMenu},
	{
		[getPosATL player] call AW_fnc_isNearFOB && 
		{AW_secondaryActive isEqualTo ""}
	}
] call ace_interact_menu_fnc_createAction;
[player,1,["ACE_SelfActions","baseCategory"],_secondaryMenu] call ace_interact_menu_fnc_addActionToObject;


//Arsenal
private _arsenalCategory = [
	"arsenalCategory",
	"Arsenal",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\armor_ca.paa",
	{[player,player,false] call ace_arsenal_fnc_openBox},
	{
		isNull objectParent player &&
		{[getPosATL player,50] call AW_fnc_isNearFOB}
	}
] call ace_interact_menu_fnc_createAction;

private _saveRespawnLoadout = [
	"saveLoadout",
	"Save respawn loadout",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\download_ca.paa",
	{
		AW_respawnLoadout = getUnitLoadout player;
		["Loadout saved."] call AW_fnc_notify;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _loadRespawnLoadout = [
	"loadLoadout",
	"Load respawn loadout",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\rearm_ca.paa",
	{
		player setUnitLoadout AW_respawnLoadout;
	},
	{!isNil "AW_respawnLoadout"}
] call ace_interact_menu_fnc_createAction;

private _copyLoadout = [
	"copyLoadout",
	"Copy loadout",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\download_ca.paa",
	{
		player setUnitLoadout (getUnitLoadout _target);
	},
	{	
		isPlayer _target &&
		{[getPosATL player,50] call AW_fnc_isNearFOB}
	}
] call ace_interact_menu_fnc_createAction;

[player,1,["ACE_SelfActions","baseCategory"],_arsenalCategory] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","baseCategory","arsenalCategory"],_saveRespawnLoadout] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","baseCategory","arsenalCategory"],_loadRespawnLoadout] call ace_interact_menu_fnc_addActionToObject;
["CAManBase",0,["ACE_MainActions"],_copyLoadout,true] call ace_interact_menu_fnc_addActionToClass; //if we use same unit classname, change it here
//Arsenal end



//Deploy menu
private _deploy = [
	"deploy",
	"Deploy",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\takeoff_ca.paa",
	{call AW_fnc_initDeployMenu},
	{
		private _pos = getPosATL player;
		private _isNearMobileRespawn = (AW_mobileRespawns findIf {_pos distance _x < 10}) isNotEqualTo -1;
		isNull objectParent player &&
		{[_pos,50] call AW_fnc_isNearFOB || _isNearMobileRespawn || player distance (markerPos "respawn") < 50}
	}
] call ace_interact_menu_fnc_createAction;

[player,1,["ACE_SelfActions","baseCategory"],_deploy] call ace_interact_menu_fnc_addActionToObject;

//Logistics
private _loadCrate = [
	"loadCrate",
	"Load crate",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\getin_ca.paa",
	{[_target] call AW_fnc_loadCrate},
	{
		private _transportClasses = getArray(missionConfigFile >> "Core_Settings" >> "AW_transportVehicles");
		_transportClasses = _transportClasses apply {_x select 0};
		isNull (attachedTo _target) && {nearestObjects [_target,_transportClasses,15] isNotEqualTo []}
	}
] call ace_interact_menu_fnc_createAction;

private _unloadCrate = [
	"unloadCrate",
	"Unload crate",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\getout_ca.paa",
	{[_target] call AW_fnc_unloadCrate},
	{
		(_target getVariable ["AW_loadedCrates",[]]) isNotEqualTo [] &&
		{speed _target isEqualTo 0}
	}
] call ace_interact_menu_fnc_createAction;

private _storeCrate = [
	"storeCrate",
	"Store crate",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\download_ca.paa",
	{
		[_target] remoteExecCall ["AW_fnc_storeCrate",2];
		["Storing crate."] call AW_fnc_notify;
	},
	{
		isNull (attachedTo _target) && 
		{[getPosATL player] call AW_fnc_isNearFOB || 
		{[getPosATL player,AW_factorySectors,100] call AW_fnc_isNearSector}}
	}
] call ace_interact_menu_fnc_createAction;

private _crateClasses = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforCrates");
{
	[_x,0,["ACE_MainActions"],_loadCrate] call ace_interact_menu_fnc_addActionToClass;
	[_x,0,["ACE_MainActions"],_storeCrate] call ace_interact_menu_fnc_addActionToClass;
} forEach _crateClasses;

private _vehicleClasses = getArray(missionConfigFile >> "Core_Settings" >> "AW_transportVehicles");
{
	_x params ["_class"];
	[_class,0,["ACE_MainActions"],_unloadCrate,true] call ace_interact_menu_fnc_addActionToClass;
} forEach _vehicleClasses;


private _logisticsCategory = [
	"logisticsCategory",
	"Logistics",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
	{},
	{isNull objectParent player}
] call ace_interact_menu_fnc_createAction;

private _buildMenu = [
	"buildMenu",
	"Build menu",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\defend_ca.paa",
	{call AW_fnc_initBuildMenu},
	{
		isNull objectParent player && 
		{[getPosATL player] call AW_fnc_isNearFOB}
	}
] call ace_interact_menu_fnc_createAction;

private _factoryMenu = [
	"factoryMenu",
	"Factory menu",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\box_ca.paa",
	{call AW_fnc_initFactoryMenu},
	{
		AW_factorySetup isNotEqualTo [] &&
		{[getPosATL player] call AW_fnc_isNearFOB ||
		{[getPosATL player,AW_factorySectors] call AW_fnc_isNearSector}}
	}
] call ace_interact_menu_fnc_createAction;

private _retrieveCrates = [
	"retrieveCrates",
	"Withdraw resources",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\getout_ca.paa",
	{call AW_fnc_initRetrieveMenu},
	{
		[getPosATL player,100] call AW_fnc_isNearFOB ||
		{([getPosATL player,AW_factorySectors] call AW_fnc_findNearestSector) params ["_sector","","_distance"];
		_sector in AW_bluforSectors && {_distance < 100}}
	}
] call ace_interact_menu_fnc_createAction;

private _logisticMenu = [
	"logisticMenu",
	"Logistics menu",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\truck_ca.paa",
	{[true] call AW_fnc_initLogisticsMenu},
	{
		[getPosATL player] call AW_fnc_isNearFOB ||
		{[getPosATL player,AW_factorySectors] call AW_fnc_isNearSector}
	}
] call ace_interact_menu_fnc_createAction;

private _createNewFOB = [
	"createNewFOB",
	"Establish new FOB",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\container_ca.paa",
	{[_target] spawn AW_fnc_createNewFOB},
	{
		isNull objectParent player &&
		{!([getPosATL player] call AW_fnc_isNearFOB)}
	}
] call ace_interact_menu_fnc_createAction;

private _recycleObject = [
	"recycleObject",
	"Recycle",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
	{[_target] spawn AW_fnc_recycleObject},
	{
		isNull objectParent player &&
		{crew _target isEqualTo [] &&
		{[getPosATL player] call AW_fnc_isNearFOB &&
		{(nearestObjects [player,["Land_RepairDepot_01_tan_F"],150]) isNotEqualTo []}}}
	},
	nil,nil,nil,8
] call ace_interact_menu_fnc_createAction;

private _moveObject = [
	"moveObject",
	"Move",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
	{[_target] call AW_fnc_moveObject},
	{
		isNull objectParent player &&
		{[getPosATL player] call AW_fnc_isNearFOB}
	}
] call ace_interact_menu_fnc_createAction;

if (_isLogistics || {_isLeader || {_isPilot || {_isCommander || {_isPlatoon || {_isAdmin}}}}}) then {
	[player,1,["ACE_SelfActions","baseCategory"],_logisticsCategory] call ace_interact_menu_fnc_addActionToObject;
	[player,1,["ACE_SelfActions","baseCategory","logisticsCategory"],_buildMenu] call ace_interact_menu_fnc_addActionToObject;

	["AllVehicles",0,["ACE_MainActions"],_recycleObject,true] call ace_interact_menu_fnc_addActionToClass;
	{
		if !(_x isKindOf "Car" || {_x isKindOf "Tank" || {_x isKindOf "Ship" || {_x isKindOf "Air"}}}) then {
			[_x,0,["ACE_MainActions"],_recycleObject] call ace_interact_menu_fnc_addActionToClass;
			[_x,0,["ACE_MainActions"],_moveObject] call ace_interact_menu_fnc_addActionToClass;
		};
	} forEach _bluforBuildables; //add to any blufor buildables
	if (!_isAdmin && {"Team" in _roleDescription}) exitWith {};

	[player,1,["ACE_SelfActions","baseCategory","logisticsCategory"],_factoryMenu] call ace_interact_menu_fnc_addActionToObject;
	[player,1,["ACE_SelfActions","baseCategory","logisticsCategory"],_logisticMenu] call ace_interact_menu_fnc_addActionToObject;
	[player,1,["ACE_SelfActions","baseCategory","logisticsCategory"],_retrieveCrates] call ace_interact_menu_fnc_addActionToObject;

	{
		[_x,0,["ACE_MainActions"],_createNewFOB] call ace_interact_menu_fnc_addActionToClass;
	} forEach (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_fobBoxes"));

	private _skipTime = [
		"skipTimeAction",
		"Skip 2 hours",
		"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\wait_ca.paa",
		{
			[2] remoteExecCall ["skipTime",2];
		},
		{true}
	] call ace_interact_menu_fnc_createAction;

	private _guerillaMenu = [
		"guerillaMenu",
		"Guerilla Support",
		"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\help_ca.paa",
		{[] call AW_fnc_initGuerillaMenu},
		{AW_civRep > 0}
	] call ace_interact_menu_fnc_createAction;

	if (_isAdmin || {_isLeader}) then {
		[_fobClass,0,["ACE_MainActions"],_skipTime] call ace_interact_menu_fnc_addActionToClass;
		[player,1,["ACE_SelfActions","baseCategory"],_guerillaMenu] call ace_interact_menu_fnc_addActionToObject;
	};
};

private _emergencyRefuel = [
	"emergencyRefuel",
	"Emergency refuel",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\refuel_ca.paa",
	{
		[_target,0.2] remoteExecCall ["setFuel",_target]; ["Vehicle fueled."] call AW_fnc_notify
	},
	{
		isNull objectParent player && 
		{fuel _target < 0.1}
	}
] call ace_interact_menu_fnc_createAction;

private _pushVehicle = [
	"pushVehicle",
	"Push",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\repair_ca.paa",
	{
		private _dir = direction player;
		[_target,[sin _dir * 10,cos _dir * 10,0]] remoteExecCall ["setVelocity",_target];
	},
	{
		isNull objectParent player && 
		{!canMove _target &&
		{alive _target &&
		{crew _target isEqualTo [] && 
		{locked _target < 2}}}}
	}
] call ace_interact_menu_fnc_createAction;

private _retrieveWheel = [
	"retrieveWheel",
	"Retrieve wheel",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\repair_ca.paa",
	{
		createVehicle ["ACE_Wheel",getPosATL player,[],0,"CAN_COLLIDE"];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _retrieveTrack = [
	"retrieveTrack",
	"Retrieve track",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\repair_ca.paa",
	{
		createVehicle ["ACE_Track",getPosATL player,[],0,"CAN_COLLIDE"];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _destroyWheelTrack = [
	"destroyWheelTrack",
	"Destroy",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\destroy_ca.paa",
	{
		_target setDamage 1;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

if (_isEngineer || {_isPilot}) then {
	["AllVehicles",0,["ACE_MainActions"],_emergencyRefuel,true] call ace_interact_menu_fnc_addActionToClass;
};
{
	[_x,0,["ACE_MainActions"],_pushVehicle,true] call ace_interact_menu_fnc_addActionToClass;
} forEach ["Car","Tank"];

["B_Slingload_01_Repair_F",0,["ACE_MainActions"],_retrieveWheel] call ace_interact_menu_fnc_addActionToClass;
["B_Slingload_01_Repair_F",0,["ACE_MainActions"],_retrieveTrack] call ace_interact_menu_fnc_addActionToClass;
{
	[_x,0,["ACE_MainActions"],_destroyWheelTrack] call ace_interact_menu_fnc_addActionToClass;
} forEach ["ACE_Wheel","ACE_Track"];
//Logistics end



//Medical
private _fullHealSelf = [
	"aceFullHeal",
	"Full heal self",
	"\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa",
	{[player] call ace_medical_treatment_fnc_fullHealLocal},
	{true}
] call ace_interact_menu_fnc_createAction;

private _fullHealAll = [
	"aceFullHealAll",
	"Full heal nearby players (including self)",
	"\a3\ui_f\data\IGUI\Cfg\Actions\heal_ca.paa",
	{
		{
			if (_x distance player < 25) then {
				[_x] remoteExecCall ["ace_medical_treatment_fnc_fullHealLocal",_x];
			};
		} forEach playableUnits;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _medicalBuildingClasses = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_medicalBuildings");
{
	[_x,0,["ACE_MainActions"],_fullHealSelf] call ace_interact_menu_fnc_addActionToClass;
	[_x,0,["ACE_MainActions"],_fullHealAll] call ace_interact_menu_fnc_addActionToClass;
} forEach _medicalBuildingClasses;
//Medical end



//Intel
private _capture = [
	"capturePerson",
	"Capture",
	"\a3\ui_f\data\IGUI\Cfg\Actions\talk_ca.paa",
	{
		private _maxIntel = getNumber(missionConfigFile >> "Core_Settings" >> "AW_maxIntelFromPOW");
		private _threatModifier = 1 + (AW_opforThreat / 100);
		private _intelGained = ceil ((random _maxIntel) * _threatModifier);
		deleteVehicle _target;
		[_intelGained] remoteExecCall ["AW_fnc_adjustIntel",2];
		["Interrogation Completed","generalNotif","Intel Gained"] remoteExecCall ["AW_fnc_notify",-2];
	},
	{
		[getPosATL player] call AW_fnc_isNearFOB &&
		{captive _target && 
		{!isPlayer _target &&
		{isNull objectParent _target &&
		{[_target] call ace_medical_status_fnc_isInStableCondition}}}}
	}
] call ace_interact_menu_fnc_createAction;
["CAManBase",0,["ACE_MainActions"],_capture,true] call ace_interact_menu_fnc_addActionToClass;

private _secureIntel = [
	"captureIntel",
	"Secure Intel",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\search_ca.paa",
	{
		private _maxIntel = getNumber(missionConfigFile >> "Core_Settings" >> "AW_maxIntelFromItem");
		private _intelGained = ceil (random _maxIntel);
		deleteVehicle _target;
		[_intelGained] remoteExecCall ["AW_fnc_adjustIntel",2];
		["Intelligence Secured","generalNotif","Intel Gained"] remoteExecCall ["AW_fnc_notify",-2];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _intelClasses = getArray(missionConfigFile >> "Core_Settings" >> "AW_intelObjects");
{
	[_x,0,["ACE_MainActions"],_secureIntel] call ace_interact_menu_fnc_addActionToClass;
} forEach _intelClasses;
//Intel end



//FOB specific actions
private _cleanBase = [
	"cleanBase",
	"Clean base",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\use_ca.paa",
	{
		private _toClean = nearestObjects [player,["GroundWeaponHolder","WeaponHolderSimulated"],100];
		_toClean append (allDead select {_x distance (getPosATL player) < 100});

		{
			deleteVehicle _x;
		} forEach _toClean;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

[_fobClass,0,["ACE_MainActions"],_cleanBase] call ace_interact_menu_fnc_addActionToClass;

if (_isAdmin) then {
	private _zeusMenu = [
		"zeusMenu",
		"Zeus Suite",
		"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\navigate_ca.paa",
		{call AW_fnc_initZeusMenu},
		{true}
	] call ace_interact_menu_fnc_createAction;
	[player,1,["ACE_SelfActions"],_zeusMenu] call ace_interact_menu_fnc_addActionToObject;
};