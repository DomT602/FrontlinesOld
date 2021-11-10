if !(hasInterface) exitWith {
	[] remoteExecCall ["AW_fnc_initHC",2];
};

waitUntil {!isNil "AW_serverReady" && {AW_serverReady && {!isNull player && {!isNull (findDisplay 46)}}}};

if (AW_isTFAREnabled) then {
	if (!call TFAR_fnc_isTeamSpeakPluginEnabled && {!is3DENPreview}) then {
		titleText ["Please ensure your TFAR plugin is enabled and you are on our teamspeak at ts.ahoyworld.net:9987","BLACK"];
		waitUntil {call TFAR_fnc_isTeamSpeakPluginEnabled};
		titleFadeOut 1;
	};
	["radioSetup","OnRadiosReceived",{_this call AW_fnc_initSwRadios}] call TFAR_fnc_addEventHandler;
};

addMissionEventHandler ["HandleChatMessage",{_this call AW_fnc_handleChatMessage}];
addMissionEventHandler ["Map",{_this call AW_fnc_checkMap}];
player addEventHandler ["HandleRating",{0}];
player addEventHandler ["GetInMan",{_this call AW_fnc_getInMan}];
player addEventHandler ["SeatSwitchedMan",{_this call AW_fnc_seatSwitchedMan}];
player addEventHandler ["GetOutMan",{_this call AW_fnc_getOutMan}];
player addEventHandler ["Respawn",{_this call AW_fnc_respawn}];
["ace_medical_woundReceived",{
	params ["_unit","","","_instigator","_typeOfDamage"];
	if (isNull _instigator || {!isPlayer _instigator || {!isPlayer _unit}}) exitWith {};

	if (_instigator isNotEqualTo _unit) then {
		["You are hitting friendlies, watch your fire."] remoteExecCall ["AW_fnc_notify",_instigator];
		[format["%1 (%2) injured %3 (%4) with %5 damage.",name _instigator,getPlayerUID _instigator,profileName,getPlayerUID player,_typeOfDamage]] remoteExecCall ["AW_fnc_logIt",2];
	};
}] call CBA_fnc_addEventHandler;

call AW_fnc_initArsenal;
call AW_fnc_initCBAsettings;
call AW_fnc_initDiary;
call AW_fnc_createAceActions;

private _defaultLoadout = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_defaultLoadout");
["Default",_defaultLoadout] call ace_arsenal_fnc_addDefaultLoadout;
player setUnitLoadout _defaultLoadout;

waitUntil {time > 0};
if (AW_showIntro) then {
	createDialog "RscDisplayWelcome";
	private _display = findDisplay 999999;
	private _text = _display displayCtrl 1100;
	private _message = "
		<img align='center' size='12' shadow='0' image='\AWMod\addons\AW_UI\misc\AW_members.paa'/>
		<t align='center' size='6' shadow='0'><br/>Frontlines</t><br/>
		Welcome to Frontlines, a gamemode made for Ahoyworld by Dom and the Ahoyworld Team.<br/><br/>
		<a color='#00DFFF'>•</a> Ahoyworld Forums: <a href='https://forums.ahoyworld.net/' color='#56BDD6'> https://forums.ahoyworld.net/</a><br/>
		<a color='#00DFFF'>•</a> Ahoyworld Enhanced Forums: <a href='https://forums.ahoyworld.net/forum/86-enhanced-server-information-and-discussion/' color='#56BDD6'> https://forums.ahoyworld.net/forum/86-enhanced-server-information-and-discussion/</a><br/>
		<a color='#00DFFF'>•</a> Teamspeak: <a href='ts.ahoyworld.net' color='#56BDD6'> ts.ahoyworld.net</a><br/>
		<a color='#00DFFF'>•</a> Discord: <a href='https://discord.gg/N7w3wKj' color='#56BDD6'> https://discord.gg/N7w3wKj</a>
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
};

call AW_fnc_initDeployMenu;
