if !(hasInterface) exitWith {
	[] remoteExecCall ["AW_fnc_initHC",2];
};

waitUntil {!isNil "AW_serverReady" && {AW_serverReady && {!isNull player && {!isNull (findDisplay 46)}}}};

if (AW_isTFAREnabled) then {
	if (!call TFAR_fnc_isTeamSpeakPluginEnabled && {!is3DENPreview}) then {
		titleText ["Please ensure your TFAR plugin is enabled and you are on our teamspeak.","BLACK"];
		waitUntil {call TFAR_fnc_isTeamSpeakPluginEnabled};
		titleFadeOut 1;
	};
	["radioSetup","OnRadiosReceived",AW_fnc_initSwRadios] call TFAR_fnc_addEventHandler;
};

addMissionEventHandler ["HandleChatMessage",AW_fnc_handleChatMessage];
addMissionEventHandler ["Map",AW_fnc_checkMap];
player addEventHandler ["HandleRating",{0}];
player addEventHandler ["GetInMan",AW_fnc_getInMan];
player addEventHandler ["SeatSwitchedMan",AW_fnc_seatSwitchedMan];
player addEventHandler ["GetOutMan",AW_fnc_getOutMan];
player addEventHandler ["Respawn",AW_fnc_respawn];
["ace_medical_woundReceived",{
	params ["_unit","","","_instigator","_typeOfDamage"];
	if (isNull _instigator || {!isPlayer _instigator || {!isPlayer _unit}}) exitWith {};

	if (_instigator isNotEqualTo _unit) then {
		["You are hitting friendlies, watch your fire."] remoteExecCall ["AW_fnc_notify",_instigator];
		[format["%1 (%2) injured %3 (%4) with %5 damage.",name _instigator,getPlayerUID _instigator,profileName,getPlayerUID player,_typeOfDamage]] remoteExecCall ["AW_fnc_logIt",2];
	};
}] call CBA_fnc_addEventHandler;

["ace_arsenal_displayClosed",{
	if (AW_isTFAREnabled && !([player] call TFAR_fnc_hasRadio)) then {["You have left the arsenal without a radio."] call AW_fnc_notify};
	if (AW_isTFAREnabled && {call TFAR_fnc_haveLRRadio}) then {call AW_fnc_initLrRadio};
	if (parseNumber([player] call ace_common_fnc_getWeight) > 45) then {["You are carrying a lot of equipment which will affect your ability to operate. It may be worth reviewing your loadout to reduce your weight."] call AW_fnc_notify};
	if (AW_autoSaveLoadout) then {
		AW_respawnLoadout = getUnitLoadout player;
		["Loadout saved."] call AW_fnc_notify;
	};
}] call CBA_fnc_addEventHandler;

call AW_fnc_initCBAsettings;
call AW_fnc_createAceActions;

private _defaultLoadout = getArray(missionConfigFile >> "Dynamic_Roles" >> "rifleman" >> "defaultLoadout");
["Default",_defaultLoadout] call ace_arsenal_fnc_addDefaultLoadout;
player setUnitLoadout _defaultLoadout;

waitUntil {time > 0};
if (AW_showIntro) then {
	createDialog "RscDisplayWelcome";
	private _display = findDisplay 999999;
	private _text = _display displayCtrl 1100;
	private _message = "
		<t align='center' size='6' shadow='0'><br/>Frontlines</t><br/>
		Welcome to Frontlines, a gamemode made for Ahoyworld by Dom and the Ahoyworld Team.<br/><br/>
		<a color='#00DFFF'>•</a> Github: <a href='https://github.com/DomT602/Frontlines' color='#56BDD6'> https://github.com/DomT602/Frontlines</a><br/>
		<a color='#00DFFF'>•</a> Discord: <a href='https://discord.gg/82tAKdsT79' color='#56BDD6'> https://discord.gg/82tAKdsT79</a>
	";

	_text ctrlSetStructuredText (parseText _message);
	(ctrlPosition _text) params ["_xPos","_yPos","_width"];
	private _height = ctrlTextHeight _text;
	_text ctrlSetPosition [_xPos,_yPos,_width,_height];
	_text ctrlCommit 0;
	waitUntil {isNull _display};
};

658 cutRsc ["AW_HUD","PLAIN",-1];
AW_uiHandle = [AW_fnc_updateUI,AW_uiUpdateInterval,[[0],true,""]] call CBA_fnc_addPerFrameHandler;

if (getPlayerUID player in AW_staffUIDs) then {
	[player] remoteExecCall ["AW_fnc_assignZeus",2];

	private _zeusMenu = [
		"zeusMenu",
		"Zeus Suite",
		"\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\navigate_ca.paa",
		{call AW_fnc_initZeusMenu},
		{true}
	] call ace_interact_menu_fnc_createAction;
	[player,1,["ACE_SelfActions"],_zeusMenu] call ace_interact_menu_fnc_addActionToObject;
};

call AW_fnc_initDeployMenu;

private _display = findDisplay 9640;
waitUntil {isNull _display};

[] call DT_fnc_initGroupMenu;