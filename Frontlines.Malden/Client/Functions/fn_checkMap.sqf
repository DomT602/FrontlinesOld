/*
	File: fn_checkMap.sqf
	Author: Dom
	Description: Handles opening of the map
*/
params ["_mapIsOpened","_mapIsForced"];
disableSerialization;

if (_mapIsOpened) then {
	private _map = findDisplay 46;

	private _text  = _map ctrlCreate ["RscStructuredText",-1]; 
	_text ctrlSetPosition [0.9 * safezoneW + safezoneX,0.8 * safezoneH + safezoneY,0.1 * safezoneW,0.2 * safezoneH]; 
	_text ctrlSetBackgroundColor [0,0,0,0.3]; 
	_text ctrlCommit 0;
	private _textToShow = "Active Sectors:<br/>";
	{
		_textToShow = format ["%1%2<br/>",_textToShow,markerText _x];
	} forEach AW_activeSectors;
	_text ctrlSetStructuredText parseText _textToShow;
	uiNamespace setVariable ["AW_sectorText",_text];

	private _text2  = _map ctrlCreate ["RscStructuredText",-1];
	_text2 ctrlSetPosition [0.4 * safezoneW + safezoneX,0.005 * safezoneH + safezoneY,0.2 * safezoneW,0.03 * safezoneH];
	_text2 ctrlCommit 0;
	_text2 ctrlSetStructuredText parseText format ["<t align='center'>Mission Progress: %1%2</t>",round(([] call AW_fnc_getMissionProgress) * 100),"%"];
	uiNamespace setVariable ["AW_progressText",_text2];

	[] call AW_fnc_createMarkers;
} else {
	ctrlDelete (uiNamespace getVariable ["AW_sectorText",controlNull]);
	ctrlDelete (uiNamespace getVariable ["AW_progressText",controlNull]);
};