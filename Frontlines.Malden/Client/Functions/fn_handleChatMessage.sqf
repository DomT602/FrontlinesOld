/*
	File: fn_handleChatMessage.sqf
	Author: Dom
	Description: Handles any chat input
*/
params ["_channel","_owner","_from","_text","_person","_name","_strID","_forcedDisplay","_isPlayerMessage", "_sentenceType", "_chatMessageType"];

if (player isEqualTo _person && {_channel in [0,1,2] && {_text isNotEqualTo ""}}) then {
	"Chat" hintC ["Only talk in side, global and command channel in case of emergency.","This hint will pop up every time you use chat."];
};

nil; //nil returns the message originally put