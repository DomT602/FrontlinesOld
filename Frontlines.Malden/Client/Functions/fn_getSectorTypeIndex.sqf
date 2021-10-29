/*
	File: fn_getSectorTypeIndex.sqf
	Author: Dom
	Description: Returns the index of the current sector to be used selecting from arrays
*/
params [
	["_sector","",[""]]
];

private _index = call {
	if (_sector in AW_townSectors) exitWith {0};
	if (_sector in AW_citySectors) exitWith {1};
	if (_sector in AW_militarySectors) exitWith {2};
	if (_sector in AW_radioTowerSectors) exitWith {3};
	4
};

_index;