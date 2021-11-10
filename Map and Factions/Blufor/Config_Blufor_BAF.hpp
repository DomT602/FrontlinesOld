/*
	Faction: British Armed Forces
	Author: Dom
	Requires: UK3CB, RHSUSF, RKSL, TFAR
*/
class Blufor_Setup {
	AW_fobBuilding = "Land_Cargo_HQ_V1_F";

	AW_bluforCrates[] = { //the order links to the variable containing all resources
		"CargoNet_01_box_F", //supplies
		"CargoNet_01_barrels_F", //fuel
		"B_CargoNet_01_ammo_F" //ammo
	};

	AW_fobBoxes[] = { //vehicles that FOBs can be created from
		"UK3CB_BAF_MAN_HX58_Container_Green",
		"UK3CB_BAF_MAN_HX58_Cargo_Green_B"
	};

	AW_mobileRespawns[] = { //vehicles that act as mobile respawns
		"UK3CB_BAF_LandRover_Amb_FFR_Green_A",
		"UK3CB_BAF_Merlin_HC4_CSAR"
	};
	
	AW_medicalBuildings[] = { //buildings to add heal actions onto
		"Land_Medevac_house_V1_F"
	};

	//Building menu options below, format {"Classname",{Supplies,Fuel,Ammo},"Any extra conditions"}
	AW_bluforLightVehicles[] = {
		{"B_UGV_02_Demining_F", {20,40,0}, ""},									// ED-1D

		{"I_G_Quadbike_01_F", {50,25,0}, ""},

		{"UK3CB_BAF_LandRover_Soft_Green_A", {60,25,0}, ""},
		{"UK3CB_BAF_LandRover_Soft_FFR_Green_A", {60,25,0}, ""},                   
		{"UK3CB_BAF_LandRover_Hard_Green_A", {70,25,0}, ""},                      	
		{"UK3CB_BAF_LandRover_Hard_FFR_Green_A", {70,25,0}, ""},                   
		{"UK3CB_BAF_LandRover_Snatch_Green_A", {80,25,0}, ""},                     
		{"UK3CB_BAF_LandRover_Snatch_FFR_Green_A", {80,25,0}, ""},                 
		
		{"UK3CB_BAF_LandRover_WMIK_GPMG_Green_A", {75,25,50}, ""},
		{"UK3CB_BAF_LandRover_WMIK_GPMG_FFR_Green_A", {75,25,50}, ""},             
		{"UK3CB_BAF_LandRover_WMIK_HMG_Green_A", {80,25,50}, ""},                  
		{"UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_A", {80,25,50}, ""},              
		{"UK3CB_BAF_LandRover_WMIK_GMG_Green_A", {80,25,75}, ""},                  
		{"UK3CB_BAF_LandRover_WMIK_GMG_FFR_Green_A", {80,25,75}, ""},             
		{"UK3CB_BAF_LandRover_WMIK_Milan_Green_A", {100,25,100}, ""},              
		{"UK3CB_BAF_LandRover_WMIK_Milan_FFR_Green_A", {100,25,100}, ""},          
		
		{"UK3CB_BAF_Jackal2_L111A1_G", {100,50,75}, ""},
		{"UK3CB_BAF_Jackal2_L134A1_G", {100,50,100}, ""},
		
		{"UK3CB_BAF_Coyote_Passenger_L111A1_G", {100,50,75}, ""}, 
		{"UK3CB_BAF_Coyote_Passenger_L134A1_G", {100,50,100}, ""},
		{"UK3CB_BAF_Coyote_Logistics_L111A1_G", {100,50,75}, ""},
		{"UK3CB_BAF_Coyote_Logistics_L134A1_G", {100,50,100}, ""},

		{"UK3CB_BAF_Husky_Passenger_GPMG_Green", {150,50,50}, ""},
		{"UK3CB_BAF_Husky_Passenger_HMG_Green", {150,50,75}, ""},
		{"UK3CB_BAF_Husky_Passenger_GMG_Green", {150,50,75}, ""},
		{"UK3CB_BAF_Husky_Logistics_GPMG_Green", {150,50,50}, ""},
		{"UK3CB_BAF_Husky_Logistics_HMG_Green", {150,50,75}, ""},
		{"UK3CB_BAF_Husky_Logistics_GMG_Green", {150,50,75}, ""},
		{"UK3CB_BAF_Panther_GPMG_Green_A", {150,50,50}, ""},

		{"UK3CB_BAF_MAN_HX60_Cargo_Green_A", {100,100,0}, ""},                       // MAN 4x4
		{"UK3CB_BAF_MAN_HX60_Transport_Green", {100,100,0}, ""},
		
		{"UK3CB_BAF_MAN_HX58_Cargo_Green_A", {120,100,0}, ""},                      // MAN 6x6
		{"UK3CB_BAF_MAN_HX58_Transport_Green", {120,100,0}, ""}
	};

