/*
	File: fn_guerillaMenuTvChange.sqf
	Author: Dom
	Description: Called on change of selection on guerilla menu
*/
params [
	["_control",controlNull,[controlNull]],
	["_selectionPath",[],[[]]]
];

private _display = findDisplay 9649;
private _button = _display displayCtrl 2400;
private _textBox = _display displayCtrl 1001;

_selectionPath params ["_firstIndex"];
(parseSimpleArray (_control tvData [_firstIndex])) params ["_action","_civRepRequired"];
_textBox ctrlSetText format["Required Civ Rep: %1%2",_civRepRequired,"%"];

if (count _selectionPath isEqualTo 1) exitWith {
	_button ctrlEnable false;
};

_button ctrlEnable (AW_civRep >= _civRepRequired && {CBA_missionTime > AW_guerillaCooldown});
if (_action isEqualTo "supplyDrop") then {
	(parseSimpleArray (_control tvData _selectionPath)) params ["","_resources"];
	_resources params ["_supplies","_fuel","_ammo"];
	AW_resourcesAvailable params ["_currentSupplies","_currentFuel","_currentAmmo"];
	if (_currentSupplies < _supplies || {_currentFuel < _fuel || {_currentAmmo < _ammo}}) then {
		_button ctrlEnable false;
	};
};

if (_action in ["infAttack","mechAttack","crateRetrieve","sectorDefence"]) then {
	private _sector = _control tvData _selectionPath;
	private _mapControl = _display displayCtrl 1200;
	_mapControl ctrlMapAnimAdd [2,0.3,markerPos _sector];
	ctrlMapAnimCommit _mapControl;
};