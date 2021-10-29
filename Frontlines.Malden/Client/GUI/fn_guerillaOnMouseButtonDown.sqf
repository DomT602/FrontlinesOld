/*
	File: fn_guerillaOnMouseButtonDown.sqf
	Author: Dom
	Description: Shows a marker where the player last clicks
*/
params [
	["_control",controlNull,[controlNull]],
	["_button",0,[0]],
	["_x",0,[0]],
	["_y",0,[0]]
];

if (_button isEqualTo 0) then {
	private _position = _control ctrlMapScreenToWorld [_x,_y];
	private _markerPos = markerPos "guerTarget";
	if (_markerPos isEqualTo [0,0,0]) then {
		_mortarMarker = createMarkerLocal ["guerTarget",_position];
		_mortarMarker setMarkerTypeLocal "mil_objective";
		_mortarMarker setMarkerColorLocal "ColorRed";
		_mortarMarker setMarkerTextLocal "Target";
	} else {
		"guerTarget" setMarkerPosLocal _position;
	};
};