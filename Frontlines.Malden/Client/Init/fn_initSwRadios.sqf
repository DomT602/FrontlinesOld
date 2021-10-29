/*
	File: fn_initSwRadios.sqf
	Author: Dom
	Description: Sets up the handheld radios on designated frequencies
*/
params [
	["_unit",objNull,[objNull]],
	["_radios",[],[[]]]
];

{
	private _radio = _x;
	{
		[_radio,1 + _forEachIndex,_x] call TFAR_fnc_setChannelFrequency;
	} forEach ["40","50","51","52","60","61","70","71"];
} forEach _radios;

if (AW_autoSetRadioChannel) then {
	private _groups = [["Platoon"],["Alpha"],["Bravo"],["Charlie"],["Outlaw","Talon"],["Logistics"],["Hammer","Anvil"],["FSG"]];
	private _myGroup = groupId group player;
	private _index = _groups findIf {_myGroup in _x};

	[(call TFAR_fnc_activeSwRadio),_index] call TFAR_fnc_setSwChannel;
};