/*
	Faction: Crewman
	Author: Dom
*/
class crewman {
	name = $STR_B_CREW_F0;
	rank = "Private";
	description = $STR_DT_Crewman_Description;
	traits[] = {
		{"Engineer",true}
	};
	customVariables[] = {
		{"ace_isEngineer",1,true}
	};
	icon = "a3\ui_f\data\map\vehicleicons\iconMan_ca.paa";

	defaultLoadout[] = {
		{"rhs_weap_ak74m","rhs_acc_dtk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_plum_AK",30},{},""},
		{},
		{},
		{"rhs_uniform_vkpo_gloves",{{"ACE_fieldDressing",5},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_EarPlugs",1},{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_Flashlight_XL50",1},{"ACE_splint",2},{"ACE_tourniquet",2}}},
		{"rhs_6b45_rifleman",{{"rhs_30Rnd_545x39_7N10_plum_AK",8,30},{"rhs_mag_rgd5",2,1},{"rhs_mag_rdg2_white",2,1}}},
		{},
		"rhs_6b48","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch","rhs_1PN138"}
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