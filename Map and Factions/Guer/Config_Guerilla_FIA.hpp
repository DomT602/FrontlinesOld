/*
	Faction: Freedom and Independence Army
	Author: Dom
	Requires: None
*/
class Guerilla_Setup {
	AW_guerillaSquad[] = {
		"I_G_Soldier_F",
		"I_G_Soldier_lite_F",
		"I_G_Soldier_SL_F",
		"I_G_Soldier_TL_F",
		"I_G_Soldier_AR_F",
		"I_G_medic_F",
		"I_G_engineer_F",
		"I_G_Soldier_exp_F",
		"I_G_Soldier_GL_F",
		"I_G_Soldier_M_F",
		"I_G_Soldier_LAT_F",
		"I_G_Soldier_A_F",
		"I_G_Sharpshooter_F",
		"I_G_officer_F"
	};

	AW_guerillaVehicles[] = {
		"I_G_Offroad_01_armed_F",
		"I_G_Offroad_01_AT_F"
	};

	//format {"Title","actionCode",requiredCivRep,cooldown}
	AW_guerillaSupports[] = {
		{"Infantry Attack","infAttack",35,45},
		{"Mechanized Attack","mechAttack",70,60},
		{"Mortar Support","mortar",30,1},
		{"Crate Retrieval","crateRetrieve",25,20},
		{"Supply Drop","supplyDrop",40,20},
		{"Sector Defence","sectorDefence",75,90}
	};
};
