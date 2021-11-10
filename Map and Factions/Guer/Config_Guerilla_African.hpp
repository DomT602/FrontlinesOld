/*
	Faction: African Guerillas
	Author: Stanhope
	Requires: Project Opfor
*/
class Guerilla_Setup {
	AW_guerillaSquad[] = {
		"LOP_AFR_Infantry_SL",
		"LOP_AFR_Infantry_AR_2",
		"LOP_AFR_Infantry_Marksman",
		"LOP_AFR_Infantry_AT",
		"LOP_AFR_Infantry_Corpsman",
		"LOP_AFR_Infantry_Rifleman_8",
		"LOP_AFR_Infantry_Rifleman_2",
		"LOP_AFR_Infantry_GL"
	};

	AW_guerillaVehicles[] = {
		"LOP_AFR_Landrover_M2",
		"LOP_AFR_Landrover_SPG9"
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
