private _centre = getPosATL player;

diag_log text "Export:";
diag_log text "{";
{
	(getPosATL _x) params ["_xPos","_yPos","_zPos"];
	diag_log text format [
		"	{""%1"",{%2,%3,%4},%5},",
		typeOf _x,
		(_xPos - (_centre select 0)) toFixed 2,
		(_yPos - (_centre select 1)) toFixed 2,
		_zPos toFixed 2,
		(getDir _x) toFixed 2
	];
} forEach ((nearestObjects [_centre, ["All"], 50]) - [player]);
diag_log text "};";

diag_log text "Export Finished";