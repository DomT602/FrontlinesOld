/*
	File: fn_findNearestFOB.sqf
	Author: Dom
	Description: Finds the nearest FOB
*/
params [
	["_startPos",[],[[]]]
];

private _distance = 99999;
{
	private _testPos = _startPos distance _x;
	if (_testPos < _distance) then {
		_distance = _testPos;
	};
} forEach AW_fobDetails;

_distance;