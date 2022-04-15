/*
	Faction: UAV Operator
	Author: Dom
*/
class uavop {
	name = $STR_A3_B_SOLDIER_UAV_F0;
	rank = "Sergeant";
	description = $STR_DT_UAVOp_Description;
	traits[] = {
		{"UAVHacker",true}
	};
	customVariables[] = {

	};
	icon = "a3\ui_f\data\map\vehicleicons\iconMan_ca.paa";

	defaultLoadout[] = {
		{"rhs_weap_m70b1","","","",{"rhs_30Rnd_762x39mm_polymer",30},{},""},
		{},
		{},
		{"rhsgref_uniform_ttsko_mountain",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_CableTie",2},{"ACE_EarPlugs",2},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_tourniquet",2},{"ACE_splint",2}}},
		{"rhsgref_6b23_ttsko_mountain_rifleman",{{"rhs_30Rnd_762x39mm_polymer",5,30},{"rhs_mag_rgn",1,1},{"rhs_mag_rdg2_white",1,1}}},
		{},
		"rhsgref_6b27m_ttsko_mountain","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","B_UavTerminal","TFAR_anprc154","ItemCompass","ItemWatch","rhs_1PN138"}

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