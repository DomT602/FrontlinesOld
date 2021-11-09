/*
	File: fn_isNearFOB.sqf
	Author: Dom
	Description: Checks if the current position is near a FOB, true if near FOB
*/
params [
	["_startPos",[],[[]]],
	["_radius",(getNumber(missionConfigFile >> "Core_Settings" >> "AW_fobBuildRadius")),[0]]
];

private _nearFOB = AW_fobDetails findIf {(_x select 1) distance _startPos < _radius};

(_nearFob isNotEqualTo -1)