/*
	File: fn_initDiary.sqf
	Author: Dom
	Description: Sets up the diary
*/

player createDiarySubject ["Information","Information"];

player createDiaryRecord ["Information", ["Map Marker Settings","
<br/>Click to <execute expression = '[AW_allSectors,""hide""] call AW_fnc_hideMarkers'>Hide</execute>/<execute expression = '[AW_allSectors,""hideCaptured""] call AW_fnc_hideMarkers'>Hide captured</execute>/<execute expression = '[AW_allSectors,""show""] call AW_fnc_hideMarkers'>Show</execute> all markers.<br/>

<br/>Click to <execute expression = '[AW_citySectors,""hide""] call AW_fnc_hideMarkers'>Hide</execute>/<execute expression = '[AW_citySectors,""hideCaptured""] call AW_fnc_hideMarkers'>Hide captured</execute>/<execute expression = '[AW_citySectors,""show""] call AW_fnc_hideMarkers'>Show</execute> all cities.<br/>
<br/>Click to <execute expression = '[AW_townSectors,""hide""] call AW_fnc_hideMarkers'>Hide</execute>/<execute expression = '[AW_townSectors,""hideCaptured""] call AW_fnc_hideMarkers'>Hide captured</execute>/<execute expression = '[AW_townSectors,""show""] call AW_fnc_hideMarkers'>Show</execute> all towns.<br/>
<br/>Click to <execute expression = '[AW_factorySectors,""hide""] call AW_fnc_hideMarkers'>Hide</execute>/<execute expression = '[AW_factorySectors,""hideCaptured""] call AW_fnc_hideMarkers'>Hide captured</execute>/<execute expression = '[AW_factorySectors,""show""] call AW_fnc_hideMarkers'>Show</execute> all factories.<br/>
<br/>Click to <execute expression = '[AW_militarySectors,""hide""] call AW_fnc_hideMarkers'>Hide</execute>/<execute expression = '[AW_militarySectors,""hideCaptured""] call AW_fnc_hideMarkers'>Hide captured</execute>/<execute expression = '[AW_militarySectors,""show""] call AW_fnc_hideMarkers'>Show</execute> all military objectives.<br/>
<br/>Click to <execute expression = '[AW_radioTowerSectors,""hide""] call AW_fnc_hideMarkers'>Hide</execute>/<execute expression = '[AW_radioTowerSectors,""hideCaptured""] call AW_fnc_hideMarkers'>Hide captured</execute>/<execute expression = '[AW_radioTowerSectors,""show""] call AW_fnc_hideMarkers'>Show</execute> all radio towers.<br/>
"]];
