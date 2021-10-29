/*
	File: fn_isNearSector.sqf
	Author: Dom
	Description: Checks if the current position is near a certain sector type
*/
params [
	["_startPos",[],[[]]],
	["_sectors",[],[[]]],
	["_radius",50,[0]]
];

private _nearSector = _sectors findIf {(markerPos _x) distance _startPos < _radius};

(_nearSector isNotEqualTo -1)