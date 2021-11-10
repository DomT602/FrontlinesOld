/*
	Faction: CSAT
	Author: SiegeSix
	Requires: TFAR
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
		"O_Truck_03_device_F"
	};

	AW_mobileRespawns[] = { //vehicles that act as mobile respawns
        "O_Truck_03_medical_F",
		"O_Heli_Transport_04_medevac_F"
    };
    
	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"Land_Medevac_house_V1_F"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {
		{"O_T_UGV_01_rcws_ghex_F", {50,40,25}, ""},

		{"O_Quadbike_01_F", {50,25,0}, ""},

		{"O_Truck_03_transport_F", {200,50,0}, ""},

		{"O_MRAP_02_F", {100,25,0}, ""},
		{"O_MRAP_02_gmg_F", {150,50,75}, ""},
		{"O_MRAP_02_hmg_F", {150,50,50}, ""},
		{"O_LSV_02_unarmed_F", {75,25,0}, ""},
		{"O_LSV_02_armed_F", {100,25,50}, ""},
		{"O_LSV_02_AT_F", {100,25,100}, ""}	
	};

	AW_bluforHeavyVehicles[] = {
		{"O_APC_Wheeled_02_rcws_v2_F", {200,150,200}, ""},

		{"O_APC_Tracked_02_cannon_F", {300,150,250}, ""},
		{"O_APC_Tracked_02_AA_F", {300,150,350}, ""},

		{"O_MBT_02_cannon_F", {350,200,350}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		{"O_MBT_04_cannon_F", {400,200,400}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		{"O_MBT_04_command_F", {400,200,450}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		
		
		{"O_MBT_02_arty_F", {500,250,700}, ""}
	};

	AW_bluforAirVehicles[] = {
		{"O_UAV_01_F", {50,100,0}, ""},                                             // AR-2 Darter
		{"O_UAV_06_F", {75,100,0}, ""},                                     		// AL-6 Pelican
		{"O_UAV_02_dynamicLoadout_F", {300,200,200}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},
		{"O_T_UAV_04_CAS_F", {300,300,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},

		{"O_Heli_Light_02_unarmed_F", {200,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                      
		{"O_Heli_Light_02_dynamicLoadout_F", {250,150,150}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"O_Heli_Transport_04_covered_F", {250,200,100}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},							
		{"O_Heli_Transport_04_bench_F", {200,200,100}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},							
		
		{"O_Heli_Attack_02_dynamicLoadout_F", {500,200,500}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                
		
		{"O_Plane_Fighter_02_F", {900,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"},
		{"O_T_VTOL_02_infantry_dynamicLoadout_F", {850,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"},
		{"O_T_VTOL_02_vehicle_dynamicLoadout_F", {850,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"},
		{"O_Plane_CAS_02_dynamicLoadout_F", {800,800,900}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.35}}}"}								
	};

	AW_bluforNavalVehicles[] = {
		{"O_Boat_Armed_01_hmg_F", {200,75,100}, ""},
		{"O_Boat_Transport_01_F", {100,25,0}, ""},
		{"O_SDV_01_F", {100,25,0}, ""}
	};

	AW_bluforDefences[] = {
		{"O_Radar_System_02_F", {100,0,100}, ""},                                	  	
		{"O_SAM_System_04_F", {400,0,500}, ""},                                     
		{"O_static_AA_F", {100,0,50}, ""}                                       
	};

	AW_bluforBuildings[] = {
		{"Land_Medevac_house_V1_F", {30,0,0}, ""},


		{"Flag_CSAT_F", {5,0,0}, ""},
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
		{{"B_Slingload_01_Cargo_F", "FOB Container"}, {300,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},
		{{"O_Truck_03_device_F", "FOB Truck"}, {350,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},

		{{"Land_RepairDepot_01_tan_F", "Recycle Building"}, {250,0,0}, ""},
		{{"B_Radar_System_01_F", "Radar"}, {1000,0,0}, ""},
		{"Land_HelipadSquare_F", {250,0,0}, ""}, //Helipads to increase rotary capacity
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""}, //Hangar to increase fixed wing capacity

		{"Box_Syndicate_Ammo_F", {5,0,0}, ""},
		
		{"O_Truck_03_repair_F", {250,50,0}, ""},
		{"O_Truck_03_ammo_F", {200,50,50}, ""},
		{"O_Truck_03_fuel_F", {200,100,0}, ""},

		{{"O_Truck_03_medical_F", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"O_Truck_03_medical_F", "Mobile Respawn Vehicle (free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"},
		{{"O_Heli_Transport_04_medevac_F", "Mobile Respawn Helicopter"}, {200,100,100}, ""},

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},

		{"TFAR_Land_Communication_F", {100,0,0}, ""},

		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
		"srifle_DMR_04_F",
		"srifle_DMR_04_Tan_F",
		"srifle_DMR_05_blk_F",
		"srifle_DMR_05_hex_F",
		"srifle_DMR_05_tan_f",
		"srifle_GM6_F",
		"srifle_GM6_camo_F",
		"srifle_GM6_ghex_F",
		"arifle_Katiba_F",
		"arifle_Katiba_GL_F",
		"arifle_Katiba_C_F",
		"LMG_Zafir_F",
		"srifle_DMR_07_blk_F",
		"srifle_DMR_07_ghex_F",
		"srifle_DMR_07_hex_F",
		"arifle_CTAR_blk_F",
		"arifle_CTAR_ghex_F",
		"arifle_CTAR_hex_F",
		"arifle_CTAR_GL_blk_F",
		"arifle_CTAR_GL_ghex_F",
		"arifle_CTARS_blk_F",
		"arifle_CTAR_GL_hex_F",
		"arifle_CTARS_ghex_F",
		"arifle_CTARS_hex_F",
		"arifle_SDAR_F",
		"arifle_ARX_hex_F",
		"arifle_ARX_ghex_F",
		"arifle_ARX_blk_F",
		"srifle_DMR_01_F",
		"launch_O_Titan_short_ghex_F",
		"launch_O_Titan_F",
		"launch_O_Titan_ghex_F",
		"launch_RPG32_ghex_F",
		"launch_O_Titan_short_F",
		"launch_O_Vorona_green_F",
		"launch_O_Vorona_brown_F",
		"hgun_Rook40_F"		
	};

	AW_arsenalMagazines[] = {
		"10Rnd_127x54_Mag",
		"10Rnd_93x64_DMR_05_Mag",
		"5Rnd_127x108_Mag",
		"5Rnd_127x108_APDS_Mag",
		"ACE_5Rnd_127x99_Mag",
		"ACE_5Rnd_127x99_API_Mag",
		"ACE_5Rnd_127x99_AMAX_Mag",
		"30Rnd_65x39_caseless_green",
		"30Rnd_65x39_caseless_green_mag_Tracer",
		"ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim",
		"1Rnd_HE_Grenade_shell",
		"3Rnd_HE_Grenade_shell",
		"UGL_FlareWhite_F",
		"UGL_FlareGreen_F",
		"UGL_FlareRed_F",
		"UGL_FlareYellow_F",
		"UGL_FlareCIR_F",
		"3Rnd_UGL_FlareWhite_F",
		"3Rnd_UGL_FlareGreen_F",
		"3Rnd_UGL_FlareRed_F",
		"3Rnd_UGL_FlareYellow_F",
		"3Rnd_UGL_FlareCIR_F",
		"1Rnd_Smoke_Grenade_shell",
		"1Rnd_SmokeRed_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeYellow_Grenade_shell",
		"1Rnd_SmokePurple_Grenade_shell",
		"1Rnd_SmokeBlue_Grenade_shell",
		"1Rnd_SmokeOrange_Grenade_shell",
		"3Rnd_Smoke_Grenade_shell",
		"3Rnd_SmokeRed_Grenade_shell",
		"3Rnd_SmokeGreen_Grenade_shell",
		"3Rnd_SmokeYellow_Grenade_shell",
		"3Rnd_SmokePurple_Grenade_shell",
		"3Rnd_SmokeBlue_Grenade_shell",
		"3Rnd_SmokeOrange_Grenade_shell",
		"ACE_40mm_Flare_white",
		"ACE_40mm_Flare_red",
		"ACE_40mm_Flare_green",
		"ACE_40mm_Flare_ir",
		"150Rnd_762x54_Box",
		"150Rnd_762x54_Box_Tracer",
		"20Rnd_650x39_Cased_Mag_F",
		"ACE_20Rnd_65x47_Scenar_mag",
		"ACE_20Rnd_65_Creedmor_mag",
		"ACE_10Rnd_580x42_DBP88_Mag",
		"30Rnd_580x42_Mag_F",
		"30Rnd_580x42_Mag_Tracer_F",
		"100Rnd_580x42_Mag_F",
		"100Rnd_580x42_Mag_Tracer_F",
		"100Rnd_580x42_hex_Mag_F",
		"100Rnd_580x42_hex_Mag_Tracer_F",
		"100Rnd_580x42_ghex_Mag_F",
		"100Rnd_580x42_ghex_Mag_Tracer_F",
		"20Rnd_556x45_UW_mag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Green",
		"30Rnd_556x45_Stanag_Tracer_Yellow",
		"30Rnd_556x45_Stanag_green",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_Sand",
		"30Rnd_556x45_Stanag_Sand_green",
		"30Rnd_556x45_Stanag_Sand_red",
		"30Rnd_556x45_Stanag_Sand_Tracer_Red",
		"30Rnd_556x45_Stanag_Sand_Tracer_Green",
		"30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
		"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
		"ACE_30Rnd_556x45_Stanag_Mk262_mag",
		"ACE_30Rnd_556x45_Stanag_Mk318_mag",
		"ACE_30Rnd_556x45_Stanag_Tracer_Dim",
		"10Rnd_50BW_Mag_F",
		"10Rnd_762x54_Mag",
		"ACE_10Rnd_762x54_Tracer_mag",
		"Titan_AT",
		"Titan_AP",
		"Titan_AA",
		"RPG32_F",
		"RPG32_HE_F",
		"Vorona_HEAT",
		"Vorona_HE",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_red_Mag",
		"16Rnd_9x21_green_Mag",
		"16Rnd_9x21_yellow_Mag",
		"30Rnd_9x21_Mag",
		"30Rnd_9x21_Red_Mag",
		"30Rnd_9x21_Yellow_Mag",
		"30Rnd_9x21_Green_Mag",
		"30Rnd_762x39_AK12_Mag_F",
		"30Rnd_762x39_Mag_F",
		"30Rnd_762x39_Mag_Green_F",
		"30Rnd_762x39_Mag_Tracer_F",
		"30Rnd_762x39_Mag_Tracer_Green_F",
		"30Rnd_762x39_AK12_Mag_Tracer_F",
		"75Rnd_762x39_Mag_F",
		"75Rnd_762x39_Mag_Tracer_F",
		"30rnd_762x39_AK12_Lush_Mag_F",
		"30rnd_762x39_AK12_Lush_Mag_Tracer_F",
		"30rnd_762x39_AK12_Arid_Mag_F",
		"30rnd_762x39_AK12_Arid_Mag_Tracer_F",
		"75rnd_762x39_AK12_Mag_F",
		"75rnd_762x39_AK12_Mag_Tracer_F",
		"75rnd_762x39_AK12_Lush_Mag_F",
		"75rnd_762x39_AK12_Lush_Mag_Tracer_F",
		"75rnd_762x39_AK12_Arid_Mag_F",
		"75rnd_762x39_AK12_Arid_Mag_Tracer_F",
		"ACE_HuntIR_M203"
	};

	AW_arsenalItems[] = {
		"optic_DMS_ghex_F",
		"optic_Arco_ghex_F",
		"optic_KHS_hex",
		"optic_LRPS_ghex_F",
		"optic_ACO_grn",
		"optic_Aco",
		"optic_MRCO",
		"optic_Hamr",
		"optic_ERCO_blk_F",
		"acc_pointer_IR",
		"ACE_acc_pointer_green",
		"acc_flashlight_smg_01",
		"acc_flashlight",
		"muzzle_snds_93mmg",
		"ACE_muzzle_mzls_93mmg",
		"muzzle_snds_H",
		"muzzle_snds_65_TI_blk_F",
		"muzzle_snds_65_TI_hex_F",
		"muzzle_snds_65_TI_ghex_F",
		"ACE_muzzle_mzls_H",
		"muzzle_snds_B",
		"muzzle_snds_58_blk_F",
		"muzzle_snds_58_ghex_F",
		"muzzle_snds_58_hex_F",
		"ACE_muzzle_mzls_B",
		"muzzle_snds_L",
		"ACE_muzzle_mzls_smg_02",
		"muzzle_snds_B_lush_F",
		"bipod_01_F_mtp",
		"bipod_02_F_blk",
		"bipod_02_F_tan",
		"bipod_02_F_hex",
		"bipod_02_F_arid",
		"bipod_02_F_lush",
		"arifle_AK12_F",
		"arifle_AK12_arid_F",
		"arifle_AK12_lush_F",
		"arifle_AK12_GL_F",
		"arifle_AK12_GL_lush_F",
		"arifle_AK12_GL_arid_F",
		"arifle_AK12U_lush_F",
		"arifle_AK12U_arid_F",
		"arifle_AK12U_F",

		"U_O_T_Soldier_F",
		"U_O_CombatUniform_ocamo",
		"U_O_CombatUniform_oucamo",
		"U_O_FullGhillie_ard",
		"U_O_T_FullGhillie_tna_F",
		"U_O_FullGhillie_lsh",
		"U_O_FullGhillie_sard",
		"U_O_T_Sniper_F",
		"U_O_GhillieSuit",
		"U_O_T_Officer_F",
		"U_O_PilotCoveralls",
		"U_O_Wetsuit",
		"U_O_V_Soldier_Viper_hex_F",
		"U_O_V_Soldier_Viper_F",
		"V_HarnessOGL_ghex_F",
		"V_BandollierB_ghex_F",
		"V_HarnessO_ghex_F",
		"V_HarnessOGL_gry",
		"V_HarnessO_brn",
		"V_HarnessO_gry",
		"V_HarnessOGL_brn",
		"V_Chestrig_blk",
		"V_Chestrig_rgr",
		"V_Chestrig_khk",
		"V_Chestrig_oli",
		"V_RebreatherIR",
		"B_AssaultPack_ocamo",
		"B_Bergen_hex_F",
		"B_Carryall_ghex_F",
		"B_Carryall_ocamo",
		"B_FieldPack_ghex_F",
		"B_FieldPack_ocamo",
		"B_RadioBag_01_ghex_F",
		"B_RadioBag_01_hex_F",
		"B_TacticalPack_ocamo",
		"B_ViperHarness_ghex_F",
		"B_ViperHarness_hex_F",
		"B_ViperLightHarness_ghex_F",
		"B_ViperLightHarness_hex_F",
		"B_ViperHarness_blk_F",
		"B_ViperHarness_khk_F",
		"B_ViperHarness_oli_F",
		"B_ViperLightHarness_blk_F",
		"B_ViperLightHarness_khk_F",
		"B_ViperLightHarness_oli_F",
		"V_SmershVest_01_F",
		"V_SmershVest_01_radio_F",

		

		"G_Balaclava_blk",
		"G_Balaclava_combat",
		"G_Balaclava_lowprofile",
		"G_Balaclava_oli",
		"O_NVGoggles_ghex_F",
		"O_NVGoggles_grn_F",
		"O_NVGoggles_hex_F",
		"O_NVGoggles_urb_F",
		"ACE_NVG_Gen4_Green",
		"ACE_NVG_Gen4",
		"ACE_NVG_Gen4_Black",
		"ACE_NVG_Wide_Black",
		"ACE_NVG_Wide",
		"ACE_NVG_Wide_Green",

		"Binocular",
		"Laserdesignator_02_ghex_F",
		"Laserdesignator_02",
		"ACE_Vector",
		"ItemMap",
		"ItemCompass",
		"TFAR_anprc152",
		"ACE_Altimeter",
		"ItemWatch",
		"ItemGPS",
		"B_UavTerminal",

		"ACE_M14",
		"O_IR_Grenade",
		"DemoCharge_Remote_Mag",
		"SatchelCharge_Remote_Mag",
		"APERSMineDispenser_Mag",

		"H_HelmetCrew_O_ghex_F",
		"H_Tank_black_F",
		"H_HelmetCrew_O",
		"H_CrewHelmetHeli_O",
		"H_PilotHelmetHeli_O",
		"H_PilotHelmetFighter_O",
		"H_HelmetSpecO_ghex_F",
		"H_HelmetSpecO_ocamo",
		"H_HelmetLeaderO_ghex_F",
		"H_HelmetLeaderO_ocamo",
		"H_MilCap_ghex_F",
		"H_MilCap_ocamo",
		"H_HelmetO_ghex_F",
		"H_HelmetO_ocamo",
		"H_HelmetO_ViperSP_ghex_F",
		"H_HelmetO_ViperSP_hex_F",
		"H_HelmetLeaderO_oucamo",
		"H_HelmetO_oucamo"
	};

	AW_arsenalBackpacks[] = {
		"TFAR_rt1523g_sage",
		"TFAR_rt1523g_bwmod",
		"TFAR_rt1523g_big_bwmod_tropen",
		"TFAR_rt1523g_big_bwmod",
		"TFAR_rt1523g_fabric",
		"TFAR_rt1523g_green",
		"TFAR_rt1523g_black",
		"B_FieldPack_khk",
		"B_FieldPack_oli",
		"B_RadioBag_01_oucamo_F",
		"B_Carryall_oucamo",
		"B_FieldPack_oucamo"
	};

	AW_defaultLoadout[] = {
		{"arifle_Katiba_F","","acc_pointer_IR","optic_MRCO",{"30Rnd_65x39_caseless_green",30},{},""},{},
		{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},
		{"U_O_CombatUniform_ocamo",{{"ACE_fieldDressing",5},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_epinephrine",2},{"ACE_IR_Strobe_Item",2},{"ACE_Flashlight_XL50",1},{"ACE_morphine",2},{"ACE_splint",2}}},
		{"V_HarnessO_brn",{{"30Rnd_65x39_caseless_green",8,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",2,1},{"HandGrenade",2,1}}},{},
		"H_HelmetO_ocamo","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","O_NVGoggles_hex_F"}
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
		{"staticWeaponCrateCategory","Mk6 Mortar","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_MapTools",2},
			{"ACE_Vector",2},
			{"ACE_artilleryTable",2},
			{"O_Mortar_01_weapon_F",2},
			{"O_Mortar_01_support_F",2}
		}},
		{"staticWeaponCrateCategory","Mk30 HMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"O_HMG_01_weapon_F",1},
			{"O_HMG_01_high_weapon_F",1},
			{"O_HMG_01_support_F",1},
			{"O_HMG_01_support_high_F",1}
		}},
		{"staticWeaponCrateCategory","Mk32 GMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"O_GMG_01_high_weapon_F",1},
			{"O_GMG_01_weapon_F",1},
			{"O_HMG_01_support_F",1},
			{"O_HMG_01_support_high_F",1}
		}},
		{"lightWeaponCrateCategory","Standard Resupply","medium",{50,0,0},{
			{"30Rnd_65x39_caseless_green",25},
			{"10Rnd_762x54_Mag",20},
			{"150Rnd_762x54_Box",10},
			{"100Rnd_580x42_Mag_F",8},
						
			{"HandGrenade",6},
			{"MiniGrenade",6},
			{"SmokeShell",4},
			{"SmokeShellBlue",4},
			{"SmokeShellOrange",4},
			{"1Rnd_HE_Grenade_shell",10},
			{"UGL_FlareGreen_F",10},
			{"UGL_FlareYellow_F",10},
			{"1Rnd_Smoke_Grenade_shell",5},
			{"1Rnd_SmokeRed_Grenade_shell",5}			
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