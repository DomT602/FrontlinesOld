/*
	File: fn_findFrontlineSectors.sqf
	Author: Dom
	Description: Finds desired count of blufor sectors along the frontline
*/
params [
	["_sectors",AW_bluforSectors,[[]]],
	["_count",5,[0]]
];

private _sortedArray = [];
private _opforSectors = AW_allSectors - _sectors;

{
	private _distance = 99999;
	private _bluforSector = _x;
	{
		private _testPos = (markerPos _bluforSector) distance (markerPos _x);
		if (_testPos < _distance) then {
			_distance = _testPos;
		};
	} forEach _opforSectors;
	_sortedArray pushBack [_distance,_bluforSector];
} forEach _sectors;

_sortedArray sort true;
private _sectorCount = count _sortedArray;
if (_count > _sectorCount) then {
	_count = _sectorCount;
};
_sortedArray resize _count;
_sortedArray = _sortedArray apply {_x select 1};

_sortedArray;