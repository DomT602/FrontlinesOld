/*
	File: fn_getSectorTypeIndex.sqf
	Author: Dom
	Description: Returns the index of the current sector to be used when selecting from arrays
*/
params [
	["_sector","",[""]]
];

private _index = call {
	if ("town" in _sector) exitWith {0};
	if ("city" in _sector) exitWith {1};
	if ("military" in _sector) exitWith {2};
	if ("tower" in _sector) exitWith {3};
	4
};

_index;