	AW_bluforHeavyVehicles[] = {
		{"UK3CB_BAF_FV432_Mk3_GPMG_Green", {200,100,150}, ""},                      // Bulldogs
		{"UK3CB_BAF_FV432_Mk3_RWS_Green", {200,100,150}, ""},                                  	

		{"UK3CB_BAF_Warrior_A3_W", {250,150,250}, ""},
		{"UK3CB_BAF_Warrior_A3_W_Camo", {250,150,250}, ""},	
		{"UK3CB_BAF_Warrior_A3_W_Cage", {250,150,250}, ""},		
		{"UK3CB_BAF_Warrior_A3_W_Cage_Camo", {250,150,250}, ""},

		{"rhsusf_m1a1aim_tuski_wd", {400,200,400}, "AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.5}"},
		
		{"rhsusf_m109_usarmy", {400,200,400}, ""}
	};

	AW_bluforAirVehicles[] = {
		{"B_UAV_01_F", {50,100,0}, ""},                                             // AR-2 Darter
		{"B_UAV_06_F", {75,100,0}, ""},                                     		// AL-6 Pelican
		{"UK3CB_BAF_MQ9_Reaper", {300,200,200}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {AW_civRep > 50 && {call AW_fnc_getMissionProgress > 0.35}}"},

		{"UK3CB_BAF_Wildcat_AH1_CAS_6A", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                       // Wildcats (6 seaters)
		{"UK3CB_BAF_Wildcat_AH1_CAS_6B", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"UK3CB_BAF_Wildcat_AH1_CAS_6C", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"UK3CB_BAF_Wildcat_AH1_CAS_6D", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"UK3CB_BAF_Wildcat_AH1_HEL_6A", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"UK3CB_BAF_Wildcat_AH1_TRN_8A", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},							// Wildcats (8 seaters)
		{"UK3CB_BAF_Wildcat_AH1_CAS_8A", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"UK3CB_BAF_Wildcat_AH1_CAS_8B", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"UK3CB_BAF_Wildcat_AH1_CAS_8C", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"UK3CB_BAF_Wildcat_AH1_CAS_8D", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		{"UK3CB_BAF_Wildcat_AH1_HEL_8A", {250,150,250}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},
		
		{"UK3CB_BAF_Merlin_HC3_18", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                              // Merlins
		{"UK3CB_BAF_Merlin_HC3_24", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"}, 
		{"UK3CB_BAF_Merlin_HC3_32", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"}, 
		{"UK3CB_BAF_Merlin_HC3_Cargo", {250,150,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"}, 

		{"UK3CB_BAF_Apache_AH1_DynamicLoadout", {500,200,500}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentHelicopters < AW_maxHelicopterCount}"},                // Apache

		{"RHS_C130J", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},											// C-130 (Transport)
		{"RHS_C130J_Cargo", {600,300,0}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount}"},										// C-130 (Cargo)
		
		{"I_Plane_Fighter_04_F", {800,800,800}, "(nearestObjects [player,['B_Radar_System_01_F'],150]) isNotEqualTo [] && {count AW_currentPlanes < AW_maxPlaneCount && {AW_civRep > 30 && {call AW_fnc_getMissionProgress > 0.35}}}"}								// A-149 Gryphon / JAS 39 Gripen (similar to Typhoon)
	};

	AW_bluforNavalVehicles[] = {
		{"B_Boat_Transport_01_F", {40,25,0}, ""},
		{"rhsgref_hidf_rhib", {80,25,0}, ""},
		{"UK3CB_BAF_RHIB_GPMG", {90,20,70}, ""},
		{"UK3CB_BAF_RHIB_HMG", {100,40,70}, ""}
	};

	AW_bluforDefences[] = {
		{"B_T_Static_AA_F", {100,0,100}, ""},                                	  	// Mini-Spike AA (similar to Starstreak MANPAD)
		{"RHS_M119_D", {150,0,150}, ""}                                           // M119 (Towed Arty)
	};

	AW_bluforBuildings[] = {
		{"Land_Medevac_house_V1_F", {30,0,0}, ""},

		{"Camp", {10,0,0}, ""},
		{"CampEast", {15,0,0}, ""},
		{"Land_tent_east", {15,0,0}, ""},
		{"Land_GuardTower_02_F", {10,0,0}, ""},

		{"FlagCarrierBAF", {5,0,0}, ""},
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
		{{"UK3CB_BAF_Vehicles_Servicing_Ground_Point", "BAF Servicing Point"}, {200,0,200}, ""},
		{{"UK3CB_BAF_MAN_HX58_Container_Green", "FOB Container"}, {300,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},
		{{"UK3CB_BAF_MAN_HX58_Cargo_Green_B", "FOB Truck"}, {350,500,0}, "(count AW_fobDetails) < (getNumber(missionConfigFile >> 'Core_Settings' >> 'AW_maxFobs'))"},

		{{"Land_RepairDepot_01_tan_F", "Recycle Building"}, {250,0,0}, ""},
		{{"B_Radar_System_01_F", "Radar"}, {1000,0,0}, ""},
		{"Land_HelipadSquare_F", {250,0,0}, ""}, //Helipads to increase rotary capacity
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""}, //Hangar to increase fixed wing capacity

		{"Box_Syndicate_Ammo_F", {5,0,0}, ""},

		{"UK3CB_BAF_MAN_HX58_Repair_Green", {300,0,0}, ""},
		{"rhsusf_M977A4_AMMO_usarmy_wd", {100,200,0}, ""},
		{"UK3CB_BAF_MAN_HX58_Fuel_Green", {100,0,200}, ""},

		{{"UK3CB_BAF_LandRover_Amb_FFR_Green_A", "Mobile Respawn Vehicle"}, {200,100,0}, ""},
		{{"UK3CB_BAF_Merlin_HC4_CSAR", "Mobile Respawn Helicopter"}, {200,100,100}, ""},
		{{"UK3CB_BAF_Merlin_HC4_CSAR", "Mobile Respawn Helicopter (free - max 1)"}, {0,0,0}, "AW_mobileRespawns isEqualTo []"}, //air mobile respawn (first one free)

		{"B_Slingload_01_Repair_F", {600,0,0}, ""},
		{"B_Slingload_01_Fuel_F", {100,500,0}, ""},
		{"B_Slingload_01_Ammo_F", {100,0,500}, ""},

		{"TFAR_Land_Communication_F", {100,0,0}, ""},

		{{"C_IDAP_Truck_02_water_F", "Relief Truck"}, {50,50,0}, "AW_secondaryActive isEqualTo ""Relief"""},
		{{"Land_PortableWeatherStation_01_olive_F", "Listening Post"}, {250,0,0}, "AW_secondaryActive isEqualTo ""listeningPost"" && {nearestObjects [player,[""Land_PortableWeatherStation_01_olive_F""],100] isEqualTo []}"}
	};

	AW_arsenalWeapons[] = {
		"UK3CB_BAF_L115A3",
		"UK3CB_BAF_L115A3_BL",
		"UK3CB_BAF_L115A3_DE",
		"UK3CB_BAF_L128A1",
		"UK3CB_BAF_L129A1",
		"UK3CB_BAF_L22",
		"UK3CB_BAF_L22A2",
		"UK3CB_BAF_L7A2",
		"UK3CB_BAF_L85A2",
		"UK3CB_BAF_L85A2_EMAG",
		"UK3CB_BAF_L85A2_RIS",
		"UK3CB_BAF_L85A2_RIS_G",
		"UK3CB_BAF_L85A2_RIS_D",
		"UK3CB_BAF_L85A2_UGL",
		"UK3CB_BAF_L85A2_UGL_HWS",
		"UK3CB_BAF_L85A3",
		"UK3CB_BAF_L85A3_UGL",
		"UK3CB_BAF_L86A2",
		"UK3CB_BAF_L86A3",
		"UK3CB_BAF_L135A1",
		"launch_B_Titan_F",
		"launch_NLAW_F",
		"rhs_weap_M136",
		"rhs_weap_M136_hedp",
		"rhs_weap_M136_hp",
		"rhsusf_weap_glock17g4",
		"UK3CB_BAF_L105A1",
		"UK3CB_BAF_L9A1",
		"ACE_VMH3",
		"UK3CB_BAF_L119A1",
		"UK3CB_BAF_L119A1_CQB",
		"UK3CB_BAF_L119A1_UKUGL",
		"UK3CB_BAF_L119A1_FG",
		"uk3cb_baf_l85a2_ris_g_grippod_g",
		"UK3CB_BAF_L110_762",
		"UK3CB_BAF_L110A1",
		"UK3CB_BAF_L110A2",
		"UK3CB_BAF_L110A2RIS",
		"UK3CB_BAF_L110A3",
		"UK3CB_BAF_L91A1",
		"UK3CB_BAF_L92A1",
		"UK3CB_BAF_L105A2",
		"UK3CB_BAF_L117A2",
		"UK3CB_BAF_L131A1",
		"UK3CB_BAF_L118A1_Covert",
		"UK3CB_BAF_L118A1_Covert_BL",
		"UK3CB_L118A1_Covert_DE"
	};

	AW_arsenalMagazines[] = {
		"UK3CB_BAF_762_L42_A1_10Rnd",
		"UK3CB_BAF_762_L42_A1_10Rnd_T",
		"ACE_5Rnd_127x99_Mag",
		"ACE_5Rnd_127x99_AMAX_Mag",
		"ACE_5Rnd_127x99_API_Mag",
		"UK3CB_BAF_L118A1_Covert_DE",
		"UK3CB_BAF_9_30Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd",
		"UK3CB_BAF_762_L42A1_10Rnd_T",
		"UK3CB_BAF_338_5Rnd",
		"UK3CB_BAF_338_5Rnd_Tracer",
		"rhsusf_mag_10Rnd_STD_50BMG_M33",
		"UK3CB_BAF_12G_Pellets",
		"UK3CB_BAF_12G_Slugs",
		"rhsusf_mag_17Rnd_9x19_FMJ",
		"UK3CB_BAF_762_L42A1_20Rnd",
		"UK3CB_BAF_762_L42A1_20Rnd_T",
		"UK3CB_BAF_762_200Rnd_T",
		"UK3CB_BAF_762_200Rnd",
		"UK3CB_BAF_762_100Rnd_T",
		"UK3CB_BAF_762_100Rnd",
		"UK3CB_BAF_556_100Rnd",
		"UK3CB_BAF_556_100Rnd_T",
		"UK3CB_BAF_556_200Rnd",
		"UK3CB_BAF_556_200Rnd_T",
		"Titan_AA",
		"rhs_mag_M397_HET",
		"rhs_mag_M433_HEDP",
		"rhs_mag_M441_HE",
		"rhs_mag_m576",
		"rhs_mag_m661_green",
		"rhs_mag_m662_red",
		"rhs_mag_m713_Red",
		"rhs_mag_m715_Green",
		"ACE_HuntIR_M203",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_15Rnd",
		"rhsusf_mag_17rnd_9x19_jhp",

		"rhs_mag_an_m8hc",
		"rhs_mag_an_m14_th3",
		"rhs_mag_m18_green",
		"rhs_mag_m18_purple",
		"rhs_mag_m18_red",
		"rhs_mag_m18_yellow",
		"rhs_mag_m67",
		"rhsusf_m112_mag",
		"rhsusf_m112x4_mag",
		"DemoCharge_Remote_Mag",
		"ClaymoreDirectionalMine_Remote_Mag",
		"rhs_mag_mine_ptm1",
		"UK3CB_BAF_556_30Rnd",
		"UK3CB_BAF_556_30Rnd_T",
		"SatchelCharge_Remote_Mag",
		"rhs_mag_mk84",
		"rhs_mag_M585_white",
		"ACE_40mm_Flare_white",
		"ACE_40mm_Flare_green",
		"ACE_Flare_red",
		"ACE_40mm_Flare_ir",
		"rhs_mag_m714_White",
		"rhs_mag_m716_yellow",
		"UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell",
		"UK3CB_BAF_1Rnd_SmokePurple_Grenade_shell",
		"UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell",
		"UK3CB_BAF_1Rnd_Smoke_Grenade_shell",
		"UK3CB_BAF_1Rnd_SmokeYellow_Grenade_shell"
	};

	AW_arsenalItems[] = {
		"UK3CB_BAF_U_CombatUniform_MTP_TShirt_RM",
		"rhsusf_shemagh_grn",
		"rhsusf_shemagh2_grn",
		"rhsusf_shemagh_white",
		"rhsusf_shemagh2_white",
		"rhsusf_shemagh_gogg_grn",
		"rhsusf_shemagh2_gogg_grn",
		"rhsusf_shemagh_gogg_white",
		"rhsusf_shemagh2_gogg_white",
		"rksl_optic_lds_pip",
		"TFAR_rf7800str",
		"TFAR_anprc152",
		"TFAR_microdagr",
		"RKSL_optic_EOT552",
		"U_B_pilotCoveralls",
		"H_PilotHelmetFighter_B",

		"UK3CB_BAF_TA648_308",
		"UK3CB_BAF_SUSAT",
		"rhsusf_acc_ACOG_RMR",
		"rhsusf_acc_su230",
		"rhsusf_acc_su230_c",
		"rhsusf_acc_su230_mrds",
		"rhsusf_acc_su230_mrds_c",
		"RKSL_optic_LDS",
		"UK3CB_BAF_SpecterLDS",
		"UK3CB_BAF_MaxiKite",
		"UK3CB_BAF_Kite",
		"RKSL_optic_PMII_525",
		"rhsusf_acc_premier_anpvs27",
		"rhsusf_acc_premier",
		"rhsusf_acc_premier_mrds",
		"UK3CB_BAF_LLM_Flashlight_Black",
		"UK3CB_BAF_LLM_Flashlight_Tan",
		"UK3CB_BAF_LLM_IR_Black",
		"UK3CB_BAF_LLM_IR_Tan",
		"UK3CB_BAF_Silencer_L115A3",
		"UK3CB_BAF_SFFH",
		"UK3CB_underbarrel_acc_fgrip_bipod",
		"UK3CB_underbarrel_acc_fgrip",
		"UK3CB_underbarrel_acc_grippod",
		"UK3CB_underbarrel_acc_grippod_d",
		"UK3CB_underbarrel_acc_grippod_g",
		"UK3CB_underbarrel_acc_grippod_t",
		"UK3CB_underbarrel_acc_bipod",
		"rhsusf_acc_saw_bipod",
		"uk3cb_baf_flashlight_l105a1",
		"uk3cb_baf_flashlight_l131a1",
		"uk3cb_baf_laser_l131a1",
		"uk3cb_baf_l105a1_llm_ir_g",
		"uk3cb_baf_l105a1_llm_ir_r",
		"uk3cb_baf_l105a1_llm_vl_g",
		"uk3cb_baf_l105a1_llm_fl_g",
		"uk3cb_baf_l105a1_llm_vl_r",
		"uk3cb_baf_l105a1_llm_fl_r",
		"ace_muzzle_mzls_smg_02",
		"rhsusf_acc_omega9k",
		"muzzle_snds_l",
		"uk3cb_baf_silencer_l105a1",
		"uk3cb_baf_silencer_l110",
		"uk3cb_baf_silencer_l91a1",
		"uk3cb_baf_silencer_l85",

		"UK3CB_BAF_H_Beret_AAC",
		"UK3CB_BAF_H_Beret_AAC_PRR",
		"UK3CB_BAF_H_Beret_AAC_Over",
		"UK3CB_BAF_H_Beret_Mer",
		"UK3CB_BAF_H_Beret_Mer_PRR",
		"UK3CB_BAF_H_Beret_Mer_PRR_Over",
		"UK3CB_BAF_H_Boonie_MTP",
		"UK3CB_BAF_H_Boonie_MTP_PRR",
		"UK3CB_BAF_H_CrewHelmet_ESS_A",
		"UK3CB_BAF_H_CrewHelmet_A",
		"UK3CB_BAF_H_Earphone",
		"UK3CB_BAF_H_Mk7_Camo_A",
		"UK3CB_BAF_H_Mk7_Camo_B",
		"UK3CB_BAF_H_Mk7_Camo_C",
		"UK3CB_BAF_H_Mk7_Camo_D",
		"UK3CB_BAF_H_Mk7_Camo_E",
		"UK3CB_BAF_H_Mk7_Camo_F",
		"UK3CB_BAF_H_Mk7_Camo_ESS_A",
		"UK3CB_BAF_H_Mk7_Camo_ESS_B",
		"UK3CB_BAF_H_Mk7_Camo_ESS_C",
		"UK3CB_BAF_H_Mk7_Camo_ESS_D",
		"UK3CB_BAF_H_Mk7_Net_A",
		"UK3CB_BAF_H_Mk7_Net_B",
		"UK3CB_BAF_H_Mk7_Net_C",
		"UK3CB_BAF_H_Mk7_Net_D",
		"UK3CB_BAF_H_Mk7_Net_ESS_A",
		"UK3CB_BAF_H_Mk7_Net_ESS_B",
		"UK3CB_BAF_H_Mk7_Net_ESS_C",
		"UK3CB_BAF_H_Mk7_Net_ESS_D",
		"UK3CB_BAF_H_Mk7_Net_CESS_A",
		"UK3CB_BAF_H_Mk7_Net_CESS_B",
		"UK3CB_BAF_H_Mk7_Net_CESS_C",
		"UK3CB_BAF_H_Mk7_Net_CESS_D",
		"UK3CB_BAF_H_Mk7_Scrim_A",
		"UK3CB_BAF_H_Mk7_Scrim_B",
		"UK3CB_BAF_H_Mk7_Scrim_C",
		"UK3CB_BAF_H_Mk7_Scrim_D",
		"UK3CB_BAF_H_Mk7_Scrim_E",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"UK3CB_BAF_H_Mk7_Scrim_ESS_A",
		"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
		"UK3CB_BAF_H_Mk7_Scrim_ESS_C",
		"UK3CB_BAF_H_Mk7_Camo_CESS_A",
		"UK3CB_BAF_H_Mk7_Camo_CESS_B",
		"UK3CB_BAF_H_Mk7_Camo_CESS_C",
		"UK3CB_BAF_H_Mk7_Camo_CESS_D",
		"rhsusf_hgu56p_green",
		"rhsusf_hgu56p_mask_green",
		"rhsusf_hgu56p_visor_green",
		"rhsusf_hgu56p_visor_mask_green",
		"UK3CB_BAF_H_Wool_Hat",
		"UK3CB_BAF_H_Headset_PRR",
		"H_Cap_khaki_specops_UK",
		"UK3CB_BAF_U_Smock_MTP",
		"UK3CB_BAF_U_RolledUniform_MTP",
		"UK3CB_BAF_U_HeliPilotCoveralls_Army",
		"UK3CB_BAF_U_CombatUniform_MTP",
		"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve",
		"UK3CB_BAF_U_CombatUniform_MTP_TShirt",
		"U_B_Wetsuit",
		"UK3CB_BAF_V_PLCE_Webbing_MTP",
		"UK3CB_BAF_V_Pilot_A",
		"UK3CB_BAF_V_Osprey_Lite",
		"UK3CB_BAF_V_Osprey_SL_D",
		"UK3CB_BAF_V_Osprey_SL_C",
		"UK3CB_BAF_V_Osprey_SL_B",
		"UK3CB_BAF_V_Osprey_SL_A",
		"UK3CB_BAF_V_Osprey_Rifleman_F",
		"UK3CB_BAF_V_Osprey_Rifleman_E",
		"UK3CB_BAF_V_Osprey_Rifleman_D",
		"UK3CB_BAF_V_Osprey_Rifleman_C",
		"UK3CB_BAF_V_Osprey_Rifleman_B",
		"UK3CB_BAF_V_Osprey_Rifleman_A",
		"UK3CB_BAF_V_Osprey_MG_B",
		"UK3CB_BAF_V_Osprey_MG_A",
		"UK3CB_BAF_V_Osprey_Medic_D",
		"UK3CB_BAF_V_Osprey_Medic_C",
		"UK3CB_BAF_V_Osprey_Medic_B",
		"UK3CB_BAF_V_Osprey_Medic_A",
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_V_Osprey_Holster",
		"UK3CB_BAF_V_Osprey_Grenadier_B",
		"UK3CB_BAF_V_Osprey_Grenadier_A",
		"UK3CB_BAF_V_Osprey_Belt_A",
		"UK3CB_BAF_V_Osprey",
		"V_LegStrapBag_coyote_F",
		"V_RebreatherB",

		"UK3CB_BAF_G_Tactical_Yellow",
		"UK3CB_BAF_G_Tactical_Orange",
		"UK3CB_BAF_G_Tactical_Grey",
		"UK3CB_BAF_G_Tactical_Clear",
		"UK3CB_BAF_G_Tactical_Black",
		"G_Squares",
		"G_Spectacles",
		"G_Diving",
		"rhsusf_oakley_goggles_ylw",
		"rhsusf_oakley_goggles_clr",
		"rhsusf_oakley_goggles_blk",
		"rhsusf_shemagh2_gogg_tan",
		"rhsusf_shemagh_gogg_tan",
		"rhsusf_shemagh2_gogg_od",
		"rhsusf_shemagh_gogg_od",
		"rhsusf_shemagh2_tan",
		"rhsusf_shemagh_tan",
		"rhsusf_shemagh2_od",
		"rhsusf_shemagh_od",
		"G_Lowprofile",
		"G_Bandanna_khk",
		"G_Bandanna_blk",
		"UK3CB_BAF_HMNVS",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"UK3CB_BAF_Javelin_CLU",
		"ACE_VectorDay",
		"ACE_Vector",
		"ACE_Yardage450",
		"ACE_MX2A",
		"ACE_HuntIR_monitor",
		"acc_pointer_ir",
		"ace_acc_pointer_red",
		"ace_acc_pointer_green_ir",
		"ace_acc_pointer_green"
	};

	AW_arsenalBackpacks[] = {
		"UK3CB_BAF_B_Bergen_MTP_Medic_H_A",
		"UK3CB_BAF_B_Bergen_MTP_Medic_H_B",
		"UK3CB_BAF_B_Bergen_MTP_Medic_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Medic_L_B",
		"UK3CB_BAF_B_Bergen_MTP_PointMan_H_A",
		"UK3CB_BAF_B_Bergen_MTP_PointMan_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Radio_H_A",
		"UK3CB_BAF_B_Bergen_MTP_Radio_H_B",
		"UK3CB_BAF_B_Bergen_MTP_Radio_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Radio_L_B",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D",
		"UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A",
		"UK3CB_BAF_B_Bergen_MTP_Sapper_H_A",
		"UK3CB_BAF_B_Bergen_MTP_Sapper_L_A",
		"UK3CB_BAF_B_Bergen_MTP_SL_H_A",
		"UK3CB_BAF_B_Bergen_MTP_SL_L_A",
		"ace_gunbag_Tan",
		"B_LegStrapBag_coyote_F",
		"UK3CB_BAF_B_Kitbag_MTP",
		"B_RadioBag_01_mtp_F",
		"ACE_TacticalLadder_Pack",
		"B_Parachute",
		"B_AssaultPack_cbr",
		"UK3CB_BAF_B_Bergen_MTP_JTAC_H_A",
		"UK3CB_BAF_B_Bergen_MTP_JTAC_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Engineer_L_A",
		"UK3CB_BAF_B_Bergen_MTP_Engineer_H_A",
		"B_Kitbag_cbr",
		"TFAR_rt1523g_rhs",
		"TFAR_anarc210",
		"TFAR_rt1523g_big_rhs"
	};

	AW_defaultLoadout[] = {
		{"UK3CB_BAF_L85A2_RIS_G","","","UK3CB_BAF_SpecterLDS",{"UK3CB_BAF_556_30Rnd",30},{},"UK3CB_underbarrel_acc_grippod"},
		{},
		{},
		{"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve",{{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_morphine",1},{"ACE_CableTie",2}}},
		{"UK3CB_BAF_V_Osprey_Rifleman_D",{{"ACE_EntrenchingTool",1},{"UK3CB_BAF_556_30Rnd",6,30},{"UK3CB_BAF_556_30Rnd_T",2,30},{"rhs_mag_m67",2,1},{"rhs_mag_an_m8hc",1,1}}},
		{},
		"UK3CB_BAF_H_Mk7_Camo_F","",
		{"ACE_Vector","","","",{},{},""},
		{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch","UK3CB_BAF_HMNVS"}
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
		{"staticWeaponCrateCategory","M6 Mortar","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_MapTools",2},
			{"ACE_Vector",2},
			{"UK3CB_BAF_M6",1},
			{"UK3CB_BAF_1Rnd_60mm_Mo_Shells",20},
			{"UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White",10},
			{"UK3CB_BAF_1Rnd_60mm_Mo_AB_Shells",10},
			{"UK3CB_BAF_1Rnd_60mm_Mo_Flare_White",10},
			{"UK3CB_BAF_1Rnd_60mm_Mo_WPSmoke_White",10}
		}},
		{"staticWeaponCrateCategory","L16 Mortar","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_MapTools",2},
			{"ACE_Vector",2},
			{"UK3CB_BAF_L16",1},
			{"UK3CB_BAF_L16_Tripod",1},
			{"UK3CB_BAF_1Rnd_81mm_Mo_Shells",10},
			{"UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White",5},
			{"UK3CB_BAF_1Rnd_81mm_Mo_WPSmoke_White",5},
			{"UK3CB_BAF_1Rnd_81mm_Mo_Flare_White",5},
			{"UK3CB_BAF_1Rnd_81mm_Mo_IRFlare_White",5}
		}},
		{"staticWeaponCrateCategory","L111A1 HMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"UK3CB_BAF_L111A1",1},
			{"UK3CB_BAF_Tripod",1},
			{"UK3CB_BAF_127_100Rnd",5}
		}},
		{"staticWeaponCrateCategory","L134A1 HMG","large",{50,0,0},{
			{"ACE_EarPlugs",2},
			{"UK3CB_BAF_L134A1",1},
			{"UK3CB_BAF_Tripod",1},
			{"UK3CB_BAF_32Rnd_40mm_G_Box",5}
		}},
		{"lightWeaponCrateCategory","Light AT","medium",{75,0,0},{
			{"ACE_EarPlugs",2},
			{"ACE_Vector",2},
			{"rhs_weap_M136_hp",4},
			{"rhs_weap_M136",4},
			{"rhs_weap_M136_hedp",2}
		}},
		{"lightWeaponCrateCategory","Standard Resupply","medium",{50,0,0},{
			{"UK3CB_BAF_556_30Rnd",20},
			{"UK3CB_BAF_556_30Rnd_T",10},
			{"UK3CB_BAF_762_L42A1_20Rnd",20},
			{"UK3CB_BAF_762_L42A1_20Rnd_T",10},
			{"UK3CB_BAF_338_5Rnd",10},
			{"UK3CB_BAF_338_5Rnd_Tracer",5},
			{"UK3CB_BAF_556_200Rnd",5},		
			{"UK3CB_BAF_762_200Rnd",5},
			{"rhs_mag_m18_purple",5},
			{"rhs_mag_m18_red",5},
			{"rhs_mag_m18_blue",5},
			{"rhs_mag_m18_green",5},
			{"rhs_mag_m67",10}		
		}},
		{"miscWeaponCrateCategory","Raven","small",{50,0,50},{
			{"B_rhsusf_B_BACKPACK",1}
		}},
		{"miscWeaponCrateCategory","Empty Crate (Small)","small",{5,0,0},{

		}},
		{"miscWeaponCrateCategory","Empty Crate (Medium)","medium",{5,0,0},{

		}},
		{"heavyWeaponCrateCategory","Javelin","medium",{50,0,50},{
			{"UK3CB_BAF_Javelin_CLU",1},
			{"UK3CB_BAF_Javelin_Slung_Tube",5}
		}},
		{"heavyWeaponCrateCategory","Javelin Ammo","medium",{0,0,75},{
			{"UK3CB_BAF_Javelin_Slung_Tube",10}
		}}
	};
};