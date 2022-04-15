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