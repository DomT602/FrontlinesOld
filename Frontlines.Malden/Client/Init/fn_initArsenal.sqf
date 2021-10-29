/*
	File: fn_initArsenal.sqf
	Author: Dom
	Description: Sets up the ACE arsenal for player
*/
private _allowedItems = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_arsenalWeapons");
_allowedItems append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_arsenalMagazines"));
_allowedItems append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_arsenalItems"));
_allowedItems append (getArray(missionConfigFile >> "Blufor_Setup" >> "AW_arsenalBackpacks"));
_allowedItems append (getArray(missionConfigFile >> "Core_Settings" >> "AW_arsenalCommon"));

[player,_allowedItems,false] call ace_arsenal_fnc_addVirtualItems;

["ace_arsenal_displayClosed",{
	if (AW_isTFAREnabled && !([player] call TFAR_fnc_hasRadio)) then {["You have left the arsenal without a radio."] call AW_fnc_notify};
	if (AW_isTFAREnabled && {call TFAR_fnc_haveLRRadio}) then {call AW_fnc_initLrRadio};
	if (parseNumber([player] call ace_common_fnc_getWeight) > 45) then {["You are carrying a lot of equipment which will affect your ability to operate. It may be worth reviewing your loadout to reduce your weight."] call AW_fnc_notify};
}] call CBA_fnc_addEventHandler;