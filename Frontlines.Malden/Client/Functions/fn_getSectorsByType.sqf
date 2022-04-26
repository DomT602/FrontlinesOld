/*
	File: fn_getSectorsByType.sqf
	Author: Dom
	Description: Returns all sectors of a desired type
*/
params [
	["_desiredTypes","town",["",[]]],
	["_bluforOnly",false,[true]]
];

private _sectors = [];
if (_desiredTypes isEqualType "") then {
	_sectors = AW_allSectors select {_desiredTypes in _x};
} else {
	{
		private _sector = _x;
		{
			if (_x in _sector) exitWith {
				_sectors pushBack _sector;
			};
		} forEach _desiredTypes;
	} forEach AW_allSectors;
};

if (_bluforOnly) then {
	_sectors = _sectors arrayIntersect AW_bluforSectors;
};

_sectors;