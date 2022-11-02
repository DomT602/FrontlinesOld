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
		(_x splitString "_") params ["_type"];
		if (_type in _desiredTypes) then {
			_sectors pushBack _x;
		};
	} forEach AW_allSectors;
};

if (_bluforOnly) then {
	_sectors = _sectors arrayIntersect AW_bluforSectors;
};

_sectors;