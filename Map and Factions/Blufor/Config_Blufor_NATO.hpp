/*
	Faction: NATO
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
		"B_Truck_01_box_F"
	};

	AW_mobileRespawns[] = { //vehicles that act as mobile respawns
        "B_Truck_01_medical_F",
		"B_Heli_Transport_03_unarmed_F"
    };
    
	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"Land_Medevac_house_V1_F"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {
		{"B_UGV_02_Demining_F", {20,40,0}, ""},									// ED-1D

		{"B_Quadbike_01_F", {50,25,0}, ""},

		{"B_Truck_01_transport_F", {200,50,0}, ""},

		{"B_MRAP_01_F", {100,25,0}, ""},
		{"B_MRAP_01_gmg_F", {150,50,75}, ""},
		{"B_MRAP_01_hmg_F", {150,50,50}, ""},
		{"B_LSV_01_unarmed_F", {75,25,0}, ""},
		{"B_LSV_01_armed_F", {100,25,50}, ""},
		{"B_LSV_01_AT_F", {100,25,100}, ""}	
	};

	AW_bluforHeavyVehicles[] = {
		{"B_UGV_01_rcws_F", {400,150,200}, ""},

		{"B_APC_Tracked_01_rcws_F", {200,150,200}, ""},
		{"B_APC_Tracked_01_CRV_F", {300,200,200}, ""},

		{"B_APC_Wheeled_01_cannon_F", {300,150,250}, ""},
		{"B_APC_Tracked_01_AA_F", {400,200,400}, ""},

		{"B_AFV_Wheeled_01_cannon_F", {350,200,350}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		{"B_AFV_Wheeled_01_up_cannon_F", {350,200,400}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		{"B_MBT_01_cannon_F", {400,200,400}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		{"B_MBT_01_TUSK_F", {400,200,400}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.3}"},
		
		{"B_MBT_01_arty_F", {500,250,700}, ""},
		{"B_MBT_01_mlrs_F", {500,250,1000}, ""}
	};

	AW_bluforAirVehicles[] = {
		{"B_UAV_01_F", {50,100,0}, ""},                                             // AR-2 Darter
		{"B_UAV_06_F", {75,100,0}, ""},                                     		// AL-6 Pelican
		{"B_UAV_02_dynamicLoadout_F", {300,200,200}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},
		{"B_UAV_05_F", {300,300,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},

		{"B_Heli_Light_01_F", {200,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                      
		{"B_Heli_Light_01_dynamicLoadout_F", {250,150,150}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"B_Heli_Transport_03_F", {300,200,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},							
		{"B_Heli_Transport_01_F", {200,200,100}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},							
		
		{"B_Heli_Attack_01_dynamicLoadout_F", {500,200,500}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                

		{"B_T_VTOL_01_infantry_F", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},
        {"B_T_VTOL_01_vehicle_F", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},
        {"B_T_VTOL_01_armed_F", {600,300,700}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"}, 
		
		{"B_Plane_Fighter_01_F", {900,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.4}}}"},
		{"B_Plane_CAS_01_dynamicLoadout_F", {800,800,900}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.35}}}"}								
	};

	AW_bluforNavalVehicles[] = {
		{"B_Boat_Armed_01_minigun_F", {200,75,100}, ""},
		{"B_Boat_Transport_01_F", {100,25,0}, ""},
		{"B_SDV_01_F", {100,25,0}, ""}
	};

	AW_bluforDefences[] = {	
		{"B_SAM_System_03_F", {400,0,500}, ""},                                       
		{"B_AAA_System_01_F", {400,0,500}, ""},                                       
		{"B_static_AA_F", {100,0,50}, ""}                                       
	};

	AW_bluforBuildings[] = {
		{"Land_Medevac_house_V1_F", {30,0,0}, ""},


		{"FlagCarrierNATO_EP1", {5,0,0}, ""},
		{{"Flag_White_F","Ahoyworld Flag"}, {5,0,0}, ""},
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
		{{"B_Truck_01_box_F", "FOB Truck"}, {350,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},

		{{"Land_RepairDepot_01_tan_F", "Recycle Building"}, {250,0,0}, ""},
		{{"B_Radar_System_01_F", "Radar"}, {1000,0,0}, ""},
		{"Land_HelipadSquare_F", {250,0,0}, ""}, //Helipads to increase rotary capacity
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""}, //Hangar to increase fixed wing capacity

		{"Box_Syndicate_Ammo_F", {5,0,0}, ""},
		
		{"B_Truck_01_repair_F", {250,50,0}, ""},
		{"B_Truck_01_ammo_F", {200,50,50}, ""},
		{"B_Truck_01_fuel_F", {200,100,0}, ""},

		{{"B_Truck_01_medical_F", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"B_Truck_01_medical_F", "Mobile Respawn Vehicle (free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"},
		{{"B_Heli_Transport_03_unarmed_F", "Mobile Respawn Helicopter"}, {200,100,100}, ""},

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},

		{"TFAR_Land_Communication_F", {100,0,0}, ""},

		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
		"launch_B_Titan_short_F",
		"launch_B_Titan_F",
		"launch_MRAWS_green_rail_F",
		"launch_MRAWS_olive_rail_F",
		"launch_MRAWS_sand_rail_F",
		"srifle_EBR_F",
		"srifle_LRR_F",
		"hgun_ACPC2_F",
		"hgun_Pistol_heavy_01_F",
		"arifle_MXC_F",
		"arifle_MX_F",
		"arifle_MX_GL_F",
		"arifle_MX_SW_F",
		"arifle_MXM_F",
		"arifle_MXC_Black_F",
		"arifle_MX_Black_F",
		"arifle_MX_GL_Black_F",
		"arifle_MX_SW_Black_F",
		"arifle_MXM_Black_F",
		"hgun_PDW2000_F",
		"SMG_01_F",
		"SMG_02_F",
		"arifle_SPAR_01_blk_F",
		"arifle_SPAR_01_snd_F",
		"arifle_SPAR_01_GL_blk_F",
		"arifle_SPAR_01_GL_snd_F",
		"arifle_SPAR_02_blk_F",
		"arifle_SPAR_02_snd_F",
		"arifle_SPAR_03_blk_F",
		"arifle_SPAR_03_snd_F"
	};

	AW_arsenalMagazines[] = {
		"B_IR_Grenade",

		"DemoCharge_Remote_Mag",
		"SatchelCharge_Remote_Mag",

		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
		"100Rnd_65x39_caseless_mag",
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_mag_Tracer",
		"100Rnd_65x39_caseless_black_mag_tracer",
		"ACE_100Rnd_65x39_caseless_mag_Tracer_Dim",
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
		"ACE_HuntIR_M203",
		"ACE_40mm_Flare_white",
		"ACE_40mm_Flare_red",
		"ACE_40mm_Flare_green",
		"ACE_40mm_Flare_ir",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_green",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Green",
		"30Rnd_556x45_Stanag_Tracer_Yellow",
		"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
		"ACE_30Rnd_556x45_Stanag_Tracer_Dim",
		"30Rnd_556x45_Stanag_Sand",
		"30Rnd_556x45_Stanag_Sand_green",
		"30Rnd_556x45_Stanag_Sand_red",
		"30Rnd_556x45_Stanag_Sand_Tracer_Red",
		"30Rnd_556x45_Stanag_Sand_Tracer_Green",
		"30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
		"150Rnd_556x45_Drum_Mag_F",
		"150Rnd_556x45_Drum_Mag_Tracer_F",
		"150Rnd_556x45_Drum_Sand_Mag_F",
		"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",
		"Titan_AA",
		"Titan_AT",
		"Titan_AP",
		"MRAWS_HE_F",
		"MRAWS_HEAT55_F",
		"MRAWS_HEAT_F",
		"9Rnd_45ACP_Mag",
		"11Rnd_45ACP_Mag",
		"20Rnd_762x51_Mag"
	};

	AW_arsenalItems[] = {
		"optic_DMS",
		"optic_ACO_grn",
		"optic_Aco",
		"optic_Arco_blk_F",
		"ACE_optic_Arco_2D",
		"optic_Arco",
		"optic_Holosight_blk_F",
		"optic_Holosight",
		"optic_MRCO",
		"ACE_optic_MRCO_2D",
		"optic_Hamr",
		"ACE_optic_Hamr_2D",
		"optic_SOS",
		"optic_LRPS",
		"optic_Nightstalker",
		"optic_ERCO_snd_F",
		"optic_ERCO_blk_F",
		"optic_AMS",
		"optic_AMS_snd",

		"acc_flashlight",
		"acc_flashlight_smg_01",
		"acc_esd_01_flashlight",
		"acc_flashlight_pistol",
		"acc_pointer_IR",
		"ACE_acc_pointer_green",
		"ACE_muzzle_mzls_H",
		"ACE_muzzle_mzls_L",
		"ACE_muzzle_mzls_smg_01",
		"ACE_muzzle_mzls_smg_02",
		"ACE_muzzle_mzls_B",
		"ACE_muzzle_mzls_338",
		"ACE_muzzle_mzls_93mmg",
		"muzzle_snds_acp",
		"muzzle_snds_M",
		"muzzle_snds_m_snd_F",
		"muzzle_snds_H",
		"muzzle_snds_H_snd_F",
		"muzzle_snds_B",
		"muzzle_snds_B_snd_F",
		"muzzle_snds_L",
		"muzzle_snds_H_MG_blk_F",
		"muzzle_snds_H_MG",
		"muzzle_snds_65_TI_blk_F",
		"bipod_01_F_blk",
		"bipod_01_F_snd",

		"H_HelmetSpecB",
		"H_HelmetSpecB_blk",
		"H_HelmetSpecB_paint2",
		"H_HelmetSpecB_paint1",
		"H_HelmetSpecB_sand",
		"H_HelmetSpecB_snakeskin",
		"H_HelmetSpecB_wdl",
		"H_HelmetB_Enh_tna_F",
		"H_HelmetB",
		"H_HelmetB_black",
		"H_HelmetB_camo",
		"H_HelmetB_desert",
		"H_HelmetB_grass",
		"H_HelmetB_sand",
		"H_HelmetB_snakeskin",
		"H_HelmetB_tna_F",
		"H_HelmetB_plain_wdl",
		"H_PilotHelmetFighter_B",
		"H_PilotHelmetHeli_B",
		"H_CrewHelmetHeli_B","H_HelmetCrew_B",
		"H_HelmetB_light",
		"H_HelmetB_light_black",
		"H_HelmetB_light_desert",
		"H_HelmetB_light_grass",
		"H_HelmetB_light_sand",
		"H_HelmetB_light_snakeskin",
		"H_HelmetB_Light_tna_F",
		"H_HelmetB_light_wdl",
		"H_Booniehat_khk_hs",
		"H_Booniehat_khk",
		"H_Booniehat_mgrn",
		"H_Booniehat_tna_F",
		"H_Booniehat_wdl",
		"H_Booniehat_tan",
		"H_Booniehat_oli",
		"H_Booniehat_mcamo",
		"H_Cap_oli",
		"H_Cap_oli_hs",
		"H_Cap_khaki_specops_UK",
		"H_Cap_tan_specops_US",
		"H_Cap_headphones",
		"H_Beret_Colonel",
		"H_Beret_02",

		"U_B_FullGhillie_ard",
		"U_B_FullGhillie_lsh",
		"U_B_T_FullGhillie_tna_F",
		"U_B_FullGhillie_sard",
		"U_B_T_Sniper_F",
		"U_B_GhillieSuit",
		"U_B_HeliPilotCoveralls",
		"U_B_PilotCoveralls",
		"U_B_CombatUniform_mcam_vest",
		"U_B_CombatUniform_mcam",
		"U_B_CombatUniform_mcam_tshirt",
		"U_B_T_Soldier_F",
		"U_B_T_Soldier_AR_F",
		"U_B_CombatUniform_mcam_wdl_f",
		"U_B_CombatUniform_tshirt_mcam_wdL_f",
		"U_B_Wetsuit",

		"V_PlateCarrier1_blk",
		"V_PlateCarrier1_rgr",
		"V_PlateCarrier1_rgr_noflag_F",
		"V_PlateCarrierGL_wdl",
		"V_PlateCarrierGL_tna_F",
		"V_PlateCarrierGL_mtp",
		"V_PlateCarrierGL_rgr",
		"V_PlateCarrierGL_blk",
		"V_PlateCarrier1_tna_F",
		"V_PlateCarrier1_wdl",
		"V_PlateCarrier2_blk",
		"V_PlateCarrier2_rgr",
		"V_PlateCarrier2_rgr_noflag_F",
		"V_PlateCarrier2_tna_F",
		"V_PlateCarrier2_wdl",
		"V_PlateCarrierSpec_blk",
		"V_PlateCarrierSpec_rgr",
		"V_PlateCarrierSpec_mtp",
		"V_PlateCarrierSpec_tna_F",
		"V_PlateCarrierSpec_wdl",
		"V_Rangemaster_belt",
		"V_RebreatherB",
		"V_TacVest_oli",

		"G_Bandanna_beast",
		"G_Bandanna_blk",
		"G_Bandanna_khk",
		"G_Bandanna_oli",
		"G_Bandanna_shades",
		"G_Bandanna_sport",
		"G_Bandanna_tan",
		"G_Combat",
		"G_Combat_Goggles_tna_F",
		"G_B_Diving",
		"G_EyeProtectors_F",
		"G_EyeProtectors_Earpiece_F",
		"G_Respirator_white_F",
		"G_Tactical_Black",
		"G_Tactical_Clear",

		"ACE_NVG_Wide_Black",
		"ACE_NVG_Wide",
		"ACE_NVG_Wide_Green",
		"ACE_NVG_Gen4_Green",
		"ACE_NVG_Gen4",
		"ACE_NVG_Gen4_Black",

		"Binocular",
		"Laserdesignator",
		"Laserdesignator_03",
		"ACE_Vector",
		"ItemMap",
		"ItemCompass",
		"TFAR_anprc152",
		"ACE_Altimeter",
		"ItemWatch",
		"ItemGPS",
		"B_UavTerminal"
	};

	AW_arsenalBackpacks[] = {
		"B_UGV_02_Demining_backpack_F",
		"B_TacticalPack_blk",
		"B_TacticalPack_rgr",
		"B_TacticalPack_mcamo",
		"B_TacticalPack_oli",
		"B_Parachute",
		"TFAR_rt1523g_green",
		"TFAR_rt1523g_bwmod",
		"TFAR_rt1523g_black",
		"TFAR_rt1523g_big_bwmod",
		"TFAR_rt1523g","B_RadioBag_01_wdl_F",
		"B_RadioBag_01_tropic_F",
		"B_RadioBag_01_mtp_F",
		"B_RadioBag_01_black_F",
		"B_LegStrapBag_black_F",
		"B_LegStrapBag_coyote_F",
		"B_LegStrapBag_olive_F",
		"B_Kitbag_cbr",
		"B_Kitbag_rgr",
		"B_Kitbag_mcamo",
		"B_Kitbag_tan",
		"B_Kitbag_sgg",
		"B_Carryall_oli",
		"B_Carryall_mcamo",
		"B_Carryall_green_F",
		"B_Carryall_wdl_F",
		"B_AssaultPack_mcamo",
		"B_AssaultPack_tna_F",
		"B_AssaultPack_wdl_F",
		"B_AssaultPack_rgr",
		"B_AssaultPack_cbr",
		"B_AssaultPack_blk"
	};

	AW_defaultLoadout[] = {
		{"arifle_MX_F","ACE_muzzle_mzls_H","acc_pointer_IR","optic_Arco",{"30Rnd_65x39_caseless_mag",30},{},"bipod_01_F_snd"},{},{},
		{"U_B_CombatUniform_mcam",{{"ACE_fieldDressing",5},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_quikclot",5},{"ACE_CableTie",2},{"ACE_EarPlugs",1},{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_Flashlight_XL50",1},{"ACE_IR_Strobe_Item",2},{"ACE_splint",2},{"ACE_tourniquet",2}}},
		{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",8,30},{"HandGrenade",2,1},{"SmokeShell",2,1}}},
		{"B_AssaultPack_rgr",{}},
		"H_HelmetB_camo","",
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
		{"staticWeaponCrateCategory","Mk6 Mortar","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_MapTools",2},
			{"ACE_Vector",2},
			{"ACE_artilleryTable",2},
			{"B_Mortar_01_weapon_F",2},
			{"B_Mortar_01_support_F",2}
		}},
		{"staticWeaponCrateCategory","Mk30 HMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"B_HMG_01_weapon_F",1},
			{"B_HMG_01_high_weapon_F",1},
			{"B_HMG_01_support_F",1},
			{"B_HMG_01_support_high_F",1}
		}},
		{"staticWeaponCrateCategory","Mk32 GMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"B_GMG_01_high_weapon_F",1},
			{"B_GMG_01_weapon_F",1},
			{"B_HMG_01_support_F",1},
			{"B_HMG_01_support_high_F",1}
		}},
		{"lightWeaponCrateCategory","Standard Resupply","medium",{50,0,0},{
			{"30Rnd_65x39_caseless_mag",25},
			{"30Rnd_556x45_Stanag_Sand",25},
			{"20Rnd_762x51_Mag",20},
			{"100Rnd_65x39_caseless_mag",10},
			{"150Rnd_556x45_Drum_Mag_F",8},
						
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