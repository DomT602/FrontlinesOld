/*
	Faction: Pilot
	Author: Dom
*/
class pilot {
	name = $STR_B_PILOT_F0;
	rank = "Lieutenant";
	description = $STR_DT_Pilot_Description;
	traits[] = {

	};
	customVariables[] = {
		{"ace_isEngineer",1,true},
		{"ACE_GForceCoef",0.55,false}
	};
	icon = "a3\ui_f\data\map\vehicleicons\iconManOfficer_ca.paa";

	defaultLoadout[] = {
		{"SMG_02_F","","","optic_ACO_grn_smg",{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",30},{},""},
		{},
		{},
		{"U_O_PilotCoveralls",{{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_tourniquet",2},{"ACE_splint",2},{"ACE_morphine",1},{"ACE_CableTie",2},{"ACE_EntrenchingTool",1}}},
		{"V_TacVest_khk",{{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",5,30},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},
		{},
		"H_PilotHelmetHeli_O","",{},
		{"ItemMap","ItemGPS","TFAR_fadak","ItemCompass","ItemWatch","O_NVGoggles_hex_F"}
	};

	arsenalWeapons[] = {
		
	};
	arsenalMagazines[] = {
		
	};
	arsenalItems[] = {

	};
	arsenalBackpacks[] = {
		
	};
};