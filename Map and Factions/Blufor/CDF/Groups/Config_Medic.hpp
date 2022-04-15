/*
	Faction: Medic
	Author: Dom
*/
class medic {
	name = $STR_B_MEDIC_F0;
	rank = "Corporal";
	description = $STR_DT_Medic_Description;
	traits[] = {
		{"Medic",true}
	};
	customVariables[] = {
		{"ace_medical_medicClass",2,true}
	};
	icon = "a3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";

	defaultLoadout[] = {
		{"rhs_weap_m70b1","","","",{"rhs_30Rnd_762x39mm_polymer",30},{},""},
		{},
		{},
		{"rhsgref_uniform_ttsko_mountain",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_CableTie",2},{"ACE_EarPlugs",2},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_tourniquet",2},{"ACE_splint",2}}},
		{"rhsgref_6b23_ttsko_mountain_rifleman",{{"rhs_30Rnd_762x39mm_polymer",5,30},{"rhs_mag_rgn",1,1},{"rhs_mag_rdg2_white",1,1}}},
		{"B_Kitbag_cbr",{{"ACE_epinephrine",10},{"ACE_bloodIV",7},{"ACE_bloodIV_500",8},{"ACE_fieldDressing",30},{"ACE_elasticBandage",25},{"ACE_packingBandage",30},{"ACE_quikclot",25},{"ACE_morphine",10},{"ACE_surgicalKit",1},{"ACE_splint",10},{"ACE_tourniquet",5}}},
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