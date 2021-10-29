/*
	Faction: Horizon Island Defence Force
	Author: LH5
	Requires: RHSGREF, RHSUSF, Project Opfor, TFAR
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
        "rhsusf_m113_usarmy_medical",
		"rhs_uh1h_hidf_unarmed"
    };
    
	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"Land_Medevac_house_V1_F"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {

		{"I_G_Quadbike_01_F", {50,25,0}, ""},

		{"rhsgref_hidf_m1025", {50,50,0}, ""},
		{"rhsgref_hidf_M998_2dr_fulltop", {50,50,0}, ""},
		{"rhsgref_hidf_M998_2dr", {50,50,0}, ""},
		{"rhsgref_hidf_M998_2dr_halftop", {75,75,0}, ""},
		{"rhsgref_hidf_M998_4dr_fulltop", {75,50,0}, ""},
		{"rhsgref_hidf_M998_4dr_halftop", {75,50,0}, ""},
		{"rhsgref_hidf_m998_4dr", {75,50,0}, ""},
		{"rhsusf_m1045_w", {100,100,50}, ""},
		{"rhsgref_hidf_m1025_m2", {100,100,20}, ""},
		{"rhsgref_hidf_m1025_mk19", {100,100,25}, ""},

		{"rhsgref_hidf_m113a3_m2", {250,150,250}, ""},
		{"rhsgref_hidf_m113a3_mk19", {250,150,250}, ""},
		{"rhsgref_hidf_m113a3_unarmed", {250,150,0}, ""},

		{"rhsgref_cdf_b_ural", {100,100,0}, ""},                       // transport
		{"rhsgref_cdf_b_ural_open", {100,100,0}, ""}
		
	};

	AW_bluforHeavyVehicles[] = {
		
		{"RHS_M2A2_wd", {300,200,250}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		{"LOP_AA_T34", {400,225,400}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"}
		
	};

	AW_bluforAirVehicles[] = {
		{"B_UAV_01_F", {50,100,0}, ""},                                             // AR-2 Darter
		{"B_UAV_06_F", {75,100,0}, ""},                                     		// AL-6 Pelican

		{"rhs_uh1h_hidf", {150,25,100}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                       // UH-1Ys
		{"rhs_uh1h_hidf_gunship", {200,100,150}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"rhs_uh1h_hidf_unarmed", {150,200,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},

		{"RHS_CH_47F_cargo", {150,200,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"RHS_C130J", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},											// C-130 (Transport)
		{"RHS_C130J_Cargo", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},										// C-130 (Cargo)
		
		{"rhsgred_hidf_cessna_o3a", {500,500,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"}, // A10 & F22
		{"RHSGREF_A29B_HIDF", {800,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.35}}}"}								
	};

	AW_bluforNavalVehicles[] = {
		{"rhsgref_hidf_assault_boat", {40,25,0}, ""},
		{"rhsgref_hidf_canoe", {5,0,0}, ""},
		{"rhsgref_hidf_rhib", {100,40,0}, ""},
		{"rhs_pts_vmf", {125,40,0}, ""}
	};

	AW_bluforDefences[] = {
		{"RHS_Stinger_AA_pod_WD", {100,0,100}, ""},                                	  	// Mini-Spike AA (similar to Starstreak MANPAD)
		{"RHS_M119_WD", {150,0,150}, ""}                                           // M119 (Towed Arty)
	};

	AW_bluforBuildings[] = {
		{"Land_Medevac_house_V1_F", {30,0,0}, ""},

		{"Camp", {10,0,0}, ""},
		{"CampEast", {15,0,0}, ""},
		{"Land_tent_east", {15,0,0}, ""},
		{"USMC_WarfareBVehicleServicePoint", {15,0,0}, ""},
		{"USMC_WarfareBUAVterminal", {15,0,0}, ""},
		{"Land_GuardTower_02_F", {10,0,0}, ""},

		{"Flag_HorizonIslands_F", {5,0,0}, ""},
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
		{{"B_Slingload_01_Cargo_F", "FOB Container"}, {300,500,0}, "(count AW_fobPositions) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},
		{{"rhsusf_M1078A1P2_B_WD_CP_fmtv_usarmy", "FOB Truck"}, {350,500,0}, "(count AW_fobPositions) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},

		{{"Land_RepairDepot_01_tan_F", "Recycle Building"}, {250,0,0}, ""},
		{{"B_Radar_System_01_F", "Radar"}, {1000,0,0}, ""},
		{"Land_HelipadSquare_F", {250,0,0}, ""}, //Helipads to increase rotary capacity
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""}, //Hangar to increase fixed wing capacity

		{"Box_Syndicate_Ammo_F", {5,0,0}, ""},

		{"rhsgref_cdf_b_ural_repair", {300,0,0}, ""},
		{"rhsusf_m113_usarmy_supply", {100,0,200}, ""},
		{"rhsgref_cdf_b_ural_fuel", {100,200,0}, ""},

		{{"rhsusf_m113_usarmy_medical", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"rhs_uh1h_hidf_unarmed", "Mobile Respawn Vehicle (free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"},
		{{"rhs_uh1h_hidf_unarmed", "Mobile Respawn Helicopter"}, {200,100,100}, ""},

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},

		{"TFAR_Land_Communication_F", {100,0,0}, ""},

		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
		//Rifle
		"rhs_weap_l1a1",
		"rhs_weap_l1a1_wood",
		"rhs_weap_m1garand_sa43",
		"rhs_weap_m16a4_carryhandle",
		"rhs_weap_m14",
		"rhs_weap_m14_rail",

		//GL
		"rhs_weap_m16a4_carryhandle_M203",
		"rhs_weap_m79",

		//SMG
		"rhs_weap_m3a1",
		"rhs_weap_m3a1_specops",

		//Sniper
		"rhs_weap_m24sws",

		//LMG
		"rhs_weap_m249",

		//Pistol
		"rhsusf_weap_m1911a1",
		"ACE_VMM3",
		"rhs_weap_rsp30_white",
		"rhs_weap_rsp30_green",
		"rhs_weap_rsp30_red",
		"ACE_Flashlight_Maglite_ML300L",

		//Launcher
		"rhs_weap_m72a7",
		"rhs_weap_fim92",

		//Shotgun
		"rhs_weap_M590_5RD"
		
		
		};

		AW_arsenalMagazines[] = {

		//Rifle ammo
		"rhs_mag_20Rnd_762x51_m61_fnfal",
		"rhs_mag_20Rnd_762x51_m62_fnfal",
		"rhs_mag_20Rnd_762x51_m80_fnfal",
		"rhs_mag_20Rnd_762x51_m80a1_fnfal",
		"rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle",
		"rhsgref_8Rnd_762x63_M2B_M1rifle",
		"rhs_mag_30Rnd_556x45_M855_Stanag",
		"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
		"rhsusf_20Rnd_762x51_m118_special_Mag",
		"rhsusf_20Rnd_762x51_m62_Mag",
		"rhsusf_20Rnd_762x51_m80_Mag",
		"rhsusf_20Rnd_762x51_m993_Mag",

		//GL ammo
		"rhs_mag_M441_HE",
		"rhs_mag_M583A1_white",
		"rhs_mag_M585_white_cluster",
		"rhs_mag_m661_green",
		"rhs_mag_m662_red",
		"rhs_mag_M663_green_cluster",
		"rhs_mag_M664_red_cluster",
		"rhs_mag_m713_Red",
		"rhs_mag_m714_White",
		"rhs_mag_m715_Green",
		"rhs_mag_m716_yellow",
		"rhs_mag_M397_HET",
		"rhs_mag_M433_HEDP",

		//SMG ammo
		"rhsgref_30rnd_1143x23_M1T_SMG",
		"rhsgref_30rnd_1143x23_M1T_2mag_SMG",
		"rhsgref_30rnd_1143x23_M1911B_SMG",
		"rhsgref_30rnd_1143x23_M1911B_2mag_SMG",

		//sniper ammo
		"rhsusf_5Rnd_762x51_m118_special_Mag",
		"rhsusf_5Rnd_762x51_m62_Mag",
		"rhsusf_5Rnd_762x51_m993_Mag",

		//LMG ammo
		"rhsusf_200rnd_556x45_M855_mixed_box",
		"rhsusf_200rnd_556x45_M855_box",
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch",
		"rhsusf_100Rnd_556x45_M855_soft_pouch",
		"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",
		"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",

		//Pistol ammo
		"rhsusf_mag_7x45acp_MHP",
		"rhs_mag_rsp30_white",
		"rhs_mag_rsp30_green",
		"rhs_mag_rsp30_red",

		//Launcher ammo
		"rhs_fim92_mag",

		//Shotgun ammo
		"rhsusf_5Rnd_00Buck",
		"rhsusf_5Rnd_Slug",

		"rhs_mag_m67",
		"rhs_grenade_mkii_mag",

		"DemoCharge_Remote_Mag",
		"SatchelCharge_Remote_Mag",
		"ATMine_Range_Mag"
	};

	AW_arsenalItems[] = {
		
		//Uniforms
		"rhs_uniform_bdu_erdl",
		"U_I_pilotCoveralls",
		"U_B_HeliPilotCoveralls",

		//helmets
		"rhsgref_helmet_M1_erdl",
		"rhsgref_helmet_M1_liner",
		"rhsgref_helmet_M1_mit",
		"rhsgref_helmet_M1_bare",
		"rhsgref_helmet_M1_bare_alt01",
		"rhsgref_helmet_M1_painted",
		"rhsgref_helmet_M1_painted_alt01",
		"rhsgref_hat_m1941cap",
		"rhssaf_bandana_oakleaf",
		"rhssaf_bandana_md2camo",
		"rhssaf_bandana_smb",
		"H_Booniehat_oli",
		"rhsusf_hgu56p_green",
		"rhsusf_hgu56p_mask_green",
		"rhsusf_hgu56p_mask_green_mo",
		"rhsusf_hgu56p_visor_green",
		"rhsusf_hgu56p_visor_mask_green",
		"rhsusf_hgu56p_visor_mask_green_mo",
		"RHS_jetpilot_usaf",
		"rhsusf_cvc_green_alt_helmet",
		"rhsusf_cvc_green_ess",

		//Vests
		"rhsgref_alice_webbing",
		"rhsgref_chestrig",
		"rhsgref_chicom",
		"rhsgref_TacVest_ERDL",


	//Facewear
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

		//NVG
		"ACE_NVG_Gen1",

		//bino
		"Binocular",
		"ACE_VectorDay",
		"ACE_Vector",
		"rhsusf_bino_leopold_mk4",
		"rhsusf_bino_m24",
		"rhsusf_bino_m24_ARD",

		//TFAR
		"TFAR_rf7800str",
		"TFAR_anprc152",
		"TFAR_microdagr",
			
		//scopes
		"rhsgref_acc_l1a1_anpvs2",
		"rhsgref_acc_l1a1_l2a2",
		"rhsusf_acc_leupoldmk4",
		"rhsusf_acc_acog",
		
			
		//rail
		"rhsusf_acc_wmx_bk",
		

		//bipod
		"rhsusf_acc_saw_bipod",
		"rhsusf_acc_harris_bipod",
		"rhsusf_acc_harris_swivel",
		"rhsusf_acc_m14_bipod",
		
		//muzzle
		"rhsusf_acc_m24_muzzlehider_black",
		"rhsgref_acc_falmuzzle_l1a1"


	};

	AW_arsenalBackpacks[] = {
		"rhsgref_hidf_alicepack",
		"rhssaf_kitbag_md2camo",
		"B_LegStrapBag_olive_F",
		"TFAR_rt1523g_big_bwmod",
		"TFAR_rt1523g_bwmod",
		"TFAR_rt1523g_fabric",
		"TFAR_rt1523g_green"
	};

	AW_defaultLoadout[] = {
		{"rhs_weap_l1a1","rhsgref_acc_falMuzzle_l1a1","","",{"rhs_mag_20Rnd_762x51_m80_fnfal",20},
		{},
		""},
		{},
		{},
		{"rhs_uniform_bdu_erdl",{{"rhsgref_hat_M1951",1},{"ACE_fieldDressing",6},{"ACE_morphine",2},{"ACE_tourniquet",2},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_epinephrine",1},{"ACE_splint",2}}},
		{"rhsgref_alice_webbing",{{"rhs_mag_20Rnd_762x51_m80_fnfal",6,20},{"rhs_mag_m67",2,1}}},
		{},
		"rhsgref_helmet_M1_painted","",
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
		{"staticWeaponCrateCategory","Mk19 GMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"RHS_Mk19_Tripod_Bag",1},
			{"RHS_Mk19_Gun_Bag",1}
		}},
		{"lightWeaponCrateCategory","Light AT","medium",{75,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_Vector",2},
			{"rhs_weap_m72a7",4},
			{"rhs_weap_fim92",2},
			{"rhs_fim92_mag",4}
		}},
		{"heavyWeaponCrateCategory","M249 ammo","medium",{75,0,0},{
			{"ACE_EarPlugs",3},
			{"rhsusf_200rnd_556x45_M855_mixed_box",10},			
			{"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch",10}
		}},			
		{"lightWeaponCrateCategory","Standard Resupply","medium",{50,0,0},{
			{"rhsusf_mag_7x45acp_MHP",8},
			{"rhsusf_200rnd_556x45_M855_mixed_box",8},
			{"rhs_mag_20Rnd_762x51_m61_fnfal",20},
			{"rhs_mag_30Rnd_556x45_M855_Stanag",20},
			{"rhsusf_20Rnd_762x51_SR25_m62_Mag",10},
			{"rhsusf_20Rnd_762x51_SR25_m993_Mag",10},			
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
		{"heavyWeaponCrateCategory","SPG-9","medium",{50,50,0},{
			{"RHS_SPG9_Gun_Bag",1},
			{"RHS_SPG9_Tripod_Bag",1}
		}},
		{"miscWeaponCrateCategory","Empty Crate (Small)","small",{5,0,0},{

		}},
		{"miscWeaponCrateCategory","Empty Crate (Medium)","medium",{5,0,0},{

		}},
		{"heavyWeaponCrateCategory","Mixed Launcher crate","medium",{0,0,75},{
			{"rhs_weap_m72a7",8},
			{"rhs_weap_fim92",2},
			{"rhs_fim92_mag",5}
		}}
	};
};
