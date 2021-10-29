/*
	File: fn_getMissionProgress.sqf
	Author: Dom
	Description: Returns a ratio of mission progress
*/

private _totalCount = count AW_allSectors;
private _bluforCount = count AW_bluforSectors;

private _ratio = 0;
if (_bluforCount isNotEqualTo 0) then {
	_ratio = _bluforCount / _totalCount;
};

_ratio;