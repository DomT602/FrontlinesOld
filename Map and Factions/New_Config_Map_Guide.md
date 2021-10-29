# Making a custom faction:

Within the Config section of the missionfile lies all the files which are related to game mechanics and faction setup.
Each file has a prefix of Config_ and then the relevant title.
Choose which faction you want to make and select that file, rename it to Config_Blufor_Faction e.g Config_Blufor_BAF.
You will then need to update all of the arrays with the new factions gear/vehicles/objects. If the format of the array isn't obvious, the format of each array is defined in a comment next to or above the definition.
For the Blufor config, general gear and role specific gear is already included for convenience. The non-exhaustive list is below:
	- Medical
	- Engineer
	- Marksman
	- Autorifleman
	- UAV Operator
	- Chemlights, Flares and Smoke Grenades
	- Diving Equipment
	- Parachutes
This means all factions already have access to this gear and you do not need to add it to your specific config.
For the Opfor config, the FOBs have all been crafted by Skull and will not require changing per faction. Supply depots will need the vehicles they contain adjusted per faction. The radio towers can also remain the same.

The Config_Master contains some variables which might change per faction/map.

# Making a custom map:

Making a map has been made as easy as possible, a SQM kit has been included in the BlankMission.VR folder. Take the SQM from the folder and head to your missions folder in your Arma 3 profile. Create a folder called Dev.(mapName) such as Dev.Malden and place the SQM in the folder. Then head into Arma and open the mission and you will see 5 markers and all the units. Move the units as a whole (along with HC, Zeus and respawn point) to the debug area. Then start placing markers at various locations around the map, you should copy and paste the markers as the variables increment automatically. You can then set the name of the marker that will be used in-game, radio towers are automatically renamed with their grid references. If needed, you can create locations with objects on the map - radio towers will not need this, as they automatically spawn with a composition that can fit. You will also need to take the blank Config_Master from the VR folder and fill in the details here, this allows you to change the size of various sectors amongst other things. Once done save the file in your maps folder with the file name Config_Master_YourMap_Vars.