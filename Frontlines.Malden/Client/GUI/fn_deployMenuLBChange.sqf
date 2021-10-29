/*
	File: fn_deployMenuLBChange.sqf
	Author: Dom
	Description: Called on change of selection on deploy menu
*/
params [
	["_control",controlNull,[controlNull]],
	["_index",0,[0]]
];

private _position = parseSimpleArray (_control lbData _index);

private _display = findDisplay 9640;
private _mapControl = _display displayCtrl 1200;
private _timeToMove = ((_position distance AW_spawnCamera) / 2000) max 2;
_mapControl ctrlMapAnimAdd [_timeToMove,0.3,_position];
ctrlMapAnimCommit _mapControl;

AW_spawnCamera camSetTarget _position;
AW_spawnCamera camSetRelPos [0,180,250];
AW_spawnCamera camCommit _timeToMove;