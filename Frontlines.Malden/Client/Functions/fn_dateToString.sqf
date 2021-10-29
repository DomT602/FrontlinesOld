/*
	File: fn_dateToString.sqf
	Author: Dom
	Description: Starts the deploy menu
*/
params [
	["_date",[],[[]]]
];

_date params ["_year","_month","_day","_hour","_minute"];

_month = switch _month do {
	case 1: {"Jan"};
	case 2: {"Feb"};
	case 3: {"Mar"};
	case 4: {"Apr"};
	case 5: {"May"};
	case 6: {"Jun"};
	case 7: {"Jul"};
	case 8: {"Aug"};
	case 9: {"Sep"};
	case 10: {"Oct"};
	case 11: {"Nov"};
	case 12: {"Dec"};	
};
if (_minute < 10) then {
	_minute = format["0%1",_minute];
};
if (_hour < 10) then {
	_hour = format["0%1",_hour];
};

private _string = format ["%1 %2 %3 - %4%5",_day,_month,_year,_hour,_minute];
_string;