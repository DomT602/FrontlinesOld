/*
	Faction: Chernarus Defence Force
	Author: LH5
	Requires: RHSGREF, Project Opfor, TFAR
*/
class Blufor_Setup {
	AW_fobBuilding = "Land_Cargo_HQ_V1_F";

	AW_bluforCrates[] = { //the order links to the variable containing all resources
		"CargoNet_01_box_F", //supplies
		"CargoNet_01_barrels_F", //fuel
		"B_CargoNet_01_ammo_F" //ammo
	};

	AW_fobBoxes[] = { //vehicles that FOBs can be created from
		"B_Slingload_01_Cargo_F",
		"rhsgref_cdf_gaz66_r142"
	};

	AW_mobileRespawns[] = { //vehicles that act as mobile respawns
        	"rhsgref_cdf_gaz66_ap2",
		"rhsgref_cdf_reg_Mi8amt"
    	};
    
	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"Land_Medevac_house_V1_F"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {									

		{"I_G_Quadbike_01_F", {50,25,0}, ""},

		{"rhsgref_cdf_b_reg_uaz", {50,10,0}, ""},
		{"rhsgref_cdf_b_reg_uaz_open", {50,10,0}, ""},		

		{"rhsgref_cdf_b_reg_uaz_ags", {60,25,50}, ""},
		{"rhsgref_cdf_b_reg_uaz_dshkm", {60,25,50}, ""},             
		{"rhsgref_cdf_b_reg_uaz_spg9", {65,25,50}, ""},                            
		{"rhsgref_BRDM2_b", {65,25,50}, ""},
		{"rhsgref_BRDM2_ATGM_b", {70,25,50}, ""},
		{"rhsgref_BRDM2UM_b", {70,25,50}, ""},
		{"rhsgref_BRDM2_HQ_b", {75,25,50}, ""},


		{"rhsgref_cdf_b_btr60", {200,50,75}, ""},
		{"rhsgref_cdf_b_btr70", {200,50,75}, ""},
	

		{"rhsgref_cdf_b_gaz66", {100,100,0}, ""},
		{"rhsgref_cdf_b_gaz66o", {100,100,0}, ""},
		{"rhsgref_cdf_b_ural", {100,100,0}, ""}, 
		{"rhsgref_cdf_b_ural_open", {100,100,0}, ""}, 
		{"rhsgref_cdf_b_zil131", {100,100,0}, ""},                     // cargo/transport trucks
		{"rhsgref_cdf_b_zil131_open", {100,100,0}, ""}
		
	};

	AW_bluforHeavyVehicles[] = {

		{"rhsgref_cdf_b_zsu234", {150,100,150}, ""},		
		{"rhsgref_cdf_b_gaz66_zu23", {150,100,150}, ""},
		{"rhsgref_cdf_b_ural_Zu23", {150,100,150}, ""},

		{"rhsgref_cdf_b_bmd1", {200,100,150}, ""},
		{"rhsgref_cdf_b_bmd1k", {200,100,150}, ""},
		{"rhsgref_cdf_b_bmd1p", {200,100,150}, ""},
		{"rhsgref_cdf_b_bmd1pk", {200,100,150}, ""},
		{"rhsgref_cdf_b_bmp1d", {200,100,150}, ""},
		{"rhsgref_cdf_b_bmp1k", {200,100,150}, ""},
		{"rhsgref_cdf_b_bmp1p", {200,100,150}, ""},

		{"rhsgref_cdf_b_bmd2", {220,100,150}, ""},
		{"rhsgref_cdf_b_bmd2k", {220,100,150}, ""},
		{"rhsgref_cdf_b_bmp2e", {220,100,150}, ""},
		{"rhsgref_cdf_b_bmp2", {220,100,150}, ""},
		{"rhsgref_cdf_b_bmp2d", {220,100,150}, ""},
		{"rhsgref_cdf_b_bmp2k", {220,100,150}, ""},


		{"rhsgref_cdf_b_t72ba_tv", {500,100,450}, ""},
		{"rhsgref_cdf_b_t72bb_tv", {500,100,450}, ""},
		{"rhsgref_cdf_b_t80b_tv", {500,100,450}, ""},
		{"rhsgref_cdf_b_t80bv_tv", {500,100,450}, ""},

		{"rhsgref_cdf_b_2s1", {500,100,450}, ""},
		{"rhsgref_cdf_b_reg_BM21", {500,100,450}, ""}
	
	};

