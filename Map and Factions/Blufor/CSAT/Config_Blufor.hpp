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
		{"Land_HelipadSquare_F", {250,0,0}, ""},
		{"Land_HelipadCircle_F", {250,0,0}, ""},
		{"Land_HelipadRescue_F", {250,0,0}, ""},
		{"Land_TentHangar_V1_F", {500,0,0}, ""},

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