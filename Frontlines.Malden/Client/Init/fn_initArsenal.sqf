/*
	File: fn_initArsenal.sqf
	Author: Dom
	Description: Sets up the ACE arsenal for player
*/
["ace_arsenal_displayClosed",{
	if (AW_isTFAREnabled && !([player] call TFAR_fnc_hasRadio)) then {["You have left the arsenal without a radio."] call AW_fnc_notify};
	if (AW_isTFAREnabled && {call TFAR_fnc_haveLRRadio}) then {call AW_fnc_initLrRadio};
	if (parseNumber([player] call ace_common_fnc_getWeight) > 45) then {["You are carrying a lot of equipment which will affect your ability to operate. It may be worth reviewing your loadout to reduce your weight."] call AW_fnc_notify};
}] call CBA_fnc_addEventHandler;