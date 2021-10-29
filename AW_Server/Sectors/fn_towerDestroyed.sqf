/*
	File: fn_towerDestroyed.sqf
	Author: Dom
	Description: Reduces threat if the tower was destroyed recently after capture
*/
params ["_unit","_killer","_instigator","_useEffects"];

([getPosATL _unit,AW_radioTowerSectors] call AW_fnc_findNearestSector) params ["_sector"];
private _captureTimer = missionNamespace getVariable [format["AW_%1CapTime",_sector],-1500];
private _timer = getNumber(missionConfigFile >> "Core_Settings" >> "AW_radioTowerDestructionTimer") * 60;

if (_captureTimer + _timer > CBA_missionTime || {!(_sector in AW_bluforRadioTowers)}) then {
	private _threatReduction = getNumber(missionConfigFile >> "Core_Settings" >> "AW_radioTowerThreatReduction");
	[_threatReduction] call AW_fnc_adjustThreat;
	[format["The destruction of a radio tower has adjusted the threat level by %1.",_threatReduction]] remoteExecCall ["AW_fnc_notify",-2];
};

private _towerIndex = AW_bluforRadioTowers find _sector;
AW_bluforRadioTowers deleteAt _towerIndex;
publicVariable "AW_bluforRadioTowers";