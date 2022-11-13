/*
	Faction: Engineer
	Author: Dom
*/
class engineer {
	name = $STR_B_ENGINEER_F0;
	rank = "Corporal";
	description = $STR_DT_Engineer_Description;
	traits[] = {
		{"Engineer",true},
		{"explosiveSpecialist",true}
	};
	customVariables[] = {
		{"ace_isEngineer",2,true}
	};
	icon = "a3\ui_f\data\map\vehicleicons\iconManEngineer_ca.paa";

	defaultLoadout[] = {
		{"rhs_weap_ak74m","rhs_acc_dtk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_plum_AK",30},{},""},
		{},
		{},
		{"rhs_uniform_vkpo_gloves",{{"ACE_fieldDressing",5},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_EarPlugs",1},{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_Flashlight_XL50",1},{"ACE_splint",2},{"ACE_tourniquet",2}}},
		{"rhs_6b45_rifleman",{{"rhs_30Rnd_545x39_7N10_plum_AK",8,30},{"rhs_mag_rgd5",2,1},{"rhs_mag_rdg2_white",2,1}}},
		{"rhs_rk_sht_30_emr_engineer_empty",{{"ToolKit",1},{"ACE_DefusalKit",1},{"ACE_M26_Clacker",1},{"MineDetector",1},{"rhsusf_m112x4_mag",2,1},{"ACE_wirecutter",1}}},
		"rhs_6b47","",
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