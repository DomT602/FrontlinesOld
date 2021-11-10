/*
	Faction: Chernarussian Insurgents
	Author: Stanhope
	Requires: Project Opfor
*/
class Guerilla_Setup {
	AW_guerillaSquad[] = {
		"LOP_NAPA_Infantry_TL",
		"LOP_NAPA_Infantry_MG",
		"LOP_NAPA_Infantry_Marksman",
		"LOP_NAPA_Infantry_AT",
		"LOP_NAPA_Infantry_Corpsman",
		"LOP_NAPA_Infantry_Rifleman_3",
		"LOP_NAPA_Infantry_Rifleman",
		"LOP_NAPA_Infantry_GL_2"
	};

	AW_guerillaVehicles[] = {
		"LOP_NAPA_Landrover_M2"
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
