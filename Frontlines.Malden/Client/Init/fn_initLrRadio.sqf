/*
	File: fn_initLrRadio.sqf
	Author: Dom
	Description: Sets up the backpack radio on designated frequencies
*/

private _activeLR = call TFAR_fnc_activeLrRadio;
{
	[_activeLR,1 + _forEachIndex,_x] call TFAR_fnc_setChannelFrequency;
} forEach ["30","31","40","50","51","52","60","67","70"];