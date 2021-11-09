/*
	File: fn_renameFOB.sqf
	Author: Dom
	Description: Handles renaming a FOB
*/
params [
	["_index",-1,[0]]
];

private _display = findDisplay 9650;
private _newName = ctrlText (_display displayCtrl 1400);

closeDialog 0;
private _fobArray = AW_fobDetails select _index;
_fobArray set [0,_newName];
publicVariable "AW_fobDetails";

(format["FOBmarker%1",_index]) setMarkerText _newName;