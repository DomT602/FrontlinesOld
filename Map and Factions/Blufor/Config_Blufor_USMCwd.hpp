/*
	Faction: United States Marine Corps (Woodland)
	Author: Reidy
	Requires: RHSUSF, TFAR
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
		"rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy"
	};

	AW_mobileRespawns[] = { //vehicles that act as mobile respawns
        "rhsusf_M1230a1_usarmy_wd",
		"rhsusf_CH53E_USMC_D"
    };
    
	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"Land_Medevac_house_V1_F"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {
		{"B_UGV_02_Demining_F", {20,40,0}, ""},									// ED-1D

		{"I_G_Quadbike_01_F", {50,25,0}, ""},

		{"rhsusf_m998_w_s_4dr_halftop", {60,25,0}, ""},
		{"rhsusf_m1043_w_s", {60,25,0}, ""},
		{"rhsusf_m1045_w_s", {125,50,100}, ""},                                   
		
		{"rhsusf_m1151_mk19_v3_usmc_wd", {75,25,50}, ""},
		{"rhsusf_m1151_m240_v3_usmc_wd", {75,25,50}, ""},             
		{"rhsusf_m1151_m2_v3_usmc_wd", {75,25,50}, ""},                            
		
		{"rhsusf_m1240a1_usmc_wd", {100,50,75}, ""}, 

		{"rhsusf_m1240a1_m2_usmc_wd", {125,50,50}, ""},
		{"rhsusf_m1240a1_m240_usmc_wd", {125,50,50}, ""},
		{"rhsusf_m1240a1_mk19_usmc_wd", {125,50,50}, ""},
		{"rhsusf_m1240a1_mk19crows_usmc_wd", {250,50,100}, ""},
		{"rhsusf_m1240a1_m2crows_usmc_wd", {250,50,100}, ""},

		{"rhsusf_M1084A1P2_B_WD_fmtv_usarmy", {100,100,0}, ""},                       // MAN 4x4
		{"rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy", {100,100,0}, ""}
		
	};

	AW_bluforHeavyVehicles[] = {
		{"rhsusf_M1117_W", {200,150,250}, ""},

		{"rhsusf_stryker_m1126_m2_wd", {250,150,250}, ""},
		{"rhsusf_stryker_m1126_mk19_wd", {250,150,250}, ""},
		{"rhsusf_stryker_m1132_m2_np_wd", {250,150,250}, ""},
		{"rhsusf_stryker_m1132_m2_wd", {250,150,250}, ""},
		{"rhsusf_stryker_m1134_wd", {250,150,250}, ""},

		{"rhsusf_m1a1fep_wd", {400,200,400}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		
		{"rhsusf_M142_usmc_WD", {400,200,400}, ""}
	};

	AW_bluforAirVehicles[] = {
		{"B_UAV_01_F", {50,100,0}, ""},                                             // AR-2 Darter
		{"B_UAV_06_F", {75,100,0}, ""},                                     		// AL-6 Pelican
		{"B_UAV_02_dynamicLoadout_F", {300,200,200}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},

		{"RHS_UH1Y_UNARMED_d", {200,150,100}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                       // UH-1Ys
		{"RHS_UH1Y_FFAR_d", {225,150,150}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_UH1Y_d", {250,150,200}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"rhsusf_CH53E_USMC_D", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},							// CH-53Es 
		{"rhsusf_CH53E_USMC_GAU21_D", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"RHS_AH1Z", {400,200,400}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                // Cobra

		{"RHS_C130J", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},											// C-130 (Transport)
		{"RHS_C130J_Cargo", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},										// C-130 (Cargo)
		
		{"rhsusf_f22", {800,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"}, // A10 & F22
		{"RHS_A10", {800,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.35}}}"}								
	};

	AW_bluforNavalVehicles[] = {
		{"I_C_Boat_Transport_02_F", {40,25,0}, ""},
		{"rhsusf_mkvsoc", {100,40,70}, ""}
	};

	AW_bluforDefences[] = {
		{"RHS_Stinger_AA_pod_d", {100,0,100}, ""},                                	  	// Mini-Spike AA (similar to Starstreak MANPAD)
		{"RHS_M119_D", {150,0,150}, ""}                                           // M119 (Towed Arty)
	};

	AW_bluforBuildings[] = {
		{"Land_Medevac_house_V1_F", {30,0,0}, ""},

		{"Camp", {10,0,0}, ""},
		{"CampEast", {15,0,0}, ""},
		{"Land_tent_east", {15,0,0}, ""},
		{"USMC_WarfareBVehicleServicePoint", {15,0,0}, ""},
		{"USMC_WarfareBUAVterminal", {15,0,0}, ""},
		{"Land_GuardTower_02_F", {10,0,0}, ""},

		{"FlagCarrierUSA", {5,0,0}, ""},
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
		{"Land_MapBoard_Enoch_F", {5,0,0}, ""},
		{"Land_DieselGroundPowerUnit_01_F", {5,0,0}, ""},
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
		{{"B_Slingload_01_Cargo_F", "FOB Container"}, {300,500,0}, "(count AW_fobPositions) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},
		{{"rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy", "FOB Truck"}, {350,500,0}, "(count AW_fobPositions) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},

		{{"Land_RepairDepot_01_tan_F", "Recycle Building"}, {250,0,0}, ""},
		{{"B_Radar_System_01_F", "Radar"}, {1000,0,0}, ""},
		{"Land_HelipadSquare_F", {250,0,0}, ""}, //Helipads to increase rotary capacity
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""}, //Hangar to increase fixed wing capacity

		{"Box_Syndicate_Ammo_F", {5,0,0}, ""},

		{"rhsusf_M977A4_REPAIR_BKIT_usarmy_wd", {300,0,0}, ""},
		{"rhsusf_M977A4_AMMO_usarmy_wd", {100,200,0}, ""},
		{"rhsusf_M978A4_usarmy_wd", {100,0,200}, ""},

		{{"rhsusf_M1230a1_usarmy_wd", "Mobile Respawn Vehicle (free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"},
		{{"rhsusf_M1230a1_usarmy_wd", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"rhsusf_CH53E_USMC_D", "Mobile Respawn Helicopter"}, {200,100,100}, ""},

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},

		{"TFAR_Land_Communication_F", {100,0,0}, ""},

		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
		"rhsusf_weap_m1911a1",
		"rhsusf_weap_glock17g4",
		"rhs_weap_m249_pip",
		"rhs_weap_m27iar",
		"rhs_weap_m27iar_grip",
		"rhs_weap_m16a4",
		"rhs_weap_m16a4_carryhandle",
		"rhs_weap_m16a4_carryhandle_M203",
		"rhs_weap_m16a4_imod",
		"rhs_weap_m16a4_imod_M203",
		"rhs_weap_M136",
		"rhs_weap_M136_hedp",
		"rhs_weap_M136_hp",
		"rhs_weap_maaws",
		"launch_MRAWS_green_rail_F",
		"launch_MRAWS_olive_rail_F",
		"launch_MRAWS_sand_rail_F",
		"rhs_weap_smaw",
		"rhs_weap_smaw_green",
		"rhs_weap_fim92",
		"rhs_weap_m72a7",
		"rhsusf_weap_m9",
		"rhs_weap_M320",
		"rhs_weap_m249_light_L",
		"rhs_weap_m249_light_S",
		"rhs_weap_sr25",
		"rhs_weap_sr25_ec",
		"rhs_weap_sr25_wd",
		"rhs_weap_sr25_ec_wd",
		"rhs_weap_m4a1_carryhandle",
		"rhsusf_weap_MP7A2",
		"rhs_weap_m40a5_wd",
		"rhs_weap_m40a5",
		"rhs_weap_m4a1_m320",
		"rhs_weap_m4_carryhandle",
		"rhsusf_weap_MP7A2_folded"
	};

	AW_arsenalMagazines[] = {
		"B_IR_Grenade",
		"rhs_mag_m18_green",
		"rhs_mag_m18_purple",
		"rhs_mag_m18_red",
		"rhs_mag_m67",
		"rhs_mag_mk84",
		"rhs_mag_an_m8hc",
		"rhs_mag_an_m14_th3",

		"rhsusf_m112_mag",
		"DemoCharge_Remote_Mag",
		"rhsusf_m112x4_mag",

		"rhs_mag_M441_HE",
		"rhs_mag_M433_HEDP",
		"rhs_mag_M397_HET",
		"ACE_40mm_Flare_ir",
		"ACE_HuntIR_M203",
		"ACE_40mm_Flare_red",
		"ACE_40mm_Flare_green",
		"ACE_40mm_Flare_white",
		"rhs_mag_m713_Red",
		"rhs_mag_m714_White",

		"rhs_mag_maaws_HEAT",
		"rhs_mag_maaws_HEDP",
		"rhs_mag_maaws_HE",
		"rhs_mag_smaw_HEAA",
		"rhs_mag_smaw_HEDP",
		"rhs_mag_smaw_SR",
		"rhs_fim92_mag",

		"rhsusf_mag_15Rnd_9x19_JHP",
        "rhsusf_mag_15Rnd_9x19_FMJ",
        "rhsusf_5Rnd_300winmag_xm2010",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		
		"rhsusf_mag_40Rnd_46x30_AP",
		"rhsusf_mag_40Rnd_46x30_FMJ",
		"rhsusf_mag_40Rnd_46x30_JHP",
        "rhs_mag_30Rnd_556x45_M855A1_PMAG",
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
        "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",
        "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red",
        "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull",
        "rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull",
        "rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger",
        "rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red",
        "rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger",
        "rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",
        "rhs_mag_30Rnd_556x45_M855A1_Stanag",
        "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
        "rhs_mag_30Rnd_556x45_Mk262_Stanag",
        "rhs_mag_30Rnd_556x45_Mk318_Stanag",
        "rhs_mag_30Rnd_556x45_Mk262_PMAG",
        "rhs_mag_30Rnd_556x45_Mk318_PMAG",
        "rhsusf_20Rnd_762x51_SR25_m118_special_Mag",
        "rhsusf_20Rnd_762x51_SR25_m62_Mag",
        "rhsusf_20Rnd_762x51_SR25_m993_Mag",
        "rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",
        "rhsusf_200Rnd_556x45_soft_pouch_coyote",
		"rhsusf_10Rnd_762x51_m118_special_Mag",
		"rhsusf_10Rnd_762x51_m993_Mag",
		"rhsusf_10Rnd_762x51_m62_Mag",
        "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote"
	};

	AW_arsenalItems[] = {
		"rhs_uniform_FROG01_wd",
		"U_B_HeliPilotCoveralls",

		"rhs_booniehat2_marpatwd",
		"rhsusf_lwh_helmet_marpatwd",
		"rhsusf_lwh_helmet_marpatwd_blk_ess",
		"rhsusf_lwh_helmet_marpatwd_headset_blk2",
		"rhsusf_lwh_helmet_marpatwd_headset_blk",
		"rhsusf_lwh_helmet_marpatwd_headset",
		"rhsusf_lwh_helmet_marpatwd_ess",
		"rhsusf_mich_helmet_marpatwd",
		"rhsusf_mich_helmet_marpatwd_alt",
		"rhsusf_mich_helmet_marpatwd_alt_headset",
		"rhsusf_mich_helmet_marpatwd_headset",
		"rhsusf_mich_helmet_marpatwd_norotos",
		"rhsusf_mich_helmet_marpatwd_norotos_arc",
		"rhsusf_mich_helmet_marpatwd_norotos_arc_headset",
		"rhsusf_mich_helmet_marpatwd_norotos_headset",
		"rhs_8point_marpatwd",
		"rhsusf_hgu56p_black",
		"rhsusf_hgu56p_mask_black",
		"rhsusf_hgu56p_mask_black_skull",
		"rhsusf_hgu56p_visor_black",
		"rhsusf_hgu56p_visor_mask_black",
		"rhsusf_hgu56p_visor_mask_Empire_black",
		"rhsusf_hgu56p_visor_mask_black_skull",
		"rhsusf_cvc_green_helmet",
		"rhsusf_cvc_green_alt_helmet",
		"rhsusf_cvc_green_ess",
		"rhsusf_mich_bare",
		"rhsusf_mich_bare_alt",
		"rhsusf_mich_bare_headset",
		"rhsusf_mich_bare_norotos",
		"rhsusf_mich_bare_norotos_alt",
		"rhsusf_mich_bare_norotos_alt_headset",
		"rhsusf_mich_bare_norotos_arc",
		"rhsusf_mich_bare_norotos_arc_alt",
		"rhsusf_mich_bare_norotos_arc_alt_headset",
		"rhsusf_mich_bare_norotos_arc_headset",
		"rhsusf_mich_bare_norotos_headset",
		"rhsusf_mich_bare_semi",
		"rhsusf_mich_bare_alt_semi",
		"rhsusf_mich_bare_semi_headset",
		"rhsusf_mich_bare_norotos_semi",
		"rhsusf_mich_bare_norotos_alt_semi",
		"rhsusf_mich_bare_norotos_alt_semi_headset",
		"rhsusf_mich_bare_norotos_arc_semi",
		"rhsusf_mich_bare_norotos_arc_alt_semi",
		"rhsusf_mich_bare_norotos_arc_alt_semi_headset",
		"rhsusf_mich_bare_norotos_arc_semi_headset",
		"rhsusf_mich_bare_norotos_semi_headset",
		"RHS_jetpilot_usaf",

		"rhsusf_spc",
		"rhsusf_spc_corpsman",
		"rhsusf_spc_crewman",
		"rhsusf_spc_iar",
		"rhsusf_spc_light",
		"rhsusf_spc_mg",
		"rhsusf_spc_marksman",
		"rhsusf_spc_rifleman",
		"rhsusf_spc_sniper",
		"rhsusf_spc_squadleader",
		"rhsusf_spc_teamleader",

		"rhs_googles_black",
		"rhs_googles_clear",
		"rhs_googles_orange",
		"rhs_googles_yellow",
		"rhs_ess_black",
		"G_Bandanna_aviator",
		"G_Bandanna_beast",
		"G_Bandanna_blk",
		"G_Bandanna_khk",
		"G_Bandanna_oli",
		"G_Bandanna_shades",
		"G_Bandanna_tan",
		"G_Lowprofile",
		"G_Shades_Black",
		"G_Shades_Blue",
		"G_Shades_Green",
		"G_Shades_Red",
		"rhsusf_shemagh_grn",
		"rhsusf_shemagh_od",
		"rhsusf_shemagh2_grn",
		"rhsusf_shemagh2_od",
		"rhsusf_shemagh_tan",
		"rhsusf_shemagh2_tan",
		"rhsusf_shemagh_gogg_grn",
		"rhsusf_shemagh2_gogg_grn",
		"rhsusf_shemagh_gogg_od",
		"rhsusf_shemagh2_gogg_od",
		"rhsusf_shemagh_gogg_tan",
		"rhsusf_shemagh2_gogg_tan",
		"rhsusf_oakley_goggles_blk",
		"rhsusf_oakley_goggles_clr",
		"rhsusf_oakley_goggles_ylw",
		"G_Spectacles",
		"G_Sport_Red",
		"G_Sport_Blackyellow",
		"G_Sport_BlackWhite",
		"G_Sport_Checkered",
		"G_Sport_Blackred",
		"G_Sport_Greenblack",
		"G_Squares_Tinted",
		"G_Squares",
		"G_Balaclava_blk",
		"G_Balaclava_oli",

		"ACE_NVG_Wide",
		"rhsusf_ANPVS_15",

		"Binocular",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"rhsusf_bino_m24",
		"rhsusf_bino_m24_ARD",
		"rhsusf_bino_leopold_mk4",
		"ACE_VectorDay",
		"ACE_Vector",

		"TFAR_rf7800str",
		"TFAR_anprc152",
		"TFAR_microdagr",

		"ACE_HuntIR_monitor",

		"rhs_optic_maaws",
		"rhsusf_acc_eotech_xps3",
		"rhsusf_acc_ACOG_RMR",
		"rhsusf_acc_ACOG_wd",
		"rhsusf_acc_ACOG_MDO",
		"rhsusf_acc_su230_mrds_c",
		"rhsusf_acc_su230_mrds",
		"rhsusf_acc_su230_c",
		"rhsusf_acc_su230",
		"rhs_weap_optic_smaw",
		"rhsusf_acc_LEUPOLDMK4_2_mrds",
		"rhsusf_acc_LEUPOLDMK4_2_wd",
		"rhsusf_acc_LEUPOLDMK4_wd",
		"rhsusf_acc_LEUPOLDMK4",
		"rhsusf_acc_LEUPOLDMK4_2",
		"rhsusf_acc_premier_anpvs27",
		"rhsusf_acc_premier_mrds",
		"rhsusf_acc_premier",
		"rhsusf_acc_M8541_low_wd",
		"rhsusf_acc_M8541_wd",
		"rhsusf_acc_M8541",
		"rhsusf_acc_M8541_low",
		"rhsusf_acc_compm4",
		"rhsusf_acc_eotech_552",
		"rhsusf_acc_ACOG",
		"rhsusf_acc_ACOG2",
		"rhsusf_acc_ACOG3",
		"rhsusf_acc_ELCAN_ard",
		"rhsusf_acc_ELCAN",
		"rhsusf_acc_g33_xps3",
		"rhsusf_acc_g33_T1",
		"rhsusf_acc_EOTECH",
		"rhsusf_acc_anpeq15side",
		"rhsusf_acc_anpeq15_top",
		"rhsusf_acc_anpeq15_wmx",
		"rhsusf_acc_anpeq15_wmx_light",
		"rhsusf_acc_anpeq15side_bk",
		"rhsusf_acc_anpeq15_bk_top",
		"rhsusf_acc_anpeq15",
		"rhsusf_acc_anpeq15_light",
		"rhsusf_acc_anpeq15_bk",
		"rhsusf_acc_anpeq15_bk_light",
		"rhsusf_acc_anpeq15A",
		"rhsusf_acc_anpeq16a",
		"rhsusf_acc_anpeq16a_light",
		"rhsusf_acc_anpeq16a_top",
		"rhsusf_acc_anpeq16a_light_top",
		"ACE_acc_pointer_green",
		"acc_pointer_IR",
		"rhsusf_acc_M952V",
		"rhsusf_acc_M2010S",
		"rhsusf_acc_M2010S_wd",
		"rhsusf_acc_omega9k",
		"rhsusf_acc_wmx_bk",
		"rhsusf_acc_grip2",
		"rhsusf_acc_grip1",
		"rhsusf_acc_grip_m203_blk",
		"rhsusf_acc_harris_swivel",
		"rhsusf_acc_harris_bipod",
		"rhsusf_acc_kac_grip",
		"rhsusf_acc_rvg_blk",
		"rhsusf_acc_rvg_de",
		"rhsusf_acc_saw_bipod",
		"rhsusf_acc_grip4",
		"rhsusf_acc_grip4_bipod",
		"rhsusf_acc_saw_lw_bipod",
		"rhsusf_acc_tacsac_blk",
		"rhsusf_acc_tdstubby_blk",
		"rhsusf_acc_grip3",
		"rhsusf_acc_SR25S",
		"rhsusf_acc_SR25S_wd",
		"rhsusf_acc_rotex5_grey",
		"rhsusf_acc_rotex5_tan",
		"rhsusf_acc_SF3P556",
		"rhsusf_acc_SFMB556",
		"rhsusf_acc_nt4_black",
		"rhsusf_acc_nt4_tan",
		"rhsusf_acc_sf3p556",
		"rhsusf_acc_sfmb556",
		"rhsusf_acc_rotex_mp7"
	};

	AW_arsenalBackpacks[] = {
		"rhsusf_assault_eagleaiii_coy",
		"rhsusf_falconii_coy",
		"B_Kitbag_cbr",
		"B_AssaultPack_cbr",
		"TFAR_rt1523g_rhs",
		"TFAR_rt1523g_black",
		"TFAR_rt1523g_green",
		"TFAR_rt1523g_big_rhs"
	};

	AW_defaultLoadout[] = {
		{"rhs_weap_m16a4_carryhandle","","","rhsusf_acc_ACOG3",{"rhs_mag_30Rnd_556x45_M855A1_PMAG",30},{},""},
		{},
		{},
		{"rhs_uniform_FROG01_wd",{{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_morphine",1},{"ACE_CableTie",2}}},
		{"rhsusf_spc_rifleman",{{"ACE_EntrenchingTool",1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",6,30},{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",2,30},{"rhs_mag_m67",2,1},{"rhs_mag_an_m8hc",1,1}}},
		{},
		"rhsusf_lwh_helmet_marpatwd_headset","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}
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
		{"staticWeaponCrateCategory","Mk19 GMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"RHS_Mk19_Tripod_Bag",1},
			{"RHS_Mk19_Gun_Bag",1}
		}},
		{"miscWeaponCrateCategory","Raven","small",{50,0,50},{
			{"B_rhsusf_B_BACKPACK",1}
		}},
		{"heavyWeaponCrateCategory","Javelin","medium",{50,0,50},{
			{"rhs_weap_fgm148",2},
			{"rhs_fgm148_magazine_AT",6}
		}},
		{"heavyWeaponCrateCategory","M3 MAAWS","medium",{75,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_Vector",2},
			{"RHS_weap_maaws",1},
			{"rhs_optic_maaws",1},
			{"rhs_mag_maaws_HE",5},
			{"rhs_mag_maaws_HEAT",10}
		}},
		{"lightWeaponCrateCategory","Light AT","medium",{75,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_Vector",2},
			{"rhs_weap_m72a7",4},
			{"rhs_weap_M136_hp",2},
			{"rhs_weap_M136",4},
			{"rhs_weap_M136_hedp",2}
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
			{"rhsusf_mag_15Rnd_9x19_FMJ",4},
			{"rhsusf_mag_17Rnd_9x19_FMJ",4},
			{"rhsusf_200Rnd_556x45_soft_pouch_coyote",8},
			{"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",8},
			{"rhs_mag_30Rnd_556x45_M855A1_PMAG",20},
			{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",20},
			{"rhsusf_20Rnd_762x51_SR25_m62_Mag",10},
			{"rhsusf_20Rnd_762x51_SR25_m993_Mag",10},			
			{"rhs_mag_an_m8hc",6},
			{"rhs_mag_m18_green",4},
			{"rhs_mag_m18_purple",4},
			{"rhs_mag_m18_red",4},
			{"rhs_mag_M397_HET",10},
			{"rhs_mag_M433_HEDP",10},
			{"rhs_mag_M441_HE",10},
			{"rhs_mag_m67",10},
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
		{"heavyWeaponCrateCategory","Javelin Ammo","medium",{0,0,75},{
			{"rhs_fgm148_magazine_AT",12}
		}}
	};
};
