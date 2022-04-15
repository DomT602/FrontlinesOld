/*
	Faction: Officer
	Author: Dom
*/
class officer {
	name = $STR_B_OFFICER_F0;
	rank = "Captain";
	description = $STR_DT_Officer_Description;
	traits[] = {

	};
	customVariables[] = {

	};
	icon = "a3\ui_f\data\map\vehicleicons\iconManCommander_ca.paa";

	defaultLoadout[] = {
		{"rhs_weap_m70b1","","","",{"rhs_30Rnd_762x39mm_polymer",30},{},""},
		{},
		{},
		{"rhsgref_uniform_ttsko_mountain",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_CableTie",2},{"ACE_EarPlugs",2},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_tourniquet",2},{"ACE_splint",2}}},
		{"rhsgref_6b23_ttsko_mountain_rifleman",{{"rhs_30Rnd_762x39mm_polymer",5,30},{"rhs_mag_rgn",1,1},{"rhs_mag_rdg2_white",1,1}}},
		{"TFAR_anprc155_coyote",{}},
		"rhsgref_6b27m_ttsko_mountain","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","rhs_1PN138"}

	};

	arsenalWeapons[] = {

	};
	arsenalMagazines[] = {

	};
	arsenalItems[] = {

	};
	arsenalBackpacks[] = {

	};
};