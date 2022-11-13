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
	AW_helipads[] = {"Land_HelipadSquare_F", "Land_HelipadCircle_F", "Land_HelipadRescue_F"}; //Helipads to increase rotary capacity
	AW_hangars[] = {"Land_TentHangar_V1_F"}; //Hangar to increase fixed wing capacity

	AW_supplyCrateTypes[] = { //crate types to be used below, format {sizeName, classname}
		{"medical", "ACE_medicalSupplyCrate_advanced"},
		{"small", "Box_East_Ammo_F"},
		{"medium", "Box_East_Wps_F"},
		{"large", "Box_East_WpsSpecial_F"},
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