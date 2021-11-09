/*
	Faction: Turkish Armed Forces
	Author: LH5
	Requires: UK3CB, RHSGREF, RHSUSF, Project Opfor, TFAR
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
		"LOP_TRK_HEMTT_Box_D"
	};

	AW_mobileRespawns[] = { //vehicles that act as mobile respawns
        "LOP_TRK_HEMTT_Medical_D",
		"RHS_CH_47F"
    };
    
	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"Land_Medevac_house_V1_F"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {
		{"B_UGV_02_Demining_F", {20,40,0}, ""},

		{"I_G_Quadbike_01_F", {50,25,0}, ""},

		{"LOP_TRK_Landrover", {50,10,0}, ""},
		{"LOP_TRK_Landrover_M2", {50,10,0}, ""},
		

		{"rhsusf_m1025_w", {60,25,0}, ""},
		{"rhsusf_m1025_w_m2", {60,25,50}, ""},
		{"rhsusf_m1025_w_mk19", {65,25,50}, ""},
		{"rhsusf_m998_w_2dr_fulltop", {65,25,0}, ""},
		{"rhsusf_m998_w_2dr_halftop", {60,25,0}, ""},
		{"rhsusf_m998_w_4dr_fulltop", {60,25,0}, ""},
		{"rhsusf_m966_w", {65,25,0}, ""},


		{"UK3CB_BAF_Panther_GPMG_Green_A_DPMW", {95,50,75}, ""},
		{"rhsusf_M1117_W", {95,50,75}, ""},		
 

		{"rhsusf_M1232_usarmy_wd", {100,50,0}, ""},
		{"rhsusf_M1232_M2_usarmy_wd", {100,50,50}, ""},
		{"rhsusf_M1232_MK19_usarmy_wd", {105,50,50}, ""},
		{"rhsusf_M1237_MK19_usarmy_wd", {105,50,50}, ""},
		{"rhsusf_M1237_M2_usarmy_wd", {105,50,50}, ""},


		{"LOP_TRK_BTR80", {200,80,80}, ""},


		{"LOP_TRK_HEMTT_Mover_D", {100,50,0}, ""},
		{"LOP_TRK_HEMTT_Covered_D", {100,50,0}, ""},
		{"LOP_TRK_HEMTT_Transport_D", {100,50,0}, ""}
	};

	AW_bluforHeavyVehicles[] = {

		{"rhsusf_m113_usarmy", {200,100,150}, ""},
		{"rhsusf_m113_usarmy_MK19", {200,100,150}, ""},
		{"rhsusf_m113_usarmy_medical", {200,100,0}, ""},
		{"LOP_TRK_M113_W", {200,100,150}, ""},
		{"rhsusf_m113_usarmy_unarmed", {200,100,150}, ""},

		{"rhsusf_stryker_m1132_m2_wd", {200,100,150}, ""},


		{"RHS_M2A2_wd", {250,100,200}, ""},
		{"RHS_M2A2_BUSKI_WD", {300,100,200}, ""},
		{"RHS_M6_wd", {300,100,200}, ""},


		{"rhs_t72bb_tv", {400,200,350}, ""},
		{"rhs_t72bc_tv", {500,200,400}, ""},
		{"rhs_t72bd_tv", {500,200,400}, ""},
		{"rhs_t72be_tv", {500,200,400}, ""},


		{"rhsusf_m109_usarmy", {500,100,450}, ""}
	};

	AW_bluforAirVehicles[] = {
		{"B_UAV_01_F", {50,100,0}, ""},
		{"B_UAV_02_dynamicLoadout_F", {300,200,200}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},
		{"B_UAV_05_F", {1000,350,500}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},

		{"RHS_MELB_MH6M", {200,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},

		{"rhs_uh1h_hidf_unarmed", {200,150,100}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"rhs_uh1h_hidf", {225,150,100}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_UH60M2", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_UH60M", {250,150,100}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"LOP_RACS_UH60M", {250,150,100}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_UH60M_MEV2", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_UH60M_ESSS2", {250,150,100}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_UH60M_ESSS", {250,150,100}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"RHS_CH_47F_cargo", {350,150,150}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"LOP_TKA_Mi8MT_Cargo", {350,150,150}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"RHS_MELB_AH6M_L", {200,150,150}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_MELB_AH6M_M", {200,150,150}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_MELB_AH6M_H", {200,150,150}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_AH1Z_wd", {200,150,150}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},

		{"RHS_C130J", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},	
		{"RHS_C130J_Cargo", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},
		
		{"RHSGREF_A29B_HIDF", {700,500,600}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"},
		{"rhs_l159_CDF", {800,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"},
		{"rhs_l39_cdf", {800,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],100]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"}
										
	};

	AW_bluforNavalVehicles[] = {
		{"B_Boat_Transport_01_F", {100,25,0}, ""},
		{"B_SDV_01_F", {150,40,0}, ""}
	};

	AW_bluforDefences[] = {
		{"LOP_TRK_Static_Stinger_AA_pod", {50,0,100}, ""},
		{"RHS_M119_WD", {200,0,200}, ""},
		{"B_AAA_System_01_F", {500,0,300}, ""}
	};

	AW_bluforBuildings[] = {
		{"Land_Medevac_house_V1_F", {30,0,0}, ""},

		{"Camp", {10,0,0}, ""},
		{"CampEast", {15,0,0}, ""},
		{"Land_tent_east", {15,0,0}, ""},
		{"USMC_WarfareBVehicleServicePoint", {15,0,0}, ""},
		{"USMC_WarfareBUAVterminal", {15,0,0}, ""},
		{"Land_GuardTower_02_F", {10,0,0}, ""},

		{"lop_Flag_trk_F", {5,0,0}, ""},
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

		{"Land_Razorwire_F", {15,0,0}, ""},
		{"Land_Mil_WiredFence_F", {25,0,0}, ""},
		{"Land_ConcreteHedgehog_01_F", {15,0,0}, ""},
		{"Land_CzechHedgehog_01_old_F", {15,0,0}, ""},

		{"Land_CampingChair_V1_F", {5,0,0}, ""},
		{"Land_CampingChair_V2_F", {5,0,0}, ""},
		{"Land_CampingTable_F", {5,0,0}, ""},
		{"AmmoCrates_NoInteractive_Small", {5,0,0}, ""},
		{"AmmoCrates_NoInteractive_Medium", {5,0,0}, ""},
		{"AmmoCrates_NoInteractive_Large", {5,0,0}, ""},
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
		{{"UK3CB_BAF_Vehicles_Servicing_Ground_Point", "BAF Servicing Point"}, {200,0,200}, ""},
		{{"B_Slingload_01_Cargo_F", "FOB Container"}, {300,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},
		{{"LOP_TRK_HEMTT_Box_D", "FOB Truck"}, {350,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},

		{{"Land_RepairDepot_01_tan_F", "Recycle Building"}, {250,0,0}, ""},
		{{"B_Radar_System_01_F", "Radar"}, {1000,0,0}, ""},
		{"Land_HelipadSquare_F", {250,0,0}, ""}, //Helipads to increase rotary capacity
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""}, //Hangar to increase fixed wing capacity

		{"Box_Syndicate_Ammo_F", {5,0,0}, ""},

		{"LOP_TRK_HEMTT_Repair_D", {300,50,0}, ""},
		{"LOP_TRK_HEMTT_Fuel_D", {100,300,0}, ""},
		{"LOP_TRK_HEMTT_Ammo_D", {100,0,300}, ""},

		{{"LOP_TRK_HEMTT_Medical_D", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"RHS_CH_47F", "Mobile Respawn Vehicle (free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"},
		{{"RHS_CH_47F", "Mobile Respawn Helicopter"}, {200,100,100}, ""},

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},

		{"TFAR_Land_Communication_F", {100,0,0}, ""},

		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
		//Sniper and marksman
	    "UK3CB_BAF_L115A3",
	    "UK3CB_BAF_L115A3_BL",
	    "UK3CB_BAF_L115A3_DE",
	    "rhs_weap_m82a1",
	    "rhs_weap_svdp",
	    "rhs_weap_svds",


	    //AR
	    "rhs_weap_m4a1_carryhandle",
	    "rhs_weap_m4a1_carryhandle_m203",
	    "rhs_weap_m4a1_carryhandle_m203S",
	    "rhs_weap_m4a1_d",
	    "rhs_weap_m4a1_m203s_d",
	    "rhs_weap_m4a1_m320",
	    "rhs_weap_m4a1_d_mstock",
	    "rhs_weap_m4a1_mstock",
	    "rhs_weap_m4a1_wd",
	    "rhs_weap_m4a1_m203s_wd",
	    "rhs_weap_m4a1_wd_mstock",
	    "rhs_weap_l1a1",
	    "rhs_weap_l1a1_wood",
	    "rhs_weap_hk416d145",
	    "rhs_weap_hk416d145_d",
	    "rhs_weap_hk416d145_d_2",
	    "rhs_weap_hk416d145_m320",
	    "rhs_weap_m16a4_carryhandle",
	    "rhs_weap_m16a4_carryhandle_M203",
	    "rhs_weap_SCARH_FDE_CQC",
	    "rhs_weap_SCARH_CQC",
	    "rhs_weap_SCARH_FDE_LB",
	    "rhs_weap_SCARH_LB",
	    "rhs_weap_SCARH_STD",
	    "rhs_weap_SCARH_FDE_STD",
	    "rhs_weap_akm",
	    "rhs_weap_akm_gp25",
	    "rhs_weap_akmn_gp25_npz",
	    "rhs_weap_akm_zenitco01_b33",


	    //SMG
	    "UK3CB_BAF_L91A1",
	    "UK3CB_BAF_L92A1",
	    "SMG_03C_black",

	    //GL
	    "rhs_weap_m32",
	    "rhs_weap_m79",
	    "rhs_weap_M320",

	    //MG
	    "UK3CB_BAF_L7A2",
	    "rhs_weap_mg42",
	    "rhs_weap_m249_pip",
	    "rhs_weap_pkm",



	    //Shotgun
	    "rhs_weap_M590_8RD",

	    //Pistol
	    "rhs_weap_rsp30_white",
	    "rhs_weap_rsp30_green",
	    "rhs_weap_rsp30_red",
	    "rhsusf_weap_glock17g4",
	    "rhsusf_weap_m1911a1",
	    "rhsusf_weap_m9",
	    "UK3CB_BAF_L105A2",
	    "UK3CB_BAF_L117A2",
	    "ACE_VMM3",
	    "ACE_VMH3",


	    //launch
	    "rhs_weap_rpg7",
	    "rhs_weap_m72a7",
	    "rhs_weap_maaws",
	    "launch_MRAWS_green_rail_F",
		"launch_MRAWS_olive_rail_F",
		"launch_MRAWS_sand_rail_F",
	    "rhs_mag_maaws_HEAT",
	    "rhs_weap_fim92",
	    "rhs_weap_igla"
	};

	AW_arsenalMagazines[] = {
	    //Sniper
	    "UK3CB_BAF_338_5Rnd",
	    "UK3CB_BAF_338_5Rnd_Tracer",
	    "rhsusf_mag_10Rnd_STD_50BMG_M33",
	    "rhsusf_mag_10Rnd_STD_50BMG_mk211",
	    "rhs_10Rnd_762x54mmR_7N1",
	    "rhs_10Rnd_762x54mmR_7N14",

	    //AR mags
	    "rhs_mag_30Rnd_556x45_M855_Stanag",
	    "rhs_mag_30Rnd_556x45_M855A1_Stanag",
	    "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
	    "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
	    "rhs_mag_30Rnd_556x45_M855_PMAG",
	    "rhs_mag_30Rnd_556x45_M855_PMAG_Tan",
	    "rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red",
	    "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",
	    "rhs_mag_20Rnd_762x51_m61_fnfal",
	    "rhs_mag_20Rnd_762x51_m62_fnfal",
	    "rhs_mag_20Rnd_762x51_m80_fnfal",
	    "rhs_mag_20Rnd_762x51_m80a1_fnfal",
	    "rhs_mag_20Rnd_SCAR_762x51_m118_special",
	    "rhs_mag_20Rnd_SCAR_762x51_m118_special_bk",
	    "rhs_mag_20Rnd_SCAR_762x51_m61_ap",
	    "rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk",
	    "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
	    "rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk",
	    "rhs_mag_20Rnd_SCAR_762x51_m80_ball",
	    "rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk",
	    "rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",
	    "rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk",
	    "rhs_mag_20Rnd_SCAR_762x51_mk316_special",
	    "rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk",
	    "rhs_30Rnd_762x39mm_bakelite",
	    "rhs_30Rnd_762x39mm_bakelite_89",
	    "rhs_30Rnd_762x39mm_bakelite_tracer",
	    "rhs_30Rnd_762x39mm_bakelite_U",


	    //SMG
	    "UK3CB_BAF_9_30Rnd",
	    "50Rnd_570x28_SMG_03",


	    //Shotgun
	    "rhsusf_8Rnd_00Buck",
	    "rhsusf_8Rnd_Slug",

	    //Pistol
	    "rhs_mag_rsp30_red",
	    "rhs_mag_rsp30_green",
	    "rhs_mag_rsp30_white",
	    "rhsusf_mag_17Rnd_9x19_FMJ",
	    "rhsusf_mag_17Rnd_9x19_JHP",
	    "rhsusf_mag_7x45acp_MHP",
	    "rhsusf_mag_15Rnd_9x19_FMJ",
	    "rhsusf_mag_15Rnd_9x19_JHP",
	    "UK3CB_BAF_9_13Rnd",
	    "UK3CB_BAF_9_15Rnd",


	    //40MM
	    "rhsusf_mag_6Rnd_M397_HET",
	    "rhsusf_mag_6Rnd_M433_HEDP",
	    "rhsusf_mag_6Rnd_M441_HE",
	    "rhsusf_mag_6Rnd_m4009",
	    "rhsusf_mag_6Rnd_M576_Buckshot",
	    "rhsusf_mag_6Rnd_M585_white",
	    "rhsusf_mag_6Rnd_m661_green",
	    "rhsusf_mag_6Rnd_m662_red",
	    "rhsusf_mag_6Rnd_M713_red",
	    "rhsusf_mag_6Rnd_M714_white",
	    "rhsusf_mag_6Rnd_M715_green",
	    "rhsusf_mag_6Rnd_M716_yellow",
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

	    //MG
	    "UK3CB_BAF_762_100Rnd",
	    "UK3CB_BAF_762_100Rnd_T",
	    "UK3CB_BAF_762_200Rnd",
	    "UK3CB_BAF_762_200Rnd_T",
	    "rhsgref_296Rnd_792x57_SmE_belt",
	    "rhsgref_296Rnd_792x57_SmE_notracers_belt",
	    "rhsgref_296Rnd_792x57_SmK_belt",
	    "rhsgref_296Rnd_792x57_SmK_alltracers_belt",
	    "rhsgref_50Rnd_792x57_SmE_drum",
	    "rhsgref_50Rnd_792x57_SmE_notracers_drum",
	    "rhsgref_50Rnd_792x57_SmK_drum",
	    "rhsgref_50Rnd_792x57_SmK_alltracers_drum",
	    "rhsusf_100Rnd_556x45_m855_soft_pouch",
	    "rhsusf_100Rnd_556x45_soft_pouch",
	    "rhsusf_100Rnd_556x45_mixed_soft_pouch",
	    "rhsusf_200Rnd_556x45_box",
	    "rhsusf_200rnd_556x45_mixed_box",
	    "rhsusf_200Rnd_556x45_soft_pouch",
	    "rhsusf_200Rnd_556x45_mixed_soft_pouch",
	    "rhs_100Rnd_762x54mmR",
	    "rhs_100Rnd_762x54mmR_7BZ3",
	    "rhs_100Rnd_762x54mmR_7N13",
	    "rhs_100Rnd_762x54mmR_7N26",
	    "rhs_100Rnd_762x54mmR_green",
	    "rhsusf_100Rnd_556x45_M995_soft_pouch_ucp",
	    "rhsusf_100Rnd_556x45_M995_soft_pouch_coyote",
	    "rhsusf_100Rnd_556x45_M995_soft_pouch",


	    //launcher
	    "rhs_mag_9k38_rocket",
	    "rhs_fim92_mag",
	    "rhs_rpg7_OG7V_mag",
	    "rhs_rpg7_PG7V_mag",
	    "rhs_rpg7_PG7VL_mag",
	    "rhs_rpg7_PG7VR_mag",
	    "rhs_rpg7_TBG7V_mag",
	    "rhs_rpg7_PG7VM_mag",
	    "rhs_rpg7_PG7VS_mag",
	    "rhs_rpg7_type69_airburst_mag",
	    "rhs_mag_maaws_HE",
	    "rhs_mag_maaws_HEDP",


	    //Grenades
	    "rhs_mag_mk84",
	    "rhs_mag_an_m8hc",
	    "rhs_mag_an_m14_th3",
	    "Chemlight_blue",
	    "Chemlight_green",
	    "ACE_Chemlight_HiBlue",
	    "ACE_Chemlight_HiGreen",
	    "ACE_Chemlight_HiRed",
	    "ACE_Chemlight_HiWhite",
	    "ACE_Chemlight_HiYellow",
	    "ACE_Chemlight_IR",
	    "ACE_Chemlight_Orange",
	    "Chemlight_red",
	    "ACE_Chemlight_UltraHiOrange",
	    "ACE_Chemlight_White",
	    "Chemlight_yellow",
	    "rhs_mag_m18_green",
	    "rhs_mag_m18_purple",
	    "rhs_mag_m18_red",
	    "rhs_mag_m18_yellow",
	    "rhs_mag_m67",
	    "ACE_HandFlare_Green",
	    "ACE_HandFlare_Red",
	    "ACE_HandFlare_White",
	    "ACE_HandFlare_Yellow",
	    "rhs_grenade_m15_mag",


	    //Explo
	    "rhsusf_m112_mag",
	    "rhsusf_m112x4_mag",
	    "ATMine_Range_Mag",
	    "ClaymoreDirectionalMine_Remote_Mag",
	    "SLAMDirectionalMine_Wire_Mag",
	    "ACE_FlareTripMine_Mag",
	    "APERSTripMine_Wire_Mag",
	    "rhs_mine_M7A2_mag"
	};

	AW_arsenalItems[] = {
		//Muzzle
	    "uk3cb_baf_silencer_l115a3",
	    "ace_muzzle_mzls_l",
	    "rhsusf_acc_nt4_black",
	    "rhsusf_acc_nt4_tan",
	    "rhsusf_acc_rotex5_grey",
	    "rhsusf_acc_rotex5_tan",
	    "rhsusf_acc_sf3p556",
	    "rhsusf_acc_sfmb556",
	    "rhs_acc_dtkakm",
	    "rhs_acc_dtk1l",
	    "rhs_acc_pbs1",
	    "rhs_acc_tgpv",
	    "rhs_acc_tgpv2",
	    "ace_muzzle_mzls_smg_02",
	    "rhsusf_acc_omega9k",
	    "uk3cb_baf_silencer_l105a1",
	    "rhsusf_acc_aac_scarh_silencer",
	    "rhsgref_sdn6_suppressor",
	    "rhsgref_acc_falmuzzle_l1a1",


	    //grip etc
	    "rhsusf_acc_grip2",
	    "rhsusf_acc_grip2_tan",
	    "rhsusf_acc_grip2_wd",
	    "rhsusf_acc_grip1",
	    "rhsusf_acc_harris_bipod",
	    "rhsusf_acc_kac_grip",
	    "rhsusf_acc_rvg_blk",
	    "rhsusf_acc_rvg_de",
	    "rhsusf_acc_tdstubby_blk",
	    "rhsusf_acc_tdstubby_tan",
	    "rhsusf_acc_grip3",
	    "rhsusf_acc_grip3_tan",
	    "rhs_acc_grip_ffg2",
	    "rhsusf_acc_saw_bipod",


	    //rail
	    "rhsusf_acc_anpeq15side",
	    "rhsusf_acc_anpeq15_top",
	    "rhsusf_acc_anpeq15_wmx",
	    "rhsusf_acc_anpeq15_wmx_light",
	    "rhsusf_acc_anpeq15_wmx_light_h",
	    "rhsusf_acc_anpeq16a_top_h",
	    "rhsusf_acc_anpeq16a_light_top_h",
	    "rhsusf_acc_anpeq15side_bk",
	    "rhsusf_acc_anpeq15_bk_top",
	    "rhsusf_acc_anpeq15",
	    "rhsusf_acc_anpeq15_light",
	    "rhsusf_acc_anpeq15_bk",
	    "rhsusf_acc_anpeq15_bk_light",
	    "rhsusf_acc_anpeq15a",
	    "rhsusf_acc_anpeq16a",
	    "rhsusf_acc_anpeq16a_light",
	    "rhsusf_acc_anpeq16a_top",
	    "rhsusf_acc_anpeq16a_light_top",
	    "ace_acc_pointer_green",
	    "acc_pointer_ir",
	    "rhsusf_acc_m952v",
	    "rhsusf_acc_wmx",
	    "rhsusf_acc_wmx_bk",
	    "uk3cb_baf_flashlight_l105a1",
	    "uk3cb_baf_l105a1_llm_ir_g",
	    "uk3cb_baf_l105a1_llm_ir_r",
	    "acc_flashlight_pistol",
	    "rhsusf_acc_anpeq15_bk_light_h",
	    "rhsusf_acc_anpeq15_wmx_sc",

	    //Scopes
	    "rhsusf_acc_g33_xps3",
	    "rhsusf_acc_g33_xps3_tan",
	    "rhsusf_acc_g33_t1",
	    "rhsgref_acc_l1a1_l2a2",
	    "rhsgref_acc_l1a1_anpvs2",
	    "rhsusf_acc_m8541_low",
	    "rhsusf_acc_m8541_low_d",
	    "rhsusf_acc_m8541_low_wd",
	    "rhsusf_acc_premier_low",
	    "rhsusf_acc_leupoldmk4",
	    "rhsusf_acc_leupoldmk4_2",
	    "rhsusf_acc_leupoldmk4_d",
	    "rhsusf_acc_leupoldmk4_wd",
	    "rhsusf_acc_acog_rmr",
	    "rhsusf_acc_acog_d",
	    "rhsusf_acc_acog_wd",
	    "rhsusf_acc_acog",
	    "rhs_acc_pso1m2",
	    "rhs_optic_maaws",
	    "rhsusf_acc_eotech_552",
	    "rhsusf_acc_eotech_552_d",
	    "rhsusf_acc_eotech_552_wd",
	    "rhsusf_acc_compm4",
	    "rhsusf_acc_t1_high",
	    "rhsusf_acc_t1_low",
	    "rhsusf_acc_t1_low_fwd",
	    "rhsusf_acc_eotech",
	    "rhsusf_acc_eotech_xps3",
	    "rhs_acc_pgo7v",
	    "rhs_acc_pgo7v2",
	    "rhs_acc_pgo7v3",
	    "optic_khs_blk",
	    "optic_khs_tan",
	    "rhsusf_acc_premier_anpvs27",
	    "rhsusf_acc_leupoldmk4_2_mrds",
	    "rhsusf_acc_premier_mrds",
	    "rhs_acc_1pn93_1",
	    "rhs_acc_1pn93_2",
	    "rhs_acc_1pn93_base",


	    //Uniform
	    "LOP_U_Fatigue_BDU_TURK_TUBITAK_01",
	    "LOP_U_Fatigue_BDU_TIGR_01",
	    "rhs_uniform_g3_blk",
	    "U_B_PilotCoveralls",
	    "rhs_uniform_abu",


	    //Vests
	    "PO_V_SPCS_TUB_RIF2",
	    "PO_V_SPCS_TUB_CREW",
	    "PO_V_SPCS_TUB_GREN",
	    "PO_V_SPCS_TUB_MG",
	    "PO_V_SPCS_TUB_MED",
	    "PO_V_SPCS_TUB_RIF",
	    "PO_V_SPCS_TUB_SNIP",
	    "PO_V_SPCS_TUB_SL",
	    "PO_V_SPCS_TUB_TL",
	    "PO_V_SPCS_TUB",
	    "LOP_V_CarrierLite_LIZ",
	    "LOP_V_CarrierLite_LIZ_DIGI",
	    "LOP_V_CarrierLite_BLK",
	    "LOP_V_CarrierRig_BLK",
	    "LOP_V_CarrierLite_TURK",


	    //headgear
	    "PO_H_PASGT_TUB",
	    "PO_H_PASGT_LIZ",
	    "PO_H_PASGT_LIZ_DIGI",
	    "rhsusf_opscore_bk",
	    "rhsusf_opscore_bk_pelt",
	    "rhsusf_opscore_fg",
	    "rhsusf_opscore_fg_pelt",
	    "rhsusf_opscore_fg_pelt_cam",
	    "rhsusf_opscore_fg_pelt_nsw",
	    "rhsusf_mich_bare_norotos_arc",
	    "rhsusf_mich_bare_norotos_arc_alt",
	    "rhsusf_mich_bare_norotos_arc_alt_headset",
	    "rhsusf_mich_bare_norotos_arc_headset",
	    "rhsgref_helmet_pasgt_altis_lizard",
	    "PO_H_PASGT_BLK",
	    "rhsgref_helmet_pasgt_olive",
	    "PO_H_bonnie_tub",
	    "PO_H_cap_tub",
	    "rhsusf_hgu56p_black",
	    "rhsusf_hgu56p_mask_black",
	    "rhsusf_hgu56p_visor_black",
	    "RHS_jetpilot_usaf",
	    "rhsusf_cvc_green_alt_helmet",
	    "rhsusf_cvc_green_ess",
	    "rhsusf_cvc_alt_helmet",
	    "rhsusf_cvc_ess",


	    //NVG
	    "rhsusf_ANPVS_14",
	    "rhsusf_ANPVS_15",


	    //bino
	    "rhsusf_bino_lrf_Vector21",
	    "rhsusf_bino_lerca_1200_black",
	    "rhsusf_bino_lerca_1200_tan",


	    //Radio
	    "TFAR_rf7800str", 
	    "TFAR_anprc152", 
	    "TFAR_microdagr"
	};

	AW_arsenalBackpacks[] = {
	    "LOP_B_CA_EOD_tub",
	    "LOP_B_FP_MG42_tub",
	    "LOP_B_KB_Med_tub",
	    "ace_gunbag",
	    "ace_gunbag_Tan",
	    "ACE_NonSteerableParachute",
	    "ACE_TacticalLadder_Pack",
	    "rhsusf_eject_Parachute_backpack",
	    "rhs_rpg_empty",
	    "B_Parachute",
	    "B_LegStrapBag_coyote_F",
	    "ACE_TacticalLadder_Pack",
	    "B_LegStrapBag_black_F",
	    "B_TacticalPack_blk",
	    "B_AssaultPack_blk",
	    "B_AssaultPack_cbr",
	    "B_AssaultPack_rgr",
	    "B_AssaultPack_khk",


	    "TFAR_rt1523g",
	    "TFAR_rt1523g_big", 
	    "TFAR_rt1523g_black", 
	    "TFAR_rt1523g_fabric", 
	    "TFAR_rt1523g_green", 
	    "TFAR_rt1523g_rhs", 
	    "TFAR_rt1523g_sage",    
	    "TFAR_anarc210"
	};

	AW_defaultLoadout[] = {
		{"rhs_weap_m4a1_carryhandle","","","rhsusf_acc_ACOG_RMR_3d",{"rhs_mag_30Rnd_556x45_M855_Stanag",30},{},""},
		{},
		{},
		{"LOP_U_Fatigue_BDU_TURK_TUBITAK_01",{{"ACE_fieldDressing",4},{"ACE_elasticBandage",4},{"ACE_packingBandage",4},{"ACE_quikclot",4},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_morphine",2},{"ACE_epinephrine",2},{"ACE_Flashlight_MX991",1},{"ACE_IR_Strobe_Item",1}}},
		{"PO_V_SPCS_TUB_RIF2",{{"rhsusf_ANPVS_15",1},{"rhs_mag_m67",1,1},{"rhs_mag_an_m8hc",1,1},{"rhs_mag_30Rnd_556x45_M855_Stanag",6,30},{"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",2,30}}},
		{},
		"PO_H_PASGT_TUB","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}
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
		{"staticWeaponCrateCategory","M2 HMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_MapTools",2},
			{"ACE_Vector",2},
			{"RHS_M2_Gun_Bag",2},
			{"RHS_M2_Tripod_Bag",2},
			{"RHS_M2_MiniTripod_Bag",2}
		}},
		{"staticWeaponCrateCategory","TOW Launcher","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"rhs_TOW_Tripod_Bag",2},
			{"rhs_Tow_Gun_Bag",2}
		}},
		{"staticWeaponCrateCategory","Kornet","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"RHS_Kornet_Tripod_Bag",2},
			{"RHS_Kornet_Gun_Bag",2}
		}},
		{"staticWeaponCrateCategory","spg9","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"RHS_SPG9_Gun_Bag",2},
			{"RHS_SPG9_Tripod_Bag",2}
		}},
		{"staticWeaponCrateCategory","Mk19 GMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"RHS_Mk19_Tripod_Bag",1},
			{"RHS_Mk19_Gun_Bag",1}
		}},
		{"miscWeaponCrateCategory","Raven","small",{50,0,50},{
			{"B_rhsusf_B_BACKPACK",1}
		}},
		{"heavyWeaponCrateCategory","Stinger","medium",{75,0,0},{
			{"ACE_EarPlugs",2},
			{"rhs_weap_fim92",2},
			{"rhs_fim92_mag",8}
		}},
		{"lightWeaponCrateCategory","Light AT","medium",{75,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_Vector",2},
			{"rhs_weap_m72a7",8}
		}},
		{"heavyWeaponCrateCategory","M240 MMG","medium",{75,0,0},{
			{"ACE_EarPlugs",3},
			{"ACE_Vector",3},
			{"rhs_weap_m240B",1},
			{"rhsusf_acc_ELCAN_ard",1},
			{"rhsusf_100Rnd_762x51_m80a1epr",5},			
			{"rhsusf_100Rnd_762x51",5},
			{"rhsusf_100Rnd_762x51_m61_ap",5},
			{"rhsusf_100Rnd_762x51_m62_tracer",5}
		}},			
		{"lightWeaponCrateCategory","Standard Resupply","medium",{50,0,0},{
			{"rhsusf_mag_17Rnd_9x19_FMJ",6},
			{"ACE_20Rnd_762x51_M118LR_Mag",8},
			{"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",8},
			{"rhs_30Rnd_762x39mm_bakelite",20},
			{"rhs_mag_30Rnd_556x45_M193_Stanag",20},
			{"UK3CB_BAF_338_5Rnd",10},
			{"UK3CB_BAF_762_L42A1_10Rnd",10},			
			{"rhs_mag_an_m8hc",6},
			{"rhs_mag_m18_green",4},
			{"rhs_mag_m18_purple",4},
			{"rhs_mag_m18_red",4},
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
		{"miscWeaponCrateCategory","Empty Crate (Small)","small",{5,0,0},{

		}},
		{"miscWeaponCrateCategory","Empty Crate (Medium)","medium",{5,0,0},{

		}},
		{"heavyWeaponCrateCategory","RPG Ammo","medium",{0,0,75},{
			{"rhs_rpg7_PG7V_mag",12}
		}}
	};
};
