/*
	File: fn_guerillaAction.sqf
	Author: Dom
	Description: Starts the guerilla action
*/

private _display = findDisplay 9649;
private _tree = _display displayCtrl 1500;
private _selectionPath = tvCurSel _tree;
_selectionPath params ["_firstIndex"];

(parseSimpleArray (_tree tvData [_firstIndex])) params ["_action","_civRepRequired","_cooldown"];
if (AW_civRep < _civRepRequired || {CBA_missionTime < AW_guerillaCooldown}) exitWith {["Conditions not met."] call AW_fnc_notify};
private _pos = markerPos "guerTarget";
if (_action in ["mortar","supplyDrop"] && {_pos isEqualTo [0,0,0]}) exitWith {["No target has been selected."] call AW_fnc_notify};

if (_action in ["infAttack","mechAttack","sectorDefence"]) then {
	private _sector = _tree tvData _selectionPath;
	[_sector,_action] remoteExecCall ["AW_fnc_spawnGuerillas",2];
} else {
	if (_action isEqualTo "mortar") then {
		private _mortarType = _tree tvText _selectionPath;

		private _count = 1;
		if ("3" in _mortarType) then {
			_count = 3;
		} else {
			if ("5" in _mortarType) then {
				_count = 5;
			};
		};
		_cooldown = _cooldown * _count;

		private _roundClass = "M_Mo_82mm_AT_LG";
		if ("Smoke" in _mortarType) then {
			_roundClass = "SmokeShellArty";
		} else {
			if ("Illumination" in _mortarType) then {
				_roundClass = selectRandom ["F_40mm_White","F_40mm_Yellow","F_40mm_Green","F_40mm_Red"];
				_pos set [2,50];
			};
		};

		for "_i" from 1 to _count do {
			[
				{
					params ["_pos","_type","_spread"];
					private _vehicle = createVehicle [_type,_pos,[],_spread];
					if ("F_40mm" in _type) then {
						_vehicle setVelocity [wind select 0,wind select 1,30];
					};
				},
				[_pos,_roundClass,10 + (3 * _i)],
				25 + (random 5) + (3 * _i)
			] remoteExecCall ["CBA_fnc_waitAndExecute",2];
		};
		["Rounds are being fired as ordered."] call AW_fnc_notify;
	} else {
		if (_action isEqualTo "crateRetrieve") then {
			private _sector = _tree tvData _selectionPath;
			[_sector] remoteExecCall ["AW_fnc_guerillaCrateRetrieve",2];
			[format["Guerillas are retrieving crates from %1.",markerText _sector]] call AW_fnc_notify;
		} else {
			if (_action isEqualTo "supplyDrop") then {
				private _crateDetails = parseSimpleArray (_tree tvData _selectionPath);
				[_pos,objNull,_crateDetails] call AW_fnc_createSupplyCrate;
			};
		};
	};
};

AW_guerillaCooldown = CBA_missionTime + _cooldown;
publicVariable "AW_guerillaCooldown";
closeDialog 0;