/*
	File: fn_buildMenuTvChange.sqf
	Author: Dom
	Description: Called on a new selection in the building menu
*/
params [
	["_control",controlNull,[controlNull]],
	["_selectionPath",[],[[]]]
];

private _display = findDisplay 9641;
private _button = _display displayCtrl 2400;
private _textBox = _display displayCtrl 1100;
if (count _selectionPath isEqualTo 1) exitWith {_button ctrlEnable false; _textBox ctrlSetStructuredText parseText ""};

(parseSimpleArray (_control tvData _selectionPath)) params ["_class","_resources","_conditions"];
if (_class isEqualType []) then {
	_class = _class select 0;
};

AW_resourcesAvailable params ["_currentSupplies","_currentFuel","_currentAmmo"];
_resources params ["_neededSupplies","_neededFuel","_neededAmmo"];

private _text = format ["
	<t size='2'>Resources required:</t><br/>
	Supplies: <t color='#00BF00'>%1</t><br/>
	Fuel: <t color='#BFBF00'>%2</t><br/>
	Ammo: <t color='#BF0000'>%3</t><br/><br/>",
	_neededSupplies,_neededFuel,_neededAmmo
];

if (_conditions isNotEqualTo "") then {
	private _extraText = "<t size='2'>Additional Requirements:</t><br/>";

	if ("AW_fobDetails" in _conditions) then {
		private _fobCount = getNumber(missionConfigFile >> "Core_Settings" >> "AW_maxFobs");
		_extraText = format ["%1Less then %2 FOBs deployed<br/>",_extraText,_fobCount];
	};

	if ("B_Radar_System_01_F" in _conditions) then {
		_extraText = format ["%1A radar present at this FOB<br/>",_extraText];
	};

	if ("AW_currentHelicopters" in _conditions) then {
		_extraText = format ["%1A spare helipad at this FOB<br/>",_extraText];
	};

	if ("AW_maxPlaneCount" in _conditions) then {
		_extraText = format ["%1A spare hangar at this FOB<br/>",_extraText];
	};

	if ("AW_civRep" in _conditions) then {
		private _startIndex = _conditions find "AW_civRep";
		private _number = parseNumber (_conditions select [(_startIndex + 11),3]);
		_extraText = format ["%1Civ Rep above %2%3<br/>",_extraText,_number,"%"];
	};

	if ("AW_fnc_getMissionProgress" in _conditions) then {
		private _startIndex = _conditions find "AW_fnc_getMissionProgress";
		private _number = (parseNumber (_conditions select [(_startIndex + 27),5])) * 100;
		_extraText = format ["%1Mission Progress above %2%3<br/>",_extraText,_number,"%"];
	};

	if ("Relief" in _conditions) then {
		_extraText = format ["%1Relief Mission in progress<br/>",_extraText];
	};

	if ("listeningPost" in _conditions) then {
		_extraText = format ["%1Listening Post Mission in progress<br/>",_extraText];
	};

	_text = format ["%1%2<br/>",_text,_extraText];
};

if (_class isKindOf "AllVehicles") then {
	private _config = configFile >> "CfgVehicles" >> _class;

	private _totalSeats = [_class,true] call BIS_fnc_crewCount;
	private _crewSeats = [_class,false] call BIS_fnc_crewCount;

	private _extraText = format ["
		<t size='2'>Additional Information:</t><br/>
		Max Speed: %1<br/>
		Crew Seats: %2<br/>
		Passenger Seats: %3<br/>",
		getNumber (_config >> "maxSpeed"),
		_crewSeats,
		(_totalSeats - _crewSeats)
	];

	_text = format ["%1%2<br/>",_text,_extraText];
};

_textBox ctrlSetStructuredText parseText _text;

if (_currentSupplies >= _neededSupplies && {_currentFuel >= _neededFuel && {_currentAmmo >= _neededAmmo && {[_conditions] call AW_fnc_conditionChecker}}}) then {
	_button ctrlEnable true;
} else {
	_button ctrlEnable false;	
};