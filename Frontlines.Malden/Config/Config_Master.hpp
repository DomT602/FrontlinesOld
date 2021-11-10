class Core_Settings {
	AW_version = "0.5.1";
	AW_adminUIDs[] = { //Add admin UIDs here to be auto-assigned zeus and be given all ACE actions for Frontlines
		"76561198071007604"
	};

	AW_fobBuildRadius = 100; //Max distance from the main FOB building that the objects can be built
	AW_maxFobs = 10; //should match number of elements below
	AW_fobDefaultNames[] = {"FOB Alpha", "FOB Bravo", "FOB Charlie", "FOB Delta", "FOB Echo", "FOB Foxtrot", "FOB Golf", "FOB Hotel", "FOB India", "FOB Juliet"};
	AW_mobileRespawnTimer = 60; //time in seconds to use mobile respawn again
	AW_startingResources[] = {250,250,250}; //starting resources in format {supplies,fuel,ammo}
	AW_startingCivRep = 25; //starting percentage civ rep

	AW_normalFuelConsumption = 90; //time in minutes for fuel to normally run out

	AW_sectorActivationRange = 500; //max 2D distance for sector to be activated
	AW_sectorActivationHeight = 150; //max height for a sector to be activated (to avoid overflights spawning unnecessary sectors)
	AW_sectorCaptureRadius[] = {150,200,150,100,150}; //Distance units are taken into account when working out capture ratio in format {Town,City,Military,Radio,Factory}
	AW_sectorSpawnRadius[] = {250,300,250,250,250}; //Distance units can spawn away from a sector centre in format {Town,City,Military,Radio,Factory}
	
	AW_sectorCaptureRatio = 0.66; //Ratio of Blufor:Opfor needed to take sector
	AW_maxCivsPerSector = 7; //Max civs in sector (not including wounded)
	AW_woundedCivChance = 75; //Chance of wounded civs to spawn after taking a city/town
	AW_woundedCivMaxCount = 5; //Max wounded civs per objective
	AW_woundedCivRepGain = 3; //Percentage civ rep gain per civ treated
	AW_killedCivRepLoss = -5; //Percentage civ rep loss per Blufor killing civ
	AW_damagedBuildingRepLoss = -4; //Percentage loss per building damaged (doubled if building is destroyed (as a ruin))
	AW_seizedCivVehicleRepLoss = -3; //Percentage loss per civ vehicle seized or destroyed
	AW_sectorSurrenderChance = 60; //Chance of each individual enemy surrendering on sector capture
	AW_opforThreatIncreaseRate[] = {5,7,10,-3,3}; //Percent change in threat level in format {Town,City,Military,Radio,Factory}
	AW_maxSectorCrates = 3; //Max resource crates spawned in a sector
	AW_maxActiveSectors = 7; //Max number of sectors that can be simultaenously active
	AW_reinforcementTime = 25; //Time in minutes for reinforcements to arrive (this value is halved if a radio tower is up nearby)

	AW_opforJetCooldown = 45; //Time in minutes between jet respawns (only if threat level is high enough)

	AW_secondaryMapFactor = 3; //The distance an opfor secondary objective can spawn away from the frontline, used with worldSize / factor, smaller maps will need a smaller factor

	AW_sideMissionTimer = 45; //Time in minutes between side objective tries to spawn (if other conditions are also met)
	AW_garrisonUpdateTimer = 60; //Time in minutes between sector garrison strength updates

	AW_maxAmbientCivs = 7; //max ambient civs roaming around
	AW_maxAmbientCivAir = 1; //max ambient civs flying around (only if map supports airports)
	AW_maxAmbientOpforPatrols = 6; //max ambient enemy vehicles roaming around, actual number is reduced as enemy lose strength

	AW_maxSectorIntel = 5; //Max intel pieces spawned in a sector
	AW_maxIntelFromPOW = 7; //Max intel gained from interrogating PoW before applying the threat level modifier
	AW_maxIntelFromItem = 4; //Max intel from finding an intel item on ground
	AW_intelObjects[] = {"Land_File_research_F","Land_Document_01_F","Land_Tablet_02_black_F","Land_MobilePhone_smart_F"}; //Classnames of items that are spawned at sectors
	AW_radioTowerDestructionTimer = 15; //Time for when a radio tower, after being captured, can be destroyed to lower threat level
	AW_radioTowerThreatReduction = -10; //Percentage reduction in threat when a recently captured radio tower is destroyed

	AW_transportVehicles[] = { //Vehicles which we want crates to be able to be loaded in using attachTo, try and use base classes if possible, format {"classname", offset, {{array},{of},{positions}}}
		{"Heli_Transport_03_base_F", -8, {{0,2.2,-1}, {0.5,-1}, {0,-1.2,-1}}},
		{"Truck_01_cargo_base_F", -6.5, {{0,-0.4,0.4}, {0,-2.1,0.4}, {0,-3.8,0.4}}},
		{"Truck_01_flatbed_base_F", -6.5, {{0,-0.4,0.4}, {0,-2.1,0.4}, {0,-3.8,0.4}}},
		{"VTOL_01_base_F", -7.5, {{0,4.7,-4.88},{0,3,-4.88},{0,1.3,-4.88},{0,-0.4,-4.88},{0,-2.1,-4.88}}},
		{"Van_01_transport_base_F", -6.5, {{0,-1.1,0.25}, {0,-2.6,0.25}}},
		{"Van_02_vehicle_base_F", -5, {{0.5,0,0}, {0,-1.75,0}}},
		{"Van_02_service_base_F", -5, {{0.5,0,0}, {0,-1.75,0}}},
		{"Van_02_transport_base_F", -5, {{0,-1.75,0}}},
		{"I_G_Offroad_01_F", -6.5, {{0,-1.7,0.4}}},
		{"Offroad_01_civil_base_F", -6.5, {{0,-1.7,0.4}}},
		{"Truck_02_transport_base_F", -6.5, {{0.3,0.05,0.05}, {0,-1.3,0.05}, {0,-2.9,0.05}}},
		{"O_Truck_02_covered_F", -6.5, {{0,0.3,0}, {0,-1.3,0}, {0,-2.9,0}}},
		{"O_T_Truck_02_F", -6.5, {{0,0.3,0.05}, {0,-1.3,0.05}, {0,-2.9,0.05}}},
		{"I_Truck_02_covered_F", -6.5, {{0,0.3,0.05}, {0,-1.3,0.05}, {0,-2.9,0.05}}},
		{"I_E_Truck_02_F", -6.5, {{0.,0.3,0.05}, {0,-1.3,0.05}, {0,-2.9,0.05}}},
		{"C_Truck_02_covered_F", -6.5, {{0.,0.3,0.05}, {0,-1.3,0.05}, {0,-2.9,0.05}}},
		{"O_Truck_03_covered_F", -6.5, {{0,-0.8,0.4}, {0,-2.4,0.4}, {0,-4.0.4}}},
		{"O_Truck_03_transport_F", -6.5, {{0,-0.8,0.4}, {0,-2.4,0.4}, {0,-4.0.4}}},
		{"I_Heli_Transport_02_F", -6.5, {{0,4.2,-1.45}, {0,2.5,-1.45}, {0.8,-1.45}, {0,-0.9,-1.45}}},

		{"LOP_HEMTT_trans_base", -6.5, {{0,-0.4,0.4}, {0,-2.1,0.4}, {0,-3.8,0.4}}},
		{"LOP_HEMTT_cov_base", -6.5, {{0,-0.4,0.4}, {0,-2.1,0.4}, {0,-3.8,0.4}}},

		{"rhs_gaz66_flat_vmf", -4, {{0.3,0,0}, {0,-1.3,0}}},
		{"rhs_gaz66o_vmf", -4, {{0.3,0,0}, {0,-1.3,0}}},
		{"rhsusf_M977A4_BKIT_usarmy_wd", -6.5, {{0,0.1,0.6}, {0,-1.3,0.6}, {0,-3,0.6}}},
		{"rhsusf_M1084A1P2_B_M2_fmtv_usarmy", -5.5, {{0.5,-0.25,0}, {0,-1.5,-0.25}}},
		{"rhsusf_M1083A1P2_fmtv_usarmy", -5, {{0,-0.2,0.45}, {0,-1.9,0.45}}},
		{"rhsusf_M1078A1P2_fmtv_usarmy", -5, {{0,-0.2,0.45}, {0,-1.9,0.45}}},
		{"rhsusf_M1239_socom_d", -5, {{-0.125,-1.73,-0.66}, {0,-3.28,-0.66}}},
		{"rhsusf_M1239_M2_socom_d", -5, {{-0.125,-1.73,-0.66}, {0,-3.28,-0.66}}},
		{"rhsusf_M1239_MK19_socom_d", -5, {{-0.125,-1.73,-0.66}, {0,-3.28,-0.66}}},
		{"RHS_Mi8_base",-4, {{0,3.3,-1.5}, {0,1.8,-1.5}}},
		{"RHS_Ural_Civ_Base", -6.5, {{0,-0.2,0.55}, {0,-1.4,0.55}, {0,-2.55,0.55}}},
		{"RHS_Ural_MSV_Base", -6.5, {{0,-0.2,0.55}, {0,-1.4,0.55}, {0,-2.55,0.55}}},
		{"rhsusf_m998_w_2dr", -4.5, {{0,-0.8,0}}},
		{"rhsusf_m998_d_2dr", -4.5, {{0,-0.8,0}}},
		{"rhsusf_CH53E_USMC", -9, {{0,7,-3.2}, {0,5.5,-3.2}, {0,4,-3.2}, {0,2.5,-3.2}, {0,1,-3.2}}},
		{"RHS_CH_47F_base", -9, {{0,3.2,-1.9}, {0,1.7,-1.9}, {0.2,-1.9}, {0,-1.3,-1.9}, {0,-2.8,-1.9}}},
		{"RHS_C130J_Base", -9.5, {{-0.8,8,-4}, {0.8,8,-4}, {-0.8,8,-2.8}, {0.8,8,-2.8}, {-0.8,6.5,-4}, {0.8,6.5,-4}, {-0.8,6.5,-2.8}, {0.8,6.5,-2.8}, {-0.8,5,-4}, {0.8,5,-4}, {-0.8,5,-2.8}, {0.8,5,-2.8}, {-0.8,3.5,-4}, {0.8,3.5,-4}, {-0.8,3.5,-2.8}, {0.8,3.5,-2.8}, {-0.8,2,-4}, {0.8,2,-4}, {-0.8,2,-2.8}, {0.8,2,-2.8}, {-0.8,0.5,-4}, {0.8,0.5,-4}, {-0.8,0.5,-2.8}, {0.8,0.5,-2.8}}},
		
		{"UK3CB_BAF_Husky_Logistics_HMG_Sand", -5, {{0,-1.9,-0.2}}},
		{"UK3CB_BAF_Husky_Logistics_GMG_Sand", -5, {{0,-1.9,-0.2}}},
		{"UK3CB_BAF_Husky_Logistics_GPMG_Sand", -5, {{0,-1.9,-0.2}}},
		{"UK3CB_BAF_MAN_HX58_Cargo_Base", -3, {{-0.75,4.5,-0.4}, {0.75,4.5,-0.4}, {-0.75,2.9,-0.4}, {0.75,2.9,-0.4}, {-0.75,1.3,-0.4}, {0.75,1.3,-0.4}, {-0.75,-0.3,-0.4}, {0.75,-0.3,-0.4}}},
		{"UK3CB_BAF_MAN_HX60_Cargo_Base", -3, {{-0.75,3,-0.4}, {0.75,3,-0.4}, {-0.75,1.4,-0.4}, {0.75,1.4,-0.4},{-0.75,-0.2,-0.4},{0.75,-0.2,-0.4}}},
		{"UK3CB_BAF_Merlin_Base", -8, {{0.2,5,-1.5}, {0.2,3.6,-1.5}, {0.2,2.2,-1.5}, {0.2,0.8,-1.5}}}
	};

	AW_ignoreWhenBuilding[] = { //classes of objects not to look at collisions with
		"Land_HelipadSquare_F",
		"Land_TentHangar_V1_F",
		"Land_runway_edgelight",
		"Land_runway_edgelight_blue_F",
		"Land_Flush_Light_green_F",
		"Land_Flush_Light_red_F",
		"Land_Flush_Light_yellow_F",
		"Flag_NATO_F",
		"Flag_White_F",
		"Flag_RedCrystal_F",
		"CamoNet_BLUFOR_F",
		"CamoNet_BLUFOR_open_F",
		"CamoNet_BLUFOR_big_F",
		"Land_PortableLight_single_F",
		"Land_PortableLight_double_F",
		"PortableHelipadLight_01_blue_F",
		"PortableHelipadLight_01_green_F",
		"PortableHelipadLight_01_red_F",
		"Land_BagFence_Round_F",
		"Land_BagFence_Short_F",
		"Land_BagFence_Long_F",
		"Land_BagFence_Corner_F",
		"Land_BagFence_End_F",
		"Land_Sign_WarningMilitaryArea_F",
		"Land_Sign_WarningMilAreaSmall_F",
		"Land_Sign_WarningMilitaryVehicles_F",
		"Land_Razorwire_F",
		"Land_ConcreteHedgehog_01_F",
		"Land_CzechHedgehog_01_F",
		"Land_DragonsTeeth_01_4x2_new_F",
		"Land_DragonsTeeth_01_1x1_new_F",
		"Land_CncBarrierMedium_F",
		"Land_CncBarrierMedium4_F",
		"Land_Concrete_SmallWall_4m_F",
		"Land_Concrete_SmallWall_8m_F",
		"Land_CncShelter_F",
		"Land_CncWall1_F",
		"Land_CncWall4_F",
		"BlockConcrete_F",
		"Land_RampConcrete_F",
		"Land_RampConcreteHigh_F",
		"Land_HBarrier_1_F",
		"Land_HBarrier_3_F",
		"Land_HBarrier_5_F",
		"Land_HBarrier_Big_F",
		"Land_HBarrierWall4_F",
		"Land_HBarrierWall6_F",
		"Land_HBarrierWall_corner_F",
		"Land_HBarrierWall_corridor_F",
		"Land_SandbagBarricade_01_half_F",
		"Land_SandbagBarricade_01_F",
		"Land_SandbagBarricade_01_hole_F",
		"Land_BagBunker_Small_F",
		"Land_BagBunker_Large_F",
		"Land_BagBunker_Tower_F",
		"Land_MedicalTent_01_NATO_generic_open_F",
		"Land_MedicalTent_01_NATO_generic_outer_F",
		"CargoPlaftorm_01_green_F",
		"Land_HBarrierTower_F",
		"Sign_Sphere100cm_F",
		"Land_PierLadder_F",
		"Land_BarGate_01_open_F",
		"Land_Mil_WiredFence_Gate_F",
		"Land_ClutterCutter_large_F",
		"Land_HighVoltageColumnWire_F",
		"Land_PowerWireBig_left_F",
		"B_HMG_01_F",
		"B_HMG_01_high_F",
		"B_HMG_01_A_F",
		"B_GMG_01_F",
		"B_GMG_01_high_F",
		"B_GMG_01_A_F",
		"B_static_AT_F",
		"B_static_AA_F",
		"B_Mortar_01_F",
		"ACE_friesAnchorBar",
		"ACE_friesGantryReverse",
		"ACE_friesGantry"
	};

	AW_objectInits[] = { //special vehicle inits in format {"classname","code"} or {{"classnames","classnames"},"code"} - for when CBA Class EVH's arent appropriate, namely children of 'Static'
		{"Land_Pallet_MilBoxes_F","[_this] remoteExecCall [""AW_fnc_initSupplyCrate"",-2,_this]"},
		{"Land_Cargo_HQ_V1_F","_this addEventHandler [""HandleDamage"",{0}]"},
		{"Land_PortableWeatherStation_01_olive_F","if !(isServer) then {[""initPost"",_this] remoteExecCall [""AW_fnc_listeningPost"",2]}"}
	};

	AW_arsenalCommon[] = { //contains items used across factions (role equipment)
		"ACE_adenosine", "ACE_epinephrine", "ACE_morphine",
		"ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot",
		"ACE_bloodIV", "ACE_bloodIV_250", "ACE_bloodIV_500",
		"ACE_plasmaIV", "ACE_plasmaIV_250", "ACE_plasmaIV_500",
		"ACE_salineIV", "ACE_salineIV_250", "ACE_salineIV_500",
		"ACE_tourniquet", "ACE_splint",
		"ACE_surgicalKit",

		"ACE_Chemlight_HiBlue", "ACE_Chemlight_HiGreen", "ACE_Chemlight_HiRed", "ACE_Chemlight_HiWhite", "ACE_Chemlight_HiYellow", "ACE_Chemlight_UltraHiOrange",
		"Chemlight_blue", "Chemlight_green", "Chemlight_red", "Chemlight_yellow", "acc_flashlight_pistol", "ACE_Flashlight_XL50", "ACE_Flashlight_MX991", "ACE_Flashlight_KSF1",
		"ACE_Chemlight_IR", "ACE_Chemlight_Orange", "ACE_Chemlight_White", "ACE_Chemlight_Shield", "ACE_Chemlight_Shield_Blue", "ACE_Chemlight_Shield_Green", "ACE_Chemlight_Shield_Orange", "ACE_Chemlight_Shield_Red", "ACE_Chemlight_Shield_White", "ACE_Chemlight_Shield_Yellow",
		"ACE_HandFlare_Green", "ACE_HandFlare_Red", "ACE_HandFlare_White", "ACE_HandFlare_Yellow", "ACE_IR_Strobe_Item",
		"SmokeShell", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "SmokeShellRed", "SmokeShellYellow",
		"HandGrenade", "MiniGrenade",

		"ACE_RangeTable_82mm", "ACE_artilleryTable", "ACE_RangeCard", "ACE_Tripod", "ACE_ATragMX", "ACE_SpareBarrel", "ACE_SpottingScope", "ACE_Kestrel4500",

		"ItemMap","ItemCompass", "ItemWatch", "ItemGPS", "ACE_Altimeter", "ACE_MapTools", "ACE_CableTie", "ACE_EarPlugs", "ACE_microDAGR", "ACE_DAGR", "acc_flashlight_pistol",

		"ToolKit", "ACE_DefusalKit","ACE_wirecutter", "ACE_EntrenchingTool", "ACE_Clacker", "ACE_M26_Clacker", "MineDetector", "ACE_SpraypaintRed", "ACE_SpraypaintGreen", "ACE_SpraypaintBlue", "ACE_SpraypaintBlack",
		"ACE_rope12", "ACE_rope15", "ACE_rope18", "ACE_rope27", "ACE_rope36",

		"B_UavTerminal", "ACE_UAVBattery", "ACE_VectorDay", "ACE_Vector", "Laserdesignator", "Laserbatteries",

		"U_B_Wetsuit", "U_B_survival_uniform","V_RebreatherB", "G_B_Diving", "G_Diving",
		"U_B_PilotCoveralls",
		
		"V_Rangemaster_belt",

		"B_Carryall_cbr", "B_Kitbag_cbr", "B_AssaultPack_cbr", "B_LegStrapBag_coyote_F", "B_Parachute", "ACE_NonSteerableParachute",

		"G_Balaclava_blk", "G_Balaclava_oli", "G_Balaclava_lowprofile",

		"G_Bandanna_blk", "G_Bandanna_khk", "G_Bandanna_oli", "G_Bandanna_aviator", "G_Bandanna_beast",

		"G_Combat", "G_Combat_Goggles_tna_F",  "G_Lowprofile",

		"G_Shades_Black", "G_Shades_Blue", "G_Shades_Green", "G_Shades_Red", "G_Lady_Blue",  "G_Aviator",
		"G_Sport_Red", "G_Sport_Blackyellow", "G_Sport_BlackWhite", "G_Sport_Checkered", "G_Sport_Blackred", "G_Sport_Greenblack",
		"G_Spectacles", "G_Spectacles_Tinted", "G_Squares_Tinted", "G_Squares",

		"G_Tactical_Black", "G_Tactical_Clear"
	};

	AW_sideMissions[] = { //format {"title","conditions","codeToRun"}
		{"Convoy Ambush","AW_opforThreat > 66 && {(AW_logisticsSetup select 2) isNotEqualTo []}","[count playableUnits] call AW_fnc_logisticsAmbush"},
		{"FOB Assault","AW_opforThreat > 90 && {(count playableUnits) > 10 && {(AW_radioTowerSectors arrayIntersect AW_bluforSectors) isNotEqualTo (count AW_radioTowerSectors)}}","[count playableUnits] call AW_fnc_fobAssault"},
		{"Repair Request","AW_civRep < 50 && {AW_sectorDetails select {_x select 2 > 0 && {_x select 0 in AW_bluforSectors}} isNotEqualTo []}","[] call AW_fnc_repairSector"},
		{"Sector Attack","AW_opforThreat > 33 && {AW_bluforSectors isNotEqualTo [] && {(count playableUnits) > 3}}","[] call AW_fnc_sectorCounterAttack"}
	};

	AW_secondaryMissions[] = { //format {"title","conditions","codeToRun"} descriptions handled in fn_initSecondaryMenu
		{"FOB Hunt","AW_intel >= 25","[] remoteExecCall [""AW_fnc_fobHunt"",2]"},
		{"Protect Heritage Site","AW_intel >= 10","[] remoteExecCall [""AW_fnc_protectSite"",2]"},
		{"Secure Downed UAV","AW_intel >= 10","[] remoteExecCall [""AW_fnc_captureUAV"",2]"},
		{"Clear UXOs","private _array = (AW_citySectors arrayIntersect AW_bluforSectors); _array append (AW_townSectors arrayIntersect AW_bluforSectors); _array isNotEqualTo []","[] remoteExecCall [""AW_fnc_clearUXOs"",2]"},
		{"Destroy IED Factory","AW_intel >= 15","[] remoteExecCall [""AW_fnc_IEDFactory"",2]"},
		{"Humanitarian Relief","private _array = (AW_citySectors arrayIntersect AW_bluforSectors); _array append (AW_townSectors arrayIntersect AW_bluforSectors); _array isNotEqualTo [] && {AW_resourcesAvailable select 0 >= 100}","[""init""] remoteExecCall [""AW_fnc_humanitarianRelief"",2]"},
		{"Raid Enemy Depot","AW_intel >= 15","[] remoteExecCall [""AW_fnc_raidSupplyDepot"",2]"},
		{"Setup Listening Post","AW_bluforSectors isNotEqualTo []","[""init""] remoteExecCall [""AW_fnc_listeningPost"",2]"},
		{"Provide Medical Aid","private _array = (AW_citySectors arrayIntersect AW_bluforSectors); _array append (AW_townSectors arrayIntersect AW_bluforSectors); _array isNotEqualTo []","[] remoteExecCall [""AW_fnc_provideAid"",2]"}
	};
};

#include "Config_Blufor.hpp"
#include "Config_Civilian.hpp"
#include "Config_Guerilla.hpp"
#include "Config_Opfor.hpp"