/*
	File: fn_findNearestSector.sqf
	Author: Dom
	Description: Finds the nearest sector
*/
params [
	["_startPos",[],[[]]],
	["_sectors",AW_allSectors,[[]]],
	["_checkEnemy",false,[true]]
];

private _distance = 99999;
private _closestIndex = -1;
{
	private _testPos = _startPos distance markerPos _x;
	if (_testPos < _distance) then {
		if (_checkEnemy && {_x in AW_bluforSectors}) exitWith {};
		_distance = _testPos;
		_closestIndex = _forEachIndex;
	};
} forEach _sectors;

private _sector = _sectors select _closestIndex;
[_sector,markerText _sector,_distance];