/*
	File: fn_confirmDeploy.sqf
	Author: Dom
	Description: Starts the deploy menu
*/

private _display = findDisplay 9640;
private _listbox = _display displayCtrl 1500;
private _index = lbCurSel _listbox;
private _position = parseSimpleArray (_listbox lbData _index);
private _isMobileRespawn = (_listbox lbValue _index) isEqualTo 1;

private _randomSpawnPos = _position getPos [3 + (random 5),random 360];
player setVehiclePosition [_randomSpawnPos,[],0];

if (_isMobileRespawn) then {
	missionNamespace setVariable ["AW_lastMobileRespawn",CBA_missionTime];
};

closeDialog 0;

private _dateString = [date] call AW_fnc_dateToString;
private _nearString = "";
([getPosATL player] call AW_fnc_findNearestSector) params ["","_sectorName","_distance"];
if (_distance < 1500) then {
	_nearString = format ["Near %1",_sectorName];
};
[format["<t size='0.8' align='right'>%1<br/>%2<br/>%3<br/>%4</t>",profileName,_dateString,mapGridPosition player,_nearString],0.7,0.7,8] spawn BIS_fnc_dynamicText;
//camera destroyed in onUnload