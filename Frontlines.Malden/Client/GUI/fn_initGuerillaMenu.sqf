/*
	File: fn_initGuerillaMenu.sqf
	Author: Dom
	Description: Starts the guerilla action menu
*/
createDialog "AW_guerillaMenu";

private _display = findDisplay 9649;
private _tree = _display displayCtrl 1500;
private _guerillaActions = getArray(missionConfigFile >> "Guerilla_Setup" >> "AW_guerillaSupports");

private _textBox = _display displayCtrl 1000;
private _timer = CBA_missionTime - AW_guerillaCooldown;
if (_timer > 0) then {
	_textBox ctrlSetText "Cooldown: Ready";
} else {
	private _posTime = abs _timer;
	private _text = if (_posTime > 60) then {"minutes"} else {"minute"};
	_textBox ctrlSetText format["Cooldown: %1 %2",ceil(_posTime / 60),_text];
};

{
	_x params ["_title","_action","_civRepRequired","_cooldown"];
	private _actionIndex = _forEachIndex;

	_tree tvAdd [[],_title];
	_tree tvSetData [[_actionIndex],str([_action,_civRepRequired,(_cooldown * 60)])];

	private _colour = [1,0,0,1];
	if (AW_civRep >= _civRepRequired) then {
		_colour = [0,1,0,1];
	};
	_tree tvSetColor [[_actionIndex],_colour];

	if (_action in ["infAttack","mechAttack","sectorDefence"]) then {
		private _targetSectors = if (_action isEqualTo "sectorDefence") then {AW_activeSectors select {_x in AW_bluforSectors}} else {AW_activeSectors select {!(_x in AW_bluforSectors)}};
		{
			_tree tvAdd [[_actionIndex],markerText _x];
			_tree tvSetData [[_actionIndex,_forEachIndex],_x];
		} forEach _targetSectors;
	} else {
		if (_action isEqualTo "mortar") then {
			{
				_tree tvAdd [[_actionIndex],_x];
			} forEach ["HE x1","Smoke x1","Illumination x1","HE x3","Smoke x3","Illumination x3","HE x5","Smoke x5","Illumination x5"];
		} else {
			if (_action isEqualTo "crateRetrieve") then {
				private _crateTypes = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_bluforCrates");
				{
					private _radius = (getArray(missionConfigFile >> "Core_Settings" >> "AW_sectorSpawnRadius")) select ([_x] call AW_fnc_getSectorTypeIndex);
					private _crates = nearestObjects [markerPos _x,_crateTypes,(_radius * 1.1),true];
					if (_crates isNotEqualTo [] && {!(_x in AW_activeSectors)}) then {
						_tree tvAdd [[_actionIndex],markerText _x];
						_tree tvSetData [[_actionIndex,(_tree tvCount [_actionIndex]) - 1],_x];
					};
				} forEach AW_bluforSectors;
			} else {
				if (_action isEqualTo "supplyDrop") then {
					private _allSupplyBoxes = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_supplyCrates") select {_x select 0 in ["medicalCrateCategory","lightWeaponCrateCategory"]};
					{
						_x params ["_category","_title","_crateSize","_resourcesRequired","_contents"];
						_resourcesRequired params ["_supplies","_fuel","_ammo"];
						_tree tvAdd [[_actionIndex],format["%1 (%2-%3-%4)",_title,_supplies,_fuel,_ammo]];
						_tree tvSetData [[_actionIndex,_forEachIndex],str([_crateSize,_resourcesRequired,_contents])];
					} forEach _allSupplyBoxes;
				};
			};
		};
	};
} forEach _guerillaActions;

_tree tvSetCurSel [0];