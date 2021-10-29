/*
	File: fn_hideMarkers.sqf
	Author: Dom
	Description: Shows/hides markers
*/
params [
	["_markers",AW_allSectors,[[]]],
	["_hideType","show",[""]]
];

{
	if (_hideType isEqualTo "show") then {
		_x setMarkerAlphaLocal 1;
	} else {
		if (_hideType isEqualTo "hideCaptured") then {
			if (_x in AW_bluforSectors) then {
				_x setMarkerAlphaLocal 0;
			};
		} else {
			_x setMarkerAlphaLocal 0;
		};
	};
} forEach _markers;