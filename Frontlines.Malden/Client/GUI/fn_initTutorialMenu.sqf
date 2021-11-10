/*
	File: fn_initTutorialMenu.sqf
	Author: Dom
	Description: Starts the tutorial menu
*/

createDialog "AW_tutorialMenu";
private _display = findDisplay 9644;
private _listbox = _display displayCtrl 1500;

//for formatting, no tabs please :)
private _tutorialArray = [ //due to the nature of the text (using links etc), this can't be done in config and I'm too lazy for a stringtable
["Introduction",
"Welcome to Frontlines, a sector control gamemode developed by <a href='https://github.com/DomT602/Frontlines' color='#FF0000'>Dom</a>.<br/>
You begin with a FOB, a small amount of resources and the ability to create a free mobile respawn vehicle in the build menu.<br/>
Your overall mission is to capture all sectors in this region.<br/>
There are a variety of side missions will occur as the enemy resist your efforts.<br/>
You can start a variety of side objectives to weaken the enemy and assist the local population."],
["Resources",
"You begin with a small amount of resources.<br/>
Further resources can be found at factories, towns and cities.<br/>
Once you have captured a factory, you will be able to produce resources via the Logistics Menu. 100 supplies are needed to change a factories current production.<br/>
You will then need to send a convoy to collect the resources to return to a FOB, or collect them from factories yourself.<br/>
These resources can then be used to build your FOB and build assets to help you in your mission.<br/>
Some of the items require a suitably high civilian reputation and campaign progress."],
["Building",
"Each FOB begins as just a command building which provides access to the various features including acting as a spawn location and providing access to the arsenal.<br/>
Leadership roles have access to further features, including a Build Menu which will allow them to expand the FOB and build vehicles to assist in the campaign.<br/>
The enemy have been known to attack our FOBs, so defences will need to be set up to avoid loss of our assets.<br/>
In the Addon Options for Frontlines, there are various settings which will aid you in building your FOB."],
["Sectors",
"There are 5 types of sectors; cities, towns, factories, radio tower and military objectives.<br/>
Each of these has different defences and can provide different benefits once captured.<br/>
Each sector has a garrison of enemy units, this garrison is affected by the enemies overall strength on the island as well as any military activity against them.<br/>
A weakened garrison will no longer be able to field forces at their full strength.<br/>
The enemy will look to move their forces around to enable weaker garrisons to be reinforced.<br/>
Radio towers provide additional functionality. There is a laptop at each tower, which as long as the tower remains standing, which can be used to gather intelligence from the network of friendly towers, the more towers, the more intel gained. However, the towers can be destroyed to reduce the threat level, further explained in Opfor Threat."],
["Opfor Threat",
"The enemy forces threat level is displayed when you are at the FOB or looking at the map.<br/>
The threat level determines how difficult your mission will be, with a higher quantity of enemies present, with superior equipment.<br/>
The higher the threat level, the more the enemy will act against you.<br/>
You can combat this through secondary objectives and destroying radio towers before capture, or within 15 minutes of capture."],
["Civilian Reputation",
"The local civilian population have an opinion on your military efforts within the region.<br/>
The civilian populace will not tolerate the destruction of their homes, seizure of their assets or any civilian casualties.<br/>
A negative civilian reputation within a sector will result in hostility from the local Guerilla forces, and they will begin to actively attack friendly forces and disrupt operations within the region.<br/>
Civilian reputation can be improved by treating injured civilians after capturing a sector, completing certain secondary objectives and responding to requests for aid from the local population."],
["Guerilla Forces",
"The region is home to Guerillas who will fight and assist those who are favoured by the local population.<br/>
If a positive civilian reputation is attained, commanders may access the Guerilla support menu.<br/>
This menu allows commanders to call for additional support from the local Guerilla forces, and they may be able to assist with combat, logistical and fire support missions.<br/>
Each support action requires a certain level of civilian reputation to be attained.<br/>
When a call for support is made, the Guerillas will have a cooldown peroid before they can be called on again for support. Guerilla force casualties caused by friendly fire will also increase this cooldown peroid.<br/>
However, if the civilian reputation is negative, none of these support actions will be available and the Guerilla forces will side with the enemy."],
["Secondary Objectives",
"During the campaign, intelligence can be found that will allow completion of secondary objectives.<br/>
Intelligence can be found through secret documents, interrogating the enemy (or civilians) and harvesting data from the communications network (laptops at captured radio towers).<br/>
These can be used to increase civilian reputation, gain more intel and gain resources.<br/>
These can be accessed through the Secondary Mission Menu which is available at any FOB.<br/>
The missions try to find a suitable position each time its ran, so if it cannot find a position, try again (max 5 times). It may fail because there is no suitable area on the map left at all."],
["Special Requirements",
"Some vehicles have special requirements for them to be built.
To build helicopters or jets, we require a ground radar and a spare helipad or hangar for helicopters and jets respectively. The Mobile Respawn Helicopter does not require these conditions.<br/>
Some of the heavier assets require a certain level of progression within the campaign or a suitable civilain reputation.<br/>
All vehicles will be unlocked by 50% campaign progress and a civilian reputation above 50%."]
];

{
	_x params ["_title","_text"];
	_listbox lbAdd _title;
	_listbox lbSetData [_forEachIndex,_text];
} forEach _tutorialArray;
_listbox lbSetCurSel 0;
