/*
	Faction: Squad Leader
	Author: Dom
*/
class pilot {
	name = $STR_B_PILOT_F0;
	rank = "Lieutenant";
	description = $STR_DT_Pilot_Description;
	traits[] = {

	};
	customVariables[] = {
		{"ace_isEngineer",1,true}
	};
	icon = "a3\ui_f\data\map\vehicleicons\iconManOfficer_ca.paa";

	defaultLoadout[] = {
		{"SMG_01_Holo_F","","","optic_Holosight_smg",{"30Rnd_45ACP_Mag_SMG_01",30},{},""},
		{},
		{},
		{"U_B_HeliPilotCoveralls",{{"FirstAidKit",1},{"30Rnd_45ACP_Mag_SMG_01",2,30},{"Chemlight_green",1,1}}},
		{"V_PlateCarrierL_CTRG",{{"30Rnd_45ACP_Mag_SMG_01",1,30},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1}}},
		{},
		"H_PilotHelmetHeli_B","",{},
		{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}
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