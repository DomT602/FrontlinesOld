/*
	Faction: Russian Airborne Forces
	Author: Dom
	Requires: RHSAFRF, TFAR
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
		"rhs_typhoon_vdv"
	};

	AW_mobileRespawns[] = { //vehicles that act as mobile respawns
		"rhs_gaz66_ap2_vdv",
		"RHS_Mi8T_vdv"
	};

	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"Land_Medevac_house_V1_F"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {
		{"I_G_Quadbike_01_F", {50,25,0}, ""},

		{"rhs_uaz_vdv", {25,25,0}, ""},
		{"rhs_uaz_open_vdv", {25,25,0}, ""},
		
		{"rhs_tigr_vdv", {60,25,0}, ""},                      	
		{"rhs_tigr_3camo_vdv", {60,25,0}, ""},                    
		{"rhs_tigr_sts_vdv", {60,25,60}, ""}, 
		{"rhs_tigr_sts_3camo_vdv", {60,25,60}, ""}, 
		{"rhs_tigr_m_vdv", {60,25,30}, ""}, 
		{"rhs_tigr_m_3camo_vdv", {60,25,30}, ""},
		
		{"rhs_kamaz5350_vdv", {125,50,0}, ""},
		{"rhs_kamaz5350_flatbed_cover_vdv", {125,50,0}, ""},             
		{"rhs_kamaz5350_open_vdv", {150,50,0}, ""},                  
		{"rhs_kamaz5350_flatbed_vdv", {150,50,0}, ""}
	};

	AW_bluforHeavyVehicles[] = {
		{"rhsgref_BRDM2_vdv", {175,100,100}, ""},
		{"rhsgref_BRDM2_ATGM_vdv", {175,100,150}, ""},

		{"rhs_btr80_vdv", {200,100,150}, ""},
		{"rhs_btr80a_vdv", {200,100,150}, ""},
		
		{"rhs_bmd4_vdv", {250,150,250}, ""},
		{"rhs_bmd4m_vdv", {250,150,250}, ""},
		{"rhs_bmd4ma_vdv", {250,150,250}, ""},
		
		{"rhs_sprut_vdv", {400,200,400}, ""},
		
		{"RHS_BM21_VDV_01", {400,200,400}, ""}
	};

	AW_bluforAirVehicles[] = {
		{"B_UAV_01_F", {50,100,0}, ""},                                             // AR-2 Darter

		{"RHS_Mi8mt_vdv", {250,150,50}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_Mi8AMT_vdv", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"RHS_Mi8MTV3_vdv", {250,200,150}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_Mi8MTV3_heavy_vdv", {250,200,200}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},							

		{"RHS_Mi24P_vdv", {400,200,400}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_Mi24V_vdv", {400,200,400}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},

		{"RHS_Su25SM_vvsc", {800,700,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.35}}}"}
	};

	AW_bluforNavalVehicles[] = {
		{"B_Boat_Transport_01_F", {40,25,0}, ""},
		{"rhs_bmk_t", {100,40,0}, ""}
	};

	AW_bluforDefences[] = {
		{"rhs_Igla_AA_pod_vdv", {100,0,100}, ""},
		{"RHS_ZU23_VDV", {100,0,100}, ""},
		{"rhs_D30_vdv", {150,0,150}, ""},
		{"rhs_D30_at_vdv", {150,0,150}, ""}
	};

	AW_bluforBuildings[] = {
		{"Land_Medevac_house_V1_F", {30,0,0}, ""},

		{"Camp", {10,0,0}, ""},
		{"CampEast", {15,0,0}, ""},
		{"Land_tent_east", {15,0,0}, ""},
		{"Land_GuardTower_02_F", {10,0,0}, ""},

		{"rhs_Flag_Russia_F", {5,0,0}, ""},
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
		{{"rhs_typhoon_vdv", "FOB Truck"}, {350,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},

		{{"Land_RepairDepot_01_tan_F", "Recycle Building"}, {250,0,0}, ""},
		{{"B_Radar_System_01_F", "Radar"}, {1000,0,0}, ""},
		{"Land_HelipadSquare_F", {250,0,0}, ""}, //Helipads to increase rotary capacity
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""}, //Hangar to increase fixed wing capacity

		{"Box_Syndicate_Ammo_F", {5,0,0}, ""},

		{"RHS_Ural_Repair_VDV_01", {300,0,0}, ""},
		{"rhs_kamaz5350_ammo_vdv", {100,0,200}, ""},
		{"RHS_Ural_Fuel_VDV_01", {100,200,0}, ""},

		{{"rhs_gaz66_ap2_vdv", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"RHS_Mi8T_vdv", "Mobile Respawn Helicopter"}, {200,100,0}, ""},
		{{"RHS_Mi8T_vdv", "Mobile Respawn Helicopter (free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"}, //air mobile respawn (first one free)

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},

		{"TFAR_Land_Communication_F", {100,0,0}, ""},

		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
		//Primaries
		"rhs_weap_ak74m",
		"rhs_weap_ak74m_npz",
		"rhs_weap_ak74m_camo",
		"rhs_weap_ak74m_camo_npz",
		"rhs_weap_ak74m_desert",
		"rhs_weap_ak74m_desert_npz",
		"rhs_weap_ak74m_gp25",
		"rhs_weap_ak74m_gp25_npz",
		"rhs_weap_ak74m_fullplum_gp25",
		"rhs_weap_ak74m_fullplum_gp25_npz",
		"rhs_weap_ak74m_fullplum",
		"rhs_weap_ak74m_fullplum_npz",
		"rhs_weap_ak74m_zenitco01",
		"rhs_weap_ak74m_zenitco01_b33",
		"rhs_weap_ak74mr",
		"rhs_weap_ak74mr_gp25",
		"rhs_weap_ak74n",
		"rhs_weap_ak74n_gp25",
		"rhs_weap_ak74n_gp25_npz",
		"rhs_weap_ak74n_npz",
		"rhs_weap_ak74n_2",
		"rhs_weap_ak74n_2_npz",
		"rhs_weap_ak74n_2_gp25",
		"rhs_weap_ak74n_2_gp25_npz",
		"rhs_weap_aks74u",
		"rhs_weap_aks74un",
		"rhs_weap_pkm",
		"rhs_weap_pkp",
		"rhs_weap_pp2000",
		"rhs_weap_svdp",
		"rhs_weap_svdp_wd",
		"rhs_weap_svdp_wd_npz",
		"rhs_weap_svdp_npz",
		"rhs_weap_svds",
		"rhs_weap_svds_npz",
		
		//Secondaries		
		"ACE_VMH3",
		"rhs_weap_6p53",
		"rhs_weap_pb_6p9",
		"rhs_weap_pya",
		"rhs_weap_makarov_pm",
		"rhs_weap_pp2000_folded",
		
		//Launchers
		"rhs_weap_rpg26",
		"rhs_weap_igla",
		"rhs_weap_rpg7"
	};

	AW_arsenalMagazines[] = {
		//40mm
		"rhs_GDM40",
		"rhs_GRD40_Green",
		"rhs_GRD40_Red",
		"rhs_GRD40_White",
		"rhs_VG40MD",
		"rhs_VG40OP_green",
		"rhs_VG40OP_red",
		"rhs_VG40OP_white",
		"rhs_VG40SZ",						// Flashbang, but in a grenade Round
		"rhs_VG40TB",						// Nuclear Underslung Grenade Round
		"rhs_VOG25",
		"rhs_VOG25P",

	    //Normal mags
		"rhs_30Rnd_545x39_7N22_AK",
		"rhs_30Rnd_545x39_7U1_AK",
		"rhs_45Rnd_545X39_7N10_AK",
		"rhs_45Rnd_545X39_7N22_AK",
		"rhs_45Rnd_545X39_7N6_AK",
		"rhs_45Rnd_545X39_7U1_AK",
		"rhs_45Rnd_545X39_AK_Green",
		"rhs_30Rnd_545x39_7N10_2mag_AK",
		"rhs_30Rnd_545x39_7N10_2mag_camo_AK",
		"rhs_30Rnd_545x39_7N10_2mag_desert_AK",
		"rhs_30Rnd_545x39_7N10_2mag_plum_AK",
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
		"rhs_30rnd_545x39_7n6m_ak",
		"rhs_60Rnd_545X39_7N10_AK",
		"rhs_60Rnd_545X39_7N22_AK",
		"rhs_60Rnd_545X39_7U1_AK",
		"rhs_60Rnd_545X39_AK_Green",
		"rhs_100Rnd_762x54mmR",
		"rhs_100Rnd_762x54mmR_7BZ3",
		"rhs_100Rnd_762x54mmR_7N13",
		"rhs_100Rnd_762x54mmR_7N26",
		"rhs_100Rnd_762x54mmR_green",
		"rhs_mag_9x19mm_7n21_20",
		"rhs_mag_9x19mm_7n31_20",
		"rhs_mag_9x19mm_7n21_44",
		"rhs_mag_9x19mm_7n31_44",
		"10Rnd_762x54_Mag",
		"rhs_10Rnd_762x54mmR_7N1",
		"rhs_10Rnd_762x54mmR_7N14",
		"ACE_10Rnd_762x54_Tracer_mag",
		"rhs_18rnd_9x21mm_7BT3",
		"rhs_18rnd_9x21mm_7N28",
		"rhs_18rnd_9x21mm_7N29",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x19_17",
		"rhs_mag_9k38_rocket",
		"rhs_rpg7_OG7V_mag",
		"rhs_rpg7_PG7V_mag",
		"rhs_rpg7_PG7VL_mag",
		"rhs_rpg7_PG7VR_mag",
		"rhs_rpg7_TBG7V_mag",
		"rhs_rpg7_PG7VS_mag",
    	"rhs_rpg7_PG7VM_mag",
		"rhs_rpg7_type69_airburst_mag",

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
		"rhs_mag_rsp30_white", "rhs_mag_rsp30_green", "rhs_mag_rsp30_red",
		
	    //Explosives
		"rhs_mine_glasmine43_bz_mag",
		"rhs_mine_glasmine43_hz_mag",
		"ATMine_Range_Mag",
		"SLAMDirectionalMine_Wire_Mag",
		"ACE_FlareTripMine_Mag",
		"rhsusf_m112_mag",
		"rhsusf_m112x4_mag",
		"DemoCharge_Remote_Mag",
		
		//Launchers
		"rhs_rpg26_mag",
		
		"rhs_mag_an_m14_th3"
	};

	AW_arsenalItems[] = {
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
		"rhs_acc_dh520x56",
		"rhs_acc_pso1m2","rhs_acc_pso1m2_ads","rhs_acc_pso1m2_ads_night","rhs_acc_pso1m2_ak","rhs_acc_pso1m2_ak_ironsight","rhs_acc_pso1m2_asval","rhs_acc_pso1m2_asval_ironsight","rhs_acc_pso1m2_ironsight","rhs_acc_pso1m2_pkp","rhs_acc_pso1m2_pkp_ironsight","rhs_acc_pso1m21","rhs_acc_pso1m21_ads","rhs_acc_pso1m21_ads_night","rhs_acc_pso1m21_ak","rhs_acc_pso1m21_ak_ironsight","rhs_acc_pso1m21_ironsight","rhs_acc_pso1m21_pkp","rhs_acc_pso1m21_pkp_ironsight","rhs_acc_pso1m21_svd","rhs_acc_pso1m21_svd_ironsight",
		"rhs_acc_1p29","rhs_acc_1p29_3d","rhs_acc_1p29_asval","rhs_acc_1p29_asval_3d","rhs_acc_1p29_pkp","rhs_acc_1p29_pkp_3d","rhs_acc_1p78","rhs_acc_1p78_3d","rhs_acc_1pn93_1","rhs_acc_1pn93_2","rhs_acc_1pn93_base","rhs_acc_ekp1","rhs_acc_ekp1b","rhs_acc_ekp1c","rhs_acc_ekp1d","rhs_acc_ekp8_02","rhs_acc_ekp8_02b","rhs_acc_ekp8_02c","rhs_acc_ekp8_02d","rhs_acc_nita","rhs_acc_nita_3d","rhs_acc_okp7_base","rhs_acc_okp7_dovetail","rhs_acc_okp7_picatinny","rhs_acc_pkas","rhs_acc_pkas_asval","rhs_acc_pkas_pkp",
		"rhsusf_acc_eotech_xps3","rhsusf_acc_su230","rhsusf_acc_su230_c","rhsusf_acc_su230_mrds","rhsusf_acc_su230_mrds_c","optic_holosight_blk_f","optic_holosight_arid_f","optic_holosight_lush_f",


	    //Rail Attachments
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

	    //Muzzle attachments
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
		"rhs_acc_tgpv","rhs_acc_tgpv2",
		"rhs_acc_uuk",
		"rhs_acc_dtk4short",
		"dtkakm",
		"rhs_acc_pbs4",
		"rhs_acc_pgs64_74u",
		"rhs_acc_pgs64_74un",
		"rhs_acc_6p9_suppressor",

	    //Bipod
		"rhs_acc_grip_ffg2",
		"rhs_acc_grip_rk2",
		"rhs_acc_grip_rk6",
		"rhs_acc_harris_swivel",

		//Uniforms
		"rhs_uniform_vdv_emr_des",
		"rhs_uniform_vdv_emr",
		"rhs_uniform_afghanka_para",
		"rhs_uniform_afghanka_para_ttsko",
		"rhs_uniform_afghanka_para_ttsko_2",
		"rhs_uniform_afghanka_para_vsr",
		"rhs_uniform_afghanka_para_vsr_2",
		"rhs_uniform_df15",
		"rhs_uniform_vkpo_gloves",

	    //Vests
		"rhs_6b45",
		"rhs_6b45_holster",
		"rhs_6b45_desert",
		"rhs_6b45_light",
		"rhs_6b45_off",
		"rhs_6b45_mg",
		"rhs_6b45_rifleman",
		"rhs_6b45_rifleman_2",
		"rhs_6b45_grn",
		"rhs_6b23_digi_vydra_3m",
		"rhs_6b23_digi_sniper",
		"rhs_6b23_digi_rifleman",
		"rhs_6b23_digi_medic",
		"rhs_6b23_digi_engineer",
		"rhs_6b23_digi_crew",
		"rhs_6b23_digi_crewofficer",
		"rhs_6b23_digi",
		"rhs_6b23_6sh116",
		"rhs_6b23_6sh116_vog",
		"rhs_6b23_digi_6sh92",
		"rhs_6b23_digi_6sh92_spetsnaz2",
		"rhs_6b23_digi_6sh92_headset",
		"rhs_6b23_digi_6sh92_headset_spetsnaz",
		"rhs_6b23_digi_6sh92_headset_mapcase",
		"rhs_6b23_digi_6sh92_radio",
		"rhs_6b23_digi_6sh92_vog",
		"rhs_6b23_digi_6sh92_Spetsnaz",
		"rhs_6b23_digi_6sh92_Vog_Spetsnaz",
		"rhs_6b23_digi_6sh92_vog_headset",
		"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",
		"rhs_6b13_EMR",
		"rhs_6b13_EMR_6sh92",
		"rhs_6b13_EMR_6sh92_radio",
		"rhs_6b13_EMR_6sh92_vog",
		"rhs_6b13_EMR_6sh92_headset_mapcase",

	    //Helmets
		"rhs_6b47",
		"rhs_6b47_bare",
		"rhs_6b47_6m2",
		"rhs_6b47_bala",
		"rhs_6b47_6m2_1",
		"rhs_6b47_bare_d",
		"rhs_6b47_emr",
		"rhs_6b47_emr_1",
		"rhs_6b47_emr_2",
		"rhs_6b47_6B50",
		"rhs_6b47_ess",
		"rhs_6b47_ess_bala",
		"rhs_6b28_green",
		"rhs_6b28_green_bala",
		"rhs_6b28_green_ess",
		"rhs_6b28_green_ess_bala",
		"rhs_6b28",
		"rhs_6b28_ess_bala",
		"rhs_6b28_ess",
		"rhs_6b28_bala",
		"rhs_zsh7a_mike",
		"rhs_zsh7a_mike_green",
		"rhs_zsh7a_mike_alt",
		"rhs_zsh7a_mike_green_alt",
		"rhs_zsh7a_alt",
		"rhs_zsh7a",
		"rhs_6b48",
		"rhs_vkpo_cap",
		"rhs_Booniehat_digi",
		"rhs_fieldcap_digi",

	    //Facewear
		"G_Aviator",
		"G_Balaclava_blk",
		"G_Balaclava_oli",
		"G_Bandanna_blk",
		"G_Bandanna_khk",
		"G_Bandanna_oli",
		"G_Bandanna_tan",
		"rhs_balaclava",
		"rhs_balaclava1_olive",
		"rhs_scarf",
		"G_Spectacles_Tinted",
		"rhs_ess_black",
		
		//Radios
		"TFAR_fadak",
		
		//NVGs
		"rhs_1PN138",
		"ACE_NVG_Wide",

	    //Bino
		"rhs_pdu4",
		"Binocular",
		"rhssaf_zrak_rd7j",
		"ACE_VectorDay",
		"ACE_Vector",
		"Laserdesignator_03"
	};

	AW_arsenalBackpacks[] = {
		"rhs_rk_sht_30_emr",
		"rhs_rk_sht_30_emr_engineer_empty",
		"rhs_rk_sht_30_olive",
		"rhs_rk_sht_30_olive_engineer_empty",
		"ace_gunbag",
		"ace_gunbag_Tan",
		"rhs_medic_bag",
		"rhs_rpg_empty",
		"rhs_sidor",
		"rhssaf_kitbag_smb",
		"rhs_assault_umbts",
		"rhs_assault_umbts_engineer_empty",
		"rhs_d6_Parachute_backpack",
		"B_Carryall_oli",
		"tfar_mr3000_rhs", "tfar_mr3000_multicam", "tfar_bussole"
	};

	AW_defaultLoadout[] = {
		{"rhs_weap_ak74m","rhs_acc_dtk","rhs_acc_2dpZenit","",{"rhs_30Rnd_545x39_7N10_plum_AK",30},{},""},
		{},
		{},
		{"rhs_uniform_vkpo_gloves",{{"ACE_fieldDressing",5},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_EarPlugs",1},{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_Flashlight_XL50",1},{"ACE_splint",2},{"ACE_tourniquet",2}}},
		{"rhs_6b45_rifleman",{{"rhs_30Rnd_545x39_7N10_plum_AK",8,30},{"rhs_mag_rgd5",2,1},{"rhs_mag_rdg2_white",2,1}}},
		{},
		"rhs_6b47","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch","rhs_1PN138"}
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
		{"staticWeaponCrateCategory","'Podnos' Mortar","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_MapTools",2},
			{"ACE_Vector",2},
			{"rhs_podnos_bipod_bag",1},
			{"rhs_podnos_gun_bag",1}
		}},
		{"staticWeaponCrateCategory","DShkM HMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"rhs_dshkm_gun_bag",1},
			{"rhs_dshkm_tripodhigh_bag",1},
			{"rhs_dshkm_tripodlow_bag",1},
			{"ace_csw_50rnd_127x108_mag",6}
		}},
		{"staticWeaponCrateCategory","Kornet ATGM","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"rhs_kornet_gun_bag",1},
			{"rhs_kornet_tripod_bag",1},
			{"ace_compat_rhs_afrf3_mag_9m133m2",3},
			{"ace_compat_rhs_afrf3_mag_9m133f",3}
		}},
		{"staticWeaponCrateCategory","AGS Grenade Launcher","large",{0,0,75},{
			{"rhs_ags30_gun_bag",1},
			{"rhs_ags30_tripod_bag",1},
			{"ace_compat_rhs_afrf3_mag_VOG30_30",3}
		}},
		{"lightWeaponCrateCategory","Standard Resupply","medium",{50,0,0},{
			{"rhs_mag_9x19_17",8},
			{"rhs_mag_9x19mm_7n21_44",8},
			{"rhs_18rnd_9x21mm_7N28",8},
			{"rhs_100Rnd_762x54mmR_7N26",16},
			{"rhs_30Rnd_545x39_7N22_AK",20},
			{"10Rnd_762x54_Mag",20},
			{"rhs_mag_nspn_red",4},
			{"rhs_mag_nspn_yellow",4},
			{"rhs_mag_nspn_green",4},
			{"rhs_mag_rgo",10},
			{"rhs_mag_rgn",10},
			{"rhs_mag_rgd5",10},
			{"rhs_VOG25",10},
            {"rhs_mag_M433_HEDP",10},
            {"rhs_VOG25P",10},
            {"rhs_mag_m67",10},
            {"rhs_VG40OP_green",5},
            {"rhs_VG40OP_red",5},
            {"rhs_VG40OP_white",5},
            {"rhs_VG40OP_green",5},
            {"rhs_GRD40_Green",5},
            {"rhs_GRD40_Red",5},
            {"rhs_GRD40_White",5}
		}},
		{"miscWeaponCrateCategory","Explosives","small",{75,0,0},{
			{"DemoCharge_Remote_Mag",6},
			{"ACE_Clacker",2},
			{"ACE_DefusalKit",2},
			{"MineDetector",2}
		}},
		{"miscWeaponCrateCategory","Empty Crate (Small)","small",{5,0,0},{

		}},
		{"miscWeaponCrateCategory","Empty Crate (Medium)","medium",{5,0,0},{

		}}
	};
};