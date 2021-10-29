/*
	File: fn_findFrontlineSector.sqf
	Author: Dom
	Description: Finds a suitable sector 'on the front line'
*/
params [
	["_sectors",AW_allSectors,[[]]],
	["_opfor",false,[true]]
];

if (_opfor) then {
	private _distance = 99999;
	private _sector = "";
	{
		private _opforSector = _x;
		{
			private _testPos = (markerPos _opforSector) distance (markerPos _x);
			if (_testPos < _distance) then {
				_distance = _testPos;
				_sector = _opforSector;
			};
		} forEach AW_bluforSectors;
	} forEach _sectors;
	_sector;
} else {
	private _opforSectors = AW_allSectors - AW_bluforSectors;
	private _distance = 99999;
	private _sector = "";
	{
		private _bluforSector = _x;
		{
			private _testPos = (markerPos _bluforSector) distance (markerPos _x);
			if (_testPos < _distance) then {
				_distance = _testPos;
				_sector = _bluforSector;
			};
		} forEach _opforSectors;
	} forEach _sectors;
	_sector;
};