/*
	Faction: United States Special Operations Command
	Author: SiegeSix
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
		"rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy"
	};

	AW_mobileRespawns[] = { //vehicles that act as mobile respawns
        "rhsusf_M1230a1_usarmy_d",
		"RHS_CH_47F_light"
    };
    
	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"Land_Medevac_house_V1_F"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {
		{"B_UGV_02_Demining_F", {20,40,0}, ""},									// ED-1D

		{"I_G_Quadbike_01_F", {50,25,0}, ""},

		{"rhsusf_m1151_m2_v2_usarmy_d", {50,50,25}, ""},
		{"rhsusf_m1151_m240_v2_usarmy_d", {50,50,25}, ""},
		{"rhsusf_m1151_mk19_v2_usarmy_d", {50,50,25}, ""},
		{"rhsusf_m966_d", {75,75,25}, ""},
		{"rhsusf_m1240a1_m2_uik_usarmy_d", {75,50,50}, ""},
		{"rhsusf_m1240a1_m240_uik_usarmy_d", {75,50,50}, ""},
		{"rhsusf_m1240a1_mk19_uik_usarmy_d", {75,50,50}, ""},
		{"rhsusf_m1165a1_gmv_m134d_m240_socom_d", {100,100,50}, ""},
		{"rhsusf_m1165a1_gmv_mk19_m240_socom_d", {100,100,50}, ""},
		{"rhsusf_m1165a1_gmv_m2_m240_socom_d", {100,100,50}, ""},
		{"rhsusf_mrzr4_d", {50,25,15}, ""},
		{"rhsusf_m1238a1_socom_d", {75,25,50}, ""},
		{"rhsusf_m1238a1_m2_socom_d", {75,50,50}, ""},
		{"rhsusf_m1238a1_mk19_socom_d", {75,50,50}, ""},
		{"rhsusf_m1078a1r_sov_m2_d_fmtv_socom", {50,75,25}, ""},
		{"rhsusf_m998_d_s_4dr", {50,25,25}, ""},

		{"rhsusf_M1084A1P2_B_D_fmtv_usarmy", {100,100,0}, ""},                       // MAN 4x4
		{"rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy", {100,100,0}, ""}
		
	};

	AW_bluforHeavyVehicles[] = {
		{"rhsusf_M1117_D", {200,150,250}, ""},

		{"rhsusf_stryker_m1126_m2_d", {250,150,250}, ""},
		{"rhsusf_stryker_m1126_mk19_d", {250,150,250}, ""},
		{"rhsusf_stryker_m1132_m2_np_d", {250,150,250}, ""},
		{"rhsusf_stryker_m1132_m2_d", {250,150,250}, ""},
		{"rhsusf_stryker_m1134_d", {250,150,250}, ""},
		
		{"rhsusf_m1a2sep1tuskiid_usarmy", {400,200,400}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		{"rhsusf_m1a2sep2d_usarmy", {400,225,375}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		
		{"rhsusf_m109d_usarmy", {400,200,400}, ""}
	};

	AW_bluforAirVehicles[] = {
		{"B_UAV_01_F", {50,100,0}, ""},                                             // AR-2 Darter
		{"B_UAV_06_F", {75,100,0}, ""},                                     		// AL-6 Pelican
		{"B_UAV_02_dynamicLoadout_F", {300,200,200}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},

		{"RHS_melb_mh6m", {150,25,100}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                       // UH-1Ys
		{"RHS_melb_ah6m", {200,100,150}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_ah64d", {250,200,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_uh60m_d", {150,50,100}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_uh60m_esss_d", {200,125,100}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_ch_47f_10", {175,50,125}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"RHS_ch_47f_10_cargo", {175,25,125}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
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

		{"Land_BagFence_round_F", {10,0,0}, ""},
		{"Land_BagFence_long_F", {10,0,0}, ""},
		{"Land_BagFence_corner_F", {10,0,0}, ""},
		{"Land_BagFence_end_F", {10,0,0}, ""},
		{"Land_fort_bagfence_long", {10,0,0}, ""},
		{"Land_fort_bagfence_corner", {10,0,0}, ""},
		{"Land_fort_bagfence_round", {10,0,0}, ""},
		{"Land_fort_rampart", {25,0,0}, ""},
		{"Land_fort_artillery_nest", {50,0,0}, ""},
		{"Land_BagBunker_small_F", {15,0,0}, ""},
		{"Land_BagBunker_large_F", {15,0,0}, ""},
		{"Land_HBarrierTower_F", {75,0,0}, ""},

		{"Land_HBarrier_1_F", {5,0,0}, ""},
		{"Land_HBarrier_3_F", {15,0,0}, ""},
		{"Land_HBarrier_5_F", {20,0,0}, ""},
		{"Land_HBarrier_Big_F", {50,0,0}, ""},
		{"Land_HBarrierWall4_F", {20,0,0}, ""},
		{"Land_HBarrierWall6_F", {25,0,0}, ""},
		{"Land_HBarrierWall_corner_F", {50,0,0}, ""},
		{"Land_HBarrierWall_corridor_F", {25,0,0}, ""},
		{"Land_HBarrierTower_F", {100,0,0}, ""},

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
		{{"B_Slingload_01_Cargo_F", "FOB Container"}, {300,500,0}, "(count AW_fobPositions) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},
		{{"rhsusf_M1078A1P2_B_D_CP_fmtv_usarmy", "FOB Truck"}, {350,500,0}, "(count AW_fobPositions) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},

		{{"Land_RepairDepot_01_tan_F", "Recycle Building"}, {250,0,0}, ""},
		{{"B_Radar_System_01_F", "Radar"}, {1000,0,0}, ""},
		{"Land_HelipadSquare_F", {250,0,0}, ""}, //Helipads to increase rotary capacity
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""}, //Hangar to increase fixed wing capacity

		{"Box_Syndicate_Ammo_F", {5,0,0}, ""},

		{"rhsusf_M977A4_REPAIR_BKIT_usarmy_d", {300,0,0}, ""},
		{"rhsusf_M977A4_AMMO_usarmy_wd", {100,200,0}, ""},
		{"rhsusf_M978A4_usarmy_d", {100,0,200}, ""},

		{{"rhsusf_M1230a1_usarmy_d", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"rhsusf_M1230a1_usarmy_d", "Mobile Respawn Vehicle (free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"},
		{{"RHS_CH_47F_light", "Mobile Respawn Helicopter"}, {200,100,100}, ""},

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},

		{"TFAR_Land_Communication_F", {100,0,0}, ""},

		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
		"rhs_weap_mk18",
		"rhs_weap_mk18_KAC_bk",
		"rhs_weap_mk18_m320",
		"rhs_weap_mk18_d",
		"rhs_weap_mk18_KAC_d",
		"rhs_weap_XM2010",
		"rhs_weap_XM2010_d",
		"rhsusf_weap_m1911a1",
		"rhsusf_weap_glock17g4",
		"rhs_weap_M136",
		"rhs_weap_M136_hedp",
		"rhs_weap_M136_hp",
		"rhs_weap_maaws",
		"launch_MRAWS_green_rail_F",
		"launch_MRAWS_olive_rail_F",
		"launch_MRAWS_sand_rail_F",
		"rhs_weap_fim92",
		"rhs_weap_m72a7",
		"rhs_weap_m249_light_L",
		"rhs_weap_m249_light_S",
		"rhs_weap_sr25",
		"rhs_weap_sr25_ec",
		"rhs_weap_sr25_d",
		"rhs_weap_sr25_ec_d",
		"rhsusf_weap_MP7A2",
		"rhsusf_weap_MP7A2_aor",
		"rhs_weap_mk17_std",
		"rhs_weap_mk17_cqc",
		"rhs_weap_m590_8rd",
		"rhs_weap_m590_5rd",
		"rhs_weap_hk416d10",
		"rhs_weap_hk416d10_m320",
		"rhs_weap_hk416d145",
		"rhs_weap_hk416d145_m320",
		"rhs_weap_m4a1_blockII_bk",
		"rhs_weap_m4a1_blockII_m320_bk",
		"rhs_weap_m4a1_blockII_kac_bk",
		"rhs_weap_m4a1_blockII_d",
		"rhs_weap_m4a1_blockII_m320_d",
		"rhs_weap_m4a1_blockII_kac_d",
		"rhs_weap_m320",
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

		"rhsusf_8rnd_00buck",
		"rhsusf_8rnd_slug",
		"rhsusf_5rnd_00buck",
		"rhsusf_5rnd_slug",
		
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
		"ace_30rnd_556x45_stanag_m995_ap_mag",
        "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote"
	};

	AW_arsenalItems[] = {
		"rhs_uniform_g3_aor2",
		"rhs_uniform_g3_blk",
		"rhs_uniform_g3_m81",
		"rhs_uniform_g3_mc",
		"rhs_uniform_g3_rgr",
		"rhs_uniform_g3_tan",
		"U_B_HeliPilotCoveralls",

		"rhsusf_opscore_aor1",
		"rhsusf_opscore_aor1_pelt",
		"rhsusf_opscore_aor2",
		"rhsusf_opscore_aor2_pelt",
		"rhsusf_opscore_bk",
		"rhsusf_opscore_bk_pelt",
		"rhsusf_opscore_coy_cover",
		"rhsusf_opscore_coy_cover_pelt",
		"rhsusf_opscore_fg",
		"rhsusf_opscore_fg_pelt",
		"rhsusf_opscore_mc_cover",
		"rhsusf_opscore_mc_cover_pelt",
		"rhsusf_opscore_mc",
		"rhsusf_opscore_mc_pelt",
		"rhsusf_opscore_paint",
		"rhsusf_opscore_paint_pelt",
		"rhsusf_opscore_rg_cover",
		"rhsusf_opscore_rg_cover_pelt",
		"rhsusf_opscore_ut",
		"rhsusf_opscore_ut_pelt",
		"h_helmetspecb_sand",
		"h_helmetspecb_paint1",
		"rhs_booniehat_ocp",
		"rhs_booniehat_m81",
		"h_booniehat_khk",
		"h_booniehat_khk_hs",
		"h_booniehat_oli",
		"rhsusf_hgu56p_black",
		"rhsusf_hgu56p_mask_black",
		"rhsusf_hgu56p_mask_black_skull",
		"rhsusf_hgu56p_visor_black",
		"rhsusf_hgu56p_visor_mask_black",
		"rhsusf_hgu56p_visor_mask_Empire_black",
		"rhsusf_hgu56p_visor_mask_black_skull",
		"rhsusf_hgu56p_visor_mask_tan",
		"rhsusf_hgu56p_visor_tan",
		"rhsusf_hgu56p_mask_tan",
		"rhsusf_hgu56p_tan",
		"RHS_jetpilot_usaf",

		"rhsusf_mbav_light",		
		"rhsusf_mbav_grenadier",		
		"rhsusf_mbav_mg",
		"rhsusf_mbav_medic",		
		"rhsusf_mbav_rifleman",
		"rhsusf_plateframe_light",
		"rhsusf_plateframe_grenadier",
		"rhsusf_plateframe_machinegunner",
		"rhsusf_plateframe_marksman",
		"rhsusf_plateframe_medic",
		"rhsusf_plateframe_rifleman",
		"rhsusf_plateframe_teamleader",		

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
		"rhsusf_acc_ACOG_d",
		"rhsusf_acc_ACOG_MDO",
		"rhsusf_acc_su230_mrds_c",
		"rhsusf_acc_su230_mrds",
		"rhsusf_acc_su230_c",
		"rhsusf_acc_su230",
		"rhsusf_acc_LEUPOLDMK4_2_mrds",
		"rhsusf_acc_LEUPOLDMK4_2_d",
		"rhsusf_acc_LEUPOLDMK4_d",
		"rhsusf_acc_LEUPOLDMK4",
		"rhsusf_acc_LEUPOLDMK4_2",
		"rhsusf_acc_premier_anpvs27",
		"rhsusf_acc_premier_mrds",
		"rhsusf_acc_premier",
		"rhsusf_acc_M8541_low_d",
		"rhsusf_acc_M8541_d",
		"rhsusf_acc_M8541",
		"rhsusf_acc_M8541_low",
		"rhsusf_acc_compm4",
		"rhsusf_acc_eotech_552",
		"rhsusf_acc_ACOG",
		"rhsusf_acc_ACOG2",
		"rhsusf_acc_ACOG3",
		"rhsusf_acc_ELCAN_ard",
		"rhsusf_acc_ELCAN",
		"rhsusf_acc_g33_xps3_tan",
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
		"rhsusf_acc_M2010S_d",
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
		"rhsusf_acc_SR25S_d",
		"rhsusf_acc_nt4_black",
		"rhsusf_acc_nt4_tan",
		"rhsusf_acc_sf3p556",
		"rhsusf_acc_sfmb556",
		"rhsusf_acc_rotex_mp7"
	};

	AW_arsenalBackpacks[] = {
		"rhsusf_assault_eagleaiii_coy",
		"rhsusf_assault_eagleaiii_ocp",
		"rhsusf_falconii_coy",
		"rhsusf_falconii_ocp",
		"B_Kitbag_cbr",
		"B_Kitbag_mcamo",
		"B_Kitbag_tan",
		"B_AssaultPack_cbr",
		"TFAR_rt1523g_rhs",
		"TFAR_rt1523g_black",
		"TFAR_rt1523g_green",
		"TFAR_rt1523g_big"
	};

	AW_defaultLoadout[] = {
		{"rhs_weap_m4a1_blockII_KAC_d","rhsusf_acc_nt4_tan","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_RMR",{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",30},{},"rhsusf_acc_tacsac_blk"},
		{},
		{},
		{"rhs_uniform_g3_mc",{{"ACE_fieldDressing",5},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_CableTie",2},{"ACE_epinephrine",2},{"ACE_EarPlugs",1},{"ACE_Flashlight_XL50",1},{"ACE_morphine",2},{"ACE_IR_Strobe_Item",2},{"ACE_tourniquet",2},{"ACE_splint",2}}},
		{"rhsusf_mbav_rifleman",{{"SmokeShell",2,1},{"rhs_mag_m67",2,1},{"ACE_30Rnd_556x45_Stanag_M995_AP_mag",10,30}}},
		{},
		"rhsusf_opscore_mc_cover_pelt","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","ACE_NVG_Wide"}
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
			{"ACE_m26_Clacker",2},
			{"ACE_DefusalKit",2},
			{"MineDetector",2}
		}},
		{"heavyWeaponCrateCategory","Anti-Material Rifle","medium",{50,50,0},{
			{"rhs_weap_m107",1},
			{"rhsusf_mag_10rnd_std_50bmg_mk211",10},
			{"ace_5rnd_127x99_api_mag",5},
			{"rksl_optic_pmii_525",1}
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
