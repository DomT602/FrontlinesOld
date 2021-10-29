/*
	File: fn_initSecondaryMenu.sqf
	Author: Dom
	Description: Starts the squad management menu
*/
params [
	["_action","",[""]]
];

private _display = findDisplay 9646;
private _groupListbox = _display displayCtrl 1500;
private _groupIndex = lbCurSel _groupListbox;
private _playerListbox = _display displayCtrl 1501;
private _playerIndex = lbCurSel _playerListbox;
private _playerGroups = allGroups select {side _x isEqualTo west && {isPlayer (leader _x)}};

switch _action do {
	case "join": {
		private _group = _playerGroups select _groupIndex;
		if (_group isNotEqualTo (group player)) then {
			[player] join _group;
			["Group joined."] call AW_fnc_notify;
			[
				{
					params ["_group"];
					player in (units _group)
				},
				{call AW_fnc_initSquadMenu},
				[_group]
			] call CBA_fnc_waitUntilAndExecute;
		} else {
			["You are already in this group."] call AW_fnc_notify;
		};
	};

	case "changeLeader": {
		private _group = _playerGroups select _groupIndex;
		if (_playerIndex isNotEqualTo -1) then {
			private _newLeader = call compile (_playerListbox lbData _playerIndex);
			if (_newLeader isEqualTo player) exitWith {
				["You are the leader."] call AW_fnc_notify;
			};
			_group selectLeader _newLeader;
			[format["%1 is your new squad leader.",name _newLeader]] remoteExecCall ["AW_fnc_notify",_group];
			call AW_fnc_initSquadMenu;
		};
	};
};