	AW_bluforAirVehicles[] = {
		{"B_UAV_01_F", {50,100,0}, ""},                                             // AR-2 Darter

		{"rhsgref_cdf_b_reg_Mi17Sh", {200,150,50}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"rhs_ka60_grey", {150,150,50}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
			
		{"rhsgref_cdf_b_Mi24D_Early", {400,200,400}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                // Hinds
		{"rhsgref_cdf_b_Mi24D", {400,200,400}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                
		{"rhsgref_b_mi24g_CAS", {400,200,400}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},               
		{"rhsgref_cdf_b_Mi35", {400,200,400}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                

		{"RHS_AN2_B", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},											// C-130 (Transport)
										
		{"rhs_l159_cdf_b_CDF", {700,500,600}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"}, 
		{"rhs_l39_cdf_b_cdf", {700,500,600}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"}, 
		{"rhsgref_cdf_b_mig29s", {700,500,600}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"}, 
		{"rhsgref_cdf_b_su25", {700,500,600}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"} 										
	};

	AW_bluforNavalVehicles[] = {
		{"B_Boat_Transport_01_F", {100,25,25}, ""},
		{"O_Boat_Transport_01_F", {100,25,25}, ""},
		{"B_SDV_01_F", {150,40,70}, ""}
	};

	AW_bluforDefences[] = {
		{"rhsgref_cdf_b_Igla_AA_pod", {50,0,50}, ""},
		{"rhsgref_cdf_b_ZU23", {50,0,50}, ""},
		{"rhsgref_cdf_b_reg_d30", {50,0,50}, ""},                                	  	
		{"rhsgref_cdf_b_reg_d30_at", {50,0,50}, ""}                                          
	};

	AW_bluforBuildings[] = {
		{"Land_Medevac_house_V1_F", {30,0,0}, ""},

		{"Camp", {10,0,0}, ""},
		{"CampEast", {15,0,0}, ""},
		{"Land_tent_east", {15,0,0}, ""},
		{"CDF_WarfareBVehicleServicePoint", {15,0,0}, ""},
		{"Land_GuardTower_02_F", {10,0,0}, ""},

		{"lop_Flag_cdf_F", {5,0,0}, ""},
		{"Flag_RedCrystal_F", {5,0,0}, ""},

		{"Land_CamoNet_NATO", {5,0,0}, ""},
		{"Land_CamoNetVar_NATO", {5,0,0}, ""},
		{"Land_CamoNetB_NATO", {10,0,0}, ""},

		{"Land_PortableLight_single_F", {10,0,0}, ""},
		{"Land_PortableLight_double_F", {10,0,0}, ""},
		{"PortableHelipadLight_01_blue_F", {10,0,0}, ""},
		{"PortableHelipadLight_01_green_F", {10,0,0}, ""},
		{"PortableHelipadLight_01_red_F", {10,0,0}, ""},
		{"Land_Camping_Light_F", {10,0,0}, ""},
		{"Land_TentLamp_01_standing_F", {10,0,0}, ""},
		{"Land_TentLamp_01_standing_red_F", {10,0,0}, ""},
		{"Land_TentLamp_01_suspended_F", {10,0,0}, ""},
		{"Land_TentLamp_01_suspended_red_F", {10,0,0}, ""},

		{"Land_BagFence_01_round_green_F", {10,0,0}, ""},
		{"Land_BagFence_01_long_green_F", {10,0,0}, ""},
		{"Land_BagFence_01_corner_green_F", {10,0,0}, ""},
		{"Land_BagFence_01_end_green_F", {10,0,0}, ""},
		{"Land_fort_bagfence_long", {10,0,0}, ""},
		{"Land_fort_bagfence_corner", {10,0,0}, ""},
		{"Land_fort_bagfence_round", {10,0,0}, ""},
		{"Land_fort_rampart", {25,0,0}, ""},
		{"Land_fort_artillery_nest", {50,0,0}, ""},
		{"Land_BagBunker_01_small_green_F", {15,0,0}, ""},
		{"Land_BagBunker_01_large_green_F", {15,0,0}, ""},
		{"Land_HBarrier_01_tower_green_F", {75,0,0}, ""},

		{"Land_HBarrier_01_line_1_green_F", {5,0,0}, ""},
		{"Land_HBarrier_01_line_3_green_F", {15,0,0}, ""},
		{"Land_HBarrier_01_line_5_green_F", {20,0,0}, ""},
		{"Land_HBarrier_01_big_4_green_F", {50,0,0}, ""},
		{"Land_HBarrier_01_wall_4_green_F", {20,0,0}, ""},
		{"Land_HBarrier_01_wall_corner_green_F", {25,0,0}, ""},
		{"Land_HBarrier_01_wall_6_green_F", {50,0,0}, ""},
		{"Land_HBarrier_01_wall_corridor_green_F", {25,0,0}, ""},
		{"Land_HBarrier_01_big_tower_green_F", {100,0,0}, ""},
		
		{"BlockConcrete_F", {30,0,0}, ""},
		{"Land_RampConcrete_F", {30,0,0}, ""},
		{"Land_RampConcreteHigh_F", {30,0,0}, ""},

		{"Land_Razorwire_F", {15,0,0}, ""},
		{"Land_Mil_WiredFence_F", {25,0,0}, ""},
		{"Land_ConcreteHedgehog_01_F", {15,0,0}, ""},
		{"Land_CzechHedgehog_01_old_F", {15,0,0}, ""},

		{"Land_CampingChair_V1_F", {5,0,0}, ""},
		{"Land_CampingChair_V2_F", {5,0,0}, ""},
		{"Land_CampingTable_F", {5,0,0}, ""},
		{"Land_ConnectorTent_01_floor_light_F", {5,0,0}, ""},

		{"Land_Sign_WarningMilitaryArea_F", {5,0,0}, ""},
		{"Land_SignM_WarningMilitaryArea_english_F", {5,0,0}, ""},
		{"Land_Sign_WarningMilAreaSmall_F", {5,0,0}, ""},
		{"Land_SignM_WarningMilAreaSmall_english_F", {5,0,0}, ""},
		{"Land_Sign_WarningMilitaryVehicles_F", {5,0,0}, ""},
		{"Land_SignM_WarningMilitaryVehicles_english_F", {5,0,0}, ""},
		{"Land_Sign_MinesDanger_English_F", { 5,0,0}, ""},

		{"Land_BarGate_01_open_F", { 10,0,0}, ""},
		{"Land_Mil_WiredFence_Gate_F", { 10,0,0}, ""}
	};

	//If first element is array, you can overwrite default name as shown below
	AW_bluforLogistics[] = {
		{{"Land_Pallet_MilBoxes_F", "Supply Box"}, {200,0,200}, ""},
		{{"B_Slingload_01_Cargo_F", "FOB Container"}, {300,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},
		{{"rhsgref_cdf_gaz66_r142", "FOB Truck"}, {350,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},

		{{"Land_RepairDepot_01_tan_F", "Recycle Building"}, {250,0,0}, ""},
		{{"B_Radar_System_01_F", "Radar"}, {1000,0,0}, ""},
		{"Land_HelipadSquare_F", {250,0,0}, ""}, //Helipads to increase rotary capacity
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""}, //Hangar to increase fixed wing capacity

		{"Box_Syndicate_Ammo_F", {5,0,0}, ""},

		{"rhsgref_cdf_b_gaz66_repair", {300,0,0}, ""},
		{"rhsgref_cdf_b_ural_repair", {300,0,0}, ""},
		{"rhsgref_cdf_b_ural_fuel", {100,300,0}, ""},
		{"rhsgref_cdf_b_gaz66_ammo", {100,0,300}, ""},

		{{"rhsgref_cdf_gaz66_ap2", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"rhsgref_cdf_reg_Mi8amt", "Mobile Respawn Helicopter (free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"},
		{{"rhsgref_cdf_reg_Mi8amt", "Mobile Respawn Helicopter"}, {200,100,100}, ""},

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},

		{"TFAR_Land_Communication_F", {100,0,0}, ""},

		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
    
    //Sniper
    "rhs_weap_m76",

    //AR
    "rhs_weap_m21a",
    "rhs_weap_m21a_pr",
    "rhs_weap_m21a_pbg40",
    "rhs_weap_m21a_pr__pbg40",
    "rhs_weap_m21s",
    "rhs_weap_m21s_pr",
    "rhs_weap_m70ab2",
    "rhs_weap_m70b1",
    "rhs_weap_m92",
    "rhs_weap_vhsd2",
    "rhs_weap_vhsd2_ct15x",
    "rhs_weap_vhsd2_bg",
    "rhs_weap_vhsd2_bg_ct15x",
    "rhs_weap_vhsk2",
    "rhs_weap_ak74",
    "rhs_weap_ak74_gp25",
    "rhs_weap_aks74",
    "rhs_weap_aks74_gp25",
    "rhs_weap_aks74_2",
    "rhs_weap_aks74n",
    "rhs_weap_aks74n_gp25",
    "rhs_weap_aks74n_gp25_npz",
    "rhs_weap_aks74n_npz",
    "rhs_weap_aks74n_2",
    "rhs_weap_aks74n_2_npz",
    "rhs_weap_aks74u",
    "rhs_weap_akms",
    "rhs_weap_akms_gp25",

    //MG
    "rhs_weap_mg42",
    "rhs_weap_pkm",
    "rhs_weap_pkp",
    "rhs_weap_m240G",

    //SMG
    "rhs_weap_m3a1",
    "rhs_weap_m3a1_specops",
    "rhs_weap_savz61",


    //Pistol
    "rhs_weap_tt33",
    "rhs_weap_makarov_pm",
    "rhsusf_weap_glock17g4",
    "rhs_weap_rsp30_white",
    "rhs_weap_rsp30_green",
    "rhs_weap_rsp30_red",
    "ACE_Flashlight_Maglite_ML300L",
    "ACE_VMH3",
    "ACE_VMM3",

    //GL
    "rhs_weap_m79",

    //Launchers
    "rhs_weap_igla",
    "rhs_weap_rpg26",
    "rhs_weap_rpg7",
    "rhs_weap_rshg2",
    "rhs_weap_rpg75"

		
	};

	AW_arsenalMagazines[] = {
    //Sniper
    "rhssaf_10Rnd_792x57_m76_tracer",
    "rhsgref_10Rnd_792x57_m76",


    //MG
    "rhsgref_296Rnd_792x57_SmE_belt",
    "rhsgref_296Rnd_792x57_SmE_notracers_belt",
    "rhsgref_296Rnd_792x57_SmK_belt",
    "rhsgref_296Rnd_792x57_SmK_alltracers_belt",
    "rhsgref_50Rnd_792x57_SmE_drum",
    "rhsgref_50Rnd_792x57_SmE_notracers_drum",
    "rhsgref_50Rnd_792x57_SmK_drum",
    "rhsgref_50Rnd_792x57_SmK_alltracers_drum",
    "rhs_100Rnd_762x54mmR",
    "rhs_100Rnd_762x54mmR_7BZ3",
    "rhs_100Rnd_762x54mmR_7N13",
    "rhs_100Rnd_762x54mmR_7N26",
    "rhs_100Rnd_762x54mmR_green",
    "rhsusf_100Rnd_762x51_m61_ap",
    "rhsusf_100Rnd_762x51_m62_tracer",
    "rhsusf_100Rnd_762x51",
    "rhsusf_100Rnd_762x51_m80a1epr",
    "rhsusf_50Rnd_762x51_m61_ap",
    "rhsusf_50Rnd_762x51_m62_tracer",
    "rhsusf_50Rnd_762x51",
    "rhsusf_50Rnd_762x51_m80a1epr",


    //Rifle
    "rhsgref_30rnd_556x45_m21",
    "rhsgref_30rnd_556x45_m21_t",
    "rhs_10Rnd_762x39mm",
    "rhs_10Rnd_762x39mm_89",
    "rhs_10Rnd_762x39mm_tracer",
    "rhs_10Rnd_762x39mm_U",
    "rhs_30Rnd_762x39mm_polymer",
    "rhs_30Rnd_762x39mm_polymer_89",
    "rhs_30Rnd_762x39mm_polymer_tracer",
    "rhs_30Rnd_762x39mm_polymer_U",
    "rhs_30Rnd_762x39mm_bakelite",
    "rhs_30Rnd_762x39mm_bakelite_89",
    "rhs_30Rnd_762x39mm_bakelite_tracer",
    "rhs_30Rnd_762x39mm_bakelite_U",
    "rhs_30Rnd_762x39mm",
    "rhs_30Rnd_762x39mm_89",
    "rhs_30Rnd_762x39mm_tracer",
    "rhs_30Rnd_762x39mm_U",
    "rhs_30Rnd_545x39_7N10_2mag_AK",
    "rhs_30Rnd_545x39_7N10_2mag_camo_AK",
    "rhs_30Rnd_545x39_7N10_2mag_desert_AK",
    "rhs_30Rnd_545x39_7N10_2mag_plum_AK",
    "rhs_30Rnd_545x39_7N6_AK",
    "rhs_30Rnd_545x39_7N6M_AK",
    "rhs_30Rnd_545x39_AK_green",
    "rhs_30Rnd_545x39_7N10_camo_AK",
    "rhs_30Rnd_545x39_7N22_camo_AK",
    "rhs_30Rnd_545x39_7N10_desert_AK",
    "rhs_30Rnd_545x39_7N22_desert_AK",
    "rhs_30Rnd_545x39_7N6_green_AK",
    "rhs_30Rnd_545x39_7N6M_green_AK",
    "rhs_30Rnd_545x39_7N10_plum_AK",
    "rhs_30Rnd_545x39_7N22_plum_AK",
    "rhs_30Rnd_545x39_7N6M_plum_AK",
    "rhs_30Rnd_545x39_AK_plum_green",
    "rhs_30Rnd_545x39_7N10_AK",
    "rhs_30Rnd_545x39_7N22_AK",
    "rhs_30Rnd_545x39_7U1_AK",
    "rhs_45Rnd_545X39_7N10_AK",
    "rhs_45Rnd_545X39_7N22_AK",
    "rhs_45Rnd_545X39_7N6_AK",
    "rhs_45Rnd_545X39_7U1_AK",
    "rhs_45Rnd_545X39_AK_Green",
    "rhsgref_30rnd_556x45_vhs2",
    "rhsgref_30rnd_556x45_vhs2_t",
    "rhssaf_30Rnd_762x39mm_M67", 
    "rhssaf_30Rnd_762x39mm_M78_tracer", 
    "rhssaf_30Rnd_762x39mm_M82_api",

    //SMG
    "rhsgref_30rnd_1143x23_M1T_SMG",
    "rhsgref_30rnd_1143x23_M1T_2mag_SMG",
    "rhsgref_30rnd_1143x23_M1911B_SMG",
    "rhsgref_30rnd_1143x23_M1911B_2mag_SMG",
    "rhsgref_10rnd_765x17_vz61",
    "rhsgref_20rnd_765x17_vz61",


    //Pistol
    "rhs_mag_9x18_8_57N181S",
    "rhs_mag_rsp30_white",
    "rhs_mag_rsp30_green",
    "rhs_mag_rsp30_red",
    "rhsusf_mag_17Rnd_9x19_FMJ",
    "rhsusf_mag_17Rnd_9x19_JHP",
    "rhs_mag_762x25_8",


    //40MM
    "rhs_GDM40",
    "rhs_GRD40_Green",
    "rhs_GRD40_Red",
    "rhs_GRD40_White",
    "rhs_VG40MD",
    "rhs_VG40OP_green",
    "rhs_VG40OP_red",
    "rhs_VG40OP_white",
    "rhs_VG40SZ",
    "rhs_VG40TB",
    "rhs_VOG25",
    "rhs_VOG25P",
    "rhs_mag_m4009",
    "rhs_mag_M397_HET",
    "rhs_mag_M433_HEDP",
    "rhs_mag_M441_HE",
    "rhs_mag_m576",
    "ACE_40mm_Flare_white",
    "rhs_mag_M585_white",
    "rhs_mag_m661_green",
    "ACE_40mm_Flare_green",
    "ACE_40mm_Flare_red",
    "rhs_mag_m662_red",
    "rhs_mag_m713_Red",
    "rhs_mag_m714_White",
    "rhs_mag_m715_Green",
    "rhs_mag_m716_yellow",
    "ACE_40mm_Flare_ir",


    //launcher
    "rhs_mag_9k38_rocket",
    "rhs_rpg7_OG7V_mag",
    "rhs_rpg7_PG7V_mag",
    "rhs_rpg7_PG7VL_mag",
    "rhs_rpg7_PG7VR_mag",
    "rhs_rpg7_TBG7V_mag",
    "rhs_rpg7_type69_airburst_mag",
    "rhs_rpg7_PG7VS_mag",
    "rhs_rpg7_PG7VM_mag",


    //Grenades
    "rhssaf_mag_brz_m88",
    "rhs_mag_f1",
    "rhs_mag_fakel",
    "rhs_mag_fakels",
    "O_R_IR_Grenade",
    "rhs_mag_nspd",
    "rhs_mag_nspn_green",
    "rhs_mag_nspn_red",
    "rhs_mag_nspn_yellow",
    "rhs_mag_plamyam",
    "rhs_mag_rdg2_black",
    "rhs_mag_rdg2_white",
    "rhs_mag_rgd5",
    "rhs_mag_zarya2",
    "rhs_mag_rkg3em",
    "rhs_mag_rgo",
    "rhs_mag_rgn",
    "rhssaf_mag_brd_m83_blue",
    "rhssaf_mag_brd_m83_green",
    "rhssaf_mag_brd_m83_orange",
    "rhssaf_mag_brd_m83_red",
    "rhssaf_mag_brd_m83_white",
    "rhssaf_mag_brd_m83_yellow",
    "rhssaf_mag_br_m75",
    "rhssaf_mag_br_m84",

    //Explo
    "rhsusf_m112_mag",
    "rhsusf_m112x4_mag",
    "DemoCharge_Remote_Mag",
    "rhsusf_mine_m14_mag",
    "ATMine_Range_Mag",
    "ClaymoreDirectionalMine_Remote_Mag",
    "APERSBoundingMine_Range_Mag",
    "rhs_mine_m2a3b_trip_mag",
    "SLAMDirectionalMine_Wire_Mag",
    "rhs_ec75_mag",
    "rhs_ec200_sand_mag",
    "rhs_ec200_mag",
    "rhs_ec400_sand_mag",
    "rhs_ec400_mag",
    "rhs_ec75_sand_mag"

	};

	AW_arsenalItems[] = {
		//Muzzle
    "rhs_acc_ak5",
    "rhs_acc_dtk",
    "rhs_acc_dtk1",
    "rhs_acc_dtk2",
    "rhs_acc_dtk3",
    "rhs_acc_dtk4long",
    "rhs_acc_pbs1",
    "rhs_acc_dtk4screws",
    "rhs_acc_pgs64",
    "rhs_acc_tgpa",
    "rhs_acc_dtk1l",
    "rhs_acc_dtk1983",
    "rhs_acc_tgpa",
    "rhs_acc_tgpv","rhs_acc_tgpv2",
    "rhs_acc_uuk",
    "rhs_acc_dtk4short",
    "dtkakm",
    "rhs_acc_dtk4short",
    "rhs_acc_pbs4",
    "rhs_acc_pgs64_74u",
    "rhs_acc_pgs64_74un",
    "rhs_acc_6p9_suppressor",
    "rhsusf_acc_nt4_black",
    "rhsusf_acc_rotex5_grey",
    "rhsusf_acc_sf3p556",
    "rhsusf_acc_sfmb556",
    "ace_muzzle_mzls_l",


    //grip etc
    "rhs_acc_grip_ffg2",
    "rhs_acc_grip_rk2",
    "rhs_acc_grip_rk6",
    "rhs_acc_harris_swivel",
    "rhsusf_acc_tdstubby_blk",
    "rhsusf_acc_rvg_blk",
    "rhsusf_acc_grip1",
    "rhsusf_acc_grip2",
    "rhsusf_acc_grip3",


    //rail
    "rhs_acc_2dpzenit",
    "rhs_acc_perst1ik",
    "rhs_acc_2dpzenit_ris",
    "rhs_acc_perst3",
    "rhs_acc_perst3_top",
    "rhs_acc_perst3_2dp_h",
    "rhs_acc_perst3_2dp_light_h",
    "rhs_acc_perst1ik_ris",
    "ace_acc_pointer_green","ace_acc_pointer_green_ir",
    "acc_pointer_ir","ace_acc_pointer_red",
    "rhsusf_acc_wmx_bk",
    "rhsusf_acc_m952v",


    //Scopes
    "rhs_acc_1p29",
    "rhs_acc_1p63",
    "rhs_acc_1p78",
    "rhs_acc_1pn34",
    "rhs_acc_1pn93_1",
    "rhs_acc_1pn93_2",
    "rhs_acc_ekp1",
    "rhs_acc_ekp8_02",
    "rhs_acc_nita",
    "rhs_acc_okp7_dovetail",
    "rhs_acc_pgo7v",
    "rhs_acc_pgo7v2",
    "rhs_acc_pgo7v3",
    "rhs_acc_pkas",
    "rhs_acc_pso1m2",
    "rhs_acc_pso1m21",
    "rhs_acc_rakurspm",
    "rhs_acc_1p87",
    "rhs_acc_ekp8_18",
    "rhs_acc_okp7_picatinny",
    "rhs_acc_pso1m2","rhs_acc_pso1m2_ads","rhs_acc_pso1m2_ads_night","rhs_acc_pso1m2_ak","rhs_acc_pso1m2_ak_ironsight","rhs_acc_pso1m2_asval","rhs_acc_pso1m2_asval_ironsight","rhs_acc_pso1m2_ironsight","rhs_acc_pso1m2_pkp","rhs_acc_pso1m2_pkp_ironsight","rhs_acc_pso1m21","rhs_acc_pso1m21_ads","rhs_acc_pso1m21_ads_night","rhs_acc_pso1m21_ak","rhs_acc_pso1m21_ak_ironsight","rhs_acc_pso1m21_ironsight","rhs_acc_pso1m21_pkp","rhs_acc_pso1m21_pkp_ironsight","rhs_acc_pso1m21_svd","rhs_acc_pso1m21_svd_ironsight",
    "rhs_acc_1p29","rhs_acc_1p29_3d","rhs_acc_1p29_asval","rhs_acc_1p29_asval_3d","rhs_acc_1p29_pkp","rhs_acc_1p29_pkp_3d","rhs_acc_1p78","rhs_acc_1p78_3d","rhs_acc_1pn93_1","rhs_acc_1pn93_2","rhs_acc_1pn93_base","rhs_acc_ekp1","rhs_acc_ekp1b","rhs_acc_ekp1c","rhs_acc_ekp1d","rhs_acc_ekp8_02","rhs_acc_ekp8_02b","rhs_acc_ekp8_02c","rhs_acc_ekp8_02d","rhs_acc_nita","rhs_acc_nita_3d","rhs_acc_okp7_base","rhs_acc_okp7_dovetail","rhs_acc_okp7_picatinny","rhs_acc_pkas","rhs_acc_pkas_asval","rhs_acc_pkas_pkp",
    "rhsusf_acc_eotech_xps3",
    "rhsgref_acc_rx01_nofilter_camo",
    "rhsgref_acc_rx01_camo",
    "ace_optic_mrco_2d",
    "rhsusf_acc_rx01_nofilter",
    "rhsusf_acc_rx01",
    "rhsusf_acc_eotech_552",
    "rhsusf_acc_acog3",
    "rhsusf_acc_acog2",
    "rhsusf_acc_acog",
    "rhsusf_acc_g33_xps3",
    "rhsusf_acc_g33_t1",
    "rhsusf_acc_acog_usmc",
    "rhsusf_acc_acog3_usmc",
    "rhsusf_acc_acog2_usmc",
    "rhsusf_acc_t1_high",
    "rhsusf_acc_t1_low",
    "rhsusf_acc_acog_rmr",
    "ace_optic_hamr_pip",
    "ace_optic_hamr_2d",
    "rhsusf_acc_compm4",
    "rhsusf_acc_elcan",
    "rhsusf_acc_acog_mdo",


    //Uniform
    "rhsgref_uniform_para_ttsko_mountain",
    "rhsgref_uniform_para_ttsko_oxblood",
    "rhsgref_uniform_para_ttsko_urban",
    "rhsgref_uniform_ttsko_forest",
    "rhsgref_uniform_ttsko_mountain",
    "rhsgref_uniform_ttsko_urban",
    "rhs_uniform_df15",
    "rhs_uniform_df15_tan",


    //Vests
    "rhsgref_6b23_ttsko_digi_medic",
    "rhsgref_6b23_ttsko_digi_nco",
    "rhsgref_6b23_ttsko_digi_officer",
    "rhsgref_6b23_ttsko_digi_rifleman",
    "rhsgref_6b23_ttsko_digi_sniper",
    "rhsgref_6b23_ttsko_digi",
    "rhsgref_6b23_ttsko_forest_rifleman",
    "rhsgref_6b23_ttsko_forest",
    "rhsgref_6b23_ttsko_mountain_medic",
    "rhsgref_6b23_ttsko_mountain_nco",
    "rhsgref_6b23_ttsko_mountain_officer",
    "rhsgref_6b23_ttsko_mountain_rifleman",
    "rhsgref_6b23_ttsko_mountain_sniper",
    "rhsgref_6b23_ttsko_mountain",
    "rhs_6b5_ttsko",
    "rhs_6b5_rifleman_ttsko",
    "rhs_6b5_medic_ttsko",
    "rhs_6b5_officer_ttsko",
    "rhs_6b5_sniper_ttsko",
    "rhs_6b5",
    "rhs_6b5_rifleman",
    "rhs_6b5_medic",
    "rhs_6b5_officer",
    "rhs_6b5_sniper",


    //headgear
    "rhsgref_fieldcap_ttsko_digi",
    "rhsgref_fieldcap_ttsko_forest",
    "rhsgref_fieldcap_ttsko_mountain",
    "rhsgref_fieldcap_ttsko_urban",
    "rhsgref_6b27m_ttsko_digi",
    "rhsgref_6b27m_ttsko_forest",
    "rhsgref_6b27m_ttsko_mountain",
    "rhsgref_6b27m_ttsko_urban",
    "rhsgref_ssh68_ttsko_digi",
    "rhsgref_ssh68_ttsko_forest",
    "rhsgref_ssh68_ttsko_mountain",
    "rhsgref_ssh68_ttsko_dark",
    "rhs_gssh18",
    "rhs_tsh4",
    "rhs_tsh4_bala",
    "rhs_tsh4_ess",
    "rhs_tsh4_ess_bala",
    "rhs_zsh7a_mike",
    "rhs_zsh7a_mike_green_alt",
    "rhs_zsh7a_mike_green",
    "rhs_zsh7a_mike_alt",
    "rhs_zsh7a_alt",
    "rhs_zsh7a",

    //Facewear
    "G_Balaclava_blk",
    "G_Balaclava_oli",
    "rhs_balaclava",
    "rhs_balaclava1_olive",
    "rhs_scarf",
    "rhs_googles_black",
    "rhs_googles_clear",
    "rhs_ess_black",
    "rhsusf_shemagh_grn",
    "rhsusf_shemagh2_grn",
    "rhsusf_shemagh_od",
    "rhsusf_shemagh2_od",
    "rhsusf_shemagh_tan",
    "rhsusf_shemagh2_tan",
    "rhsusf_shemagh_gogg_grn",
    "rhsusf_shemagh2_gogg_grn",
    "rhsusf_shemagh_gogg_od",
    "rhsusf_shemagh2_gogg_od",
    "rhsusf_shemagh_gogg_tan",
    "rhsusf_shemagh2_gogg_tan",


    //NVG
    "rhs_1PN138",
    "rhsusf_ANPVS_15",


    //bino
    "rhssaf_zrak_rd7j",
    "ACE_VectorDay",
    "ACE_Vector",
    "rhs_pdu4",
    "Binocular",


    //Radio
    "TFAR_anprc154",
    "TFAR_anprc158jem",
	"TFAR_microdagr"
	};

	AW_arsenalBackpacks[] = {
    "rhsgref_hidf_alicepack",
    "rhsgref_ttsko_alicepack",
    "rhsgref_wdl_alicepack",
    "rhs_medic_bag",
    "rhs_rpg_empty",
    "rhs_sidor",
    "rhs_d6_Parachute_backpack",
    "B_Parachute",
    "ace_gunbag",
    "ace_gunbag_Tan",
    "ACE_NonSteerableParachute",
    "ACE_TacticalLadder_Pack",
    "rhssaf_kitbag_digital",
    "rhssaf_kitbag_md2camo",
    "rhssaf_kitbag_smb",
    "B_Carryall_cbr",
    "B_Carryall_oli",
    "B_AssaultPack_cbr",
    "B_AssaultPack_rgr",
    "B_AssaultPack_khk",
    "B_LegStrapBag_coyote_F",
    "B_LegStrapBag_olive_F",
    "TFAR_anarc164",
    "TFAR_anprc155",
    "TFAR_anprc155_coyote"


	};

	AW_defaultLoadout[] = {
		{"rhs_weap_m70b1","","","",{"rhs_30Rnd_762x39mm_polymer",30},{},""},
		{},
		{},
		{"rhsgref_uniform_ttsko_mountain",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_CableTie",2},{"ACE_EarPlugs",2},{"ACE_epinephrine",1},{"ACE_morphine",2},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_tourniquet",2},{"ACE_splint",2}}},
		{"rhsgref_6b23_ttsko_mountain_rifleman",{{"rhs_30Rnd_762x39mm_polymer",5,30},{"rhs_mag_rgn",1,1},{"rhs_mag_rdg2_white",1,1}}},
		{},
		"rhsgref_6b27m_ttsko_mountain","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ItemWatch","rhs_1PN138"}
	};

	//categories supported: medicalCrateCategory,lightWeaponCrateCategory,heavyWeaponCrateCategory,staticWeaponCrateCategory,miscWeaponCrateCategory
	AW_supplyCrates[] = { //format {"category","title","box size",{resources},{contents}}
		{"medicalCrateCategory","Medical Crate","medical",{25,0,0},{
			{"ACE_EarPlugs",10},
			{"ACE_packingBandage",50},
			{"ACE_fieldDressing",50},
			{"ACE_quikclot",50},
			{"ACE_elasticBandage",50},
			{"ACE_tourniquet",20},
			{"ACE_morphine",20},
			{"ACE_epinephrine",10},
			{"ACE_splint",20},
			{"ACE_salineIV",5},
			{"ACE_salineIV_500",8},
			{"ACE_salineIV_250",10},
			{"ACE_surgicalKit",5}
		}},
		{"medicalCrateCategory","Advanced Medical Crate","medical",{75,0,0},{
			{"ACE_EarPlugs",10},
			{"ACE_packingBandage",100},
			{"ACE_fieldDressing",100},
			{"ACE_quikclot",100},
			{"ACE_elasticBandage",100},
			{"ACE_tourniquet",40},
			{"ACE_morphine",40},
			{"ACE_epinephrine",20},
			{"ACE_adenosine",10},
			{"ACE_splint",40},
			{"ACE_salineIV",10},
			{"ACE_salineIV_500",16},
			{"ACE_salineIV_250",20},
			{"ACE_plasmaIV",10},
			{"ACE_plasmaIV_500",16},
			{"ACE_plasmaIV_250",20},
			{"ACE_bloodIV",10},
			{"ACE_bloodIV_500",16},
			{"ACE_bloodIV_250",20},
			{"ACE_surgicalKit",10}
		}},
		{"staticWeaponCrateCategory","M252 Mortar","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_MapTools",2},
			{"ACE_Vector",2},
			{"ACE_artilleryTable",2},
			{"rhs_M252_Gun_Bag",2},
			{"rhs_M252_Bipod_Bag",2}
		}},
		{"heavyWeaponCrateCategory","Igla","medium",{75,0,0},{
			{"ACE_EarPlugs",2},
			{"rhs_weap_igla",2},
			{"rhs_mag_9k38_rocket",8}
		}},
		{"lightWeaponCrateCategory","Light AT","medium",{75,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_Vector",2},
			{"rhs_weap_rpg26",8}
		}},			
		{"lightWeaponCrateCategory","Standard Resupply","medium",{50,0,0},{
			{"rhsgref_30rnd_556x45_vhs2",15},
			{"rhsusf_100Rnd_762x51_m61_ap",8},
			{"rhs_30Rnd_762x39mm_polymer",20},
			{"rhs_30Rnd_545x39_7N10_2mag_plum_AK",20},
			{"rhsgref_296Rnd_792x57_SmE_belt",8},
			{"rhsgref_10Rnd_792x57_m76",10},			
			{"rhs_VOG25",6},
			{"rhs_VG40TB",4},
			{"rhs_VG40OP_green",4},
			{"rhs_GRD40_White",4},
			{"rhs_mag_M397_HET",10},
			{"rhs_mag_M433_HEDP",10},
			{"rhs_mag_M441_HE",10},
			{"rhs_mag_m713_Red",5},
			{"rhs_mag_m714_White",5}			
		}},
		{"miscWeaponCrateCategory","Explosives","small",{75,0,0},{
			{"DemoCharge_Remote_Mag",6},
			{"ACE_Clacker",2},
			{"ACE_DefusalKit",2},
			{"MineDetector",2}
		}},
		{"staticWeaponCrateCategory","DShkM HMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"rhs_dshkm_gun_bag",1},
			{"rhs_dshkm_tripodhigh_bag",1},
			{"rhs_dshkm_tripodlow_bag",1},
			{"ace_csw_50rnd_127x108_mag",6}
		}},
		{"miscWeaponCrateCategory","Empty Crate (Small)","small",{5,0,0},{

		}},
		{"miscWeaponCrateCategory","Empty Crate (Medium)","medium",{5,0,0},{

		}}
	};
};
