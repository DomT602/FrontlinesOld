/*
	File: fn_initSecondaryMenu.sqf
	Author: Dom
	Description: Starts the secondary mission menu
*/

createDialog "AW_secondaryMenu";
private _display = findDisplay 9645;
private _listbox = _display displayCtrl 1500;

private _missions = getArray(missionConfigFile >> "Core_Settings" >> "AW_secondaryMissions");
private _descriptions = [
"We have recieved some intel that a FOB is located inside the red zone on your map.<br/>
Destroying this FOB would disrupt the enemies supply lines and command and control effectiveness.<br/>
You will need to locate and destroy the FOB's assets (laptops, supply trucks and containers) to complete this mission.<br/><br/>
<t color='#00a0ff'>Cost: 25 Intel<br/></t>
<t color='#00FF00'>Reward: -40 Opfor Threat</t>",

"We have received some intel that the enemy is going to attack a heritage site located on your map in 10 minutes.<br/>
You have 5 minutes to get into position from when this task is started and you will need to defend the site for 15 minutes.<br/>
Protecting this site will improve our relations with the local civilian population.<br/><br/>
<t color='#00a0ff'>Cost: 10 Intel<br/></t>
<t color='#00FF00'>Reward: +30 Civilian Reputation<br/></t>
<t color='#ffa000'>Failure: -30 Civilian Reputation</t>",

"We have recieved some intel that an enemy UAV has crashed inside the red zone on your map.<br/>
Capturing this UAV would provide us with intel on the enemies movements and plans.<br/>
The enemy are looking to secure it, and will be done within approximately 20 minutes, go there and secure it before they can!<br/><br/>
<t color='#00a0ff'>Cost: 10 Intel<br/></t>
<t color='#00FF00'>Reward: +30 Intel<br/></t>
<t color='#ffa000'>Failure: None</t>",

"The local population has requested our help to clear an area of UXOs that were left behind.<br/>
The UXOs will most likely be left on roads so keep an eye out as you travel in.<br/>
Completing this task will improve our relations with the locals.<br/><br/>
<t color='#00a0ff'>Cost: None<br/></t>
<t color='#00FF00'>Reward: +15 Civilian Reputation</t>",

"We have recieved some intel that an IED factory is located inside the red zone on your map.<br/>
Destroying this would reduce the enemy's Threat level.<br/>
There may also be some intel and supplies being stored there.<br/><br/>
<t color='#00a0ff'>Cost: 15 Intel<br/></t>
<t color='#00FF00'>Reward: -15 Opfor Threat</t>",

"We have recieved a request from a local village elder for some Humanitarian Aid.<br/>
They have requested you bring as many relief trucks as you can from your FOB.<br/>
These trucks can be found in the Logistics section of the Build Menu.<br/>
The enemy will be looking to intercept these trucks, so be careful.<br/><br/>
<t color='#00a0ff'>Cost: None<br/></t>
<t color='#00FF00'>Reward: +10 Civilian Reputation per truck</t>",

"We have recieved some intel that a supply depot has been setup behind enemy lines.<br/>
This depot could provide us plenty of resources to continue our efforts while disrupting the enemy.<br/>
Bring the trucks back to the FOB to secure the resources.<br/><br/>
<t color='#00a0ff'>Cost: 15 Intel<br/></t>
<t color='#00FF00'>Reward: +400 Resources per truck, -5 Opfor Threat</t>",

"We are able to setup a Listening Post nearby to our frontlines to gain more intel.<br/>
Setting this Post up would provide us a continuous stream of intel for 30 minutes.<br/>
The post can be found in the Logistics section of the Build Menu.<br/>
Once active, it is likely to be attacked by the enemy, ensure it is protected.<br/><br/>
<t color='#00a0ff'>Cost: None<br/></t>
<t color='#00FF00'>Reward: +2 Intel per minute active<br/></t>
<t color='#ffa000'>Failure: If destroyed by enemy, +5 Opfor Threat</t>",

"A local town has been hit hard by the conflict and has taken casualties.<br/>
They have requested our help treating these people.<br/>
A medic will be required for this mission.<br/>
You need to head to the marked location ASAP, these people are needing immediate assistance.<br/><br/>
<t color='#00a0ff'>Cost: None<br/></t>
<t color='#00FF00'>Reward: +5 Civilian Reputation per civilian saved<br/></t>
<t color='#ffa000'>Failure: -3 Civilian Reputation per civilian lost</t>"
];

{
	_x params ["_title"];
	_x pushBack (_descriptions select _forEachIndex);
	_listbox lbAdd _title;
	_listbox lbSetData [_forEachIndex,str(_x)];
} forEach _missions;
_listbox lbSetCurSel 0;