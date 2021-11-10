/*
	Faction: Takistan Insurgents
	Author: Reidy
	Requires: Project Opfor
*/
class Guerilla_Setup {
	AW_guerillaSquad[] = {
		"LOP_AM_Infantry_SL",
		"LOP_AM_Infantry_AR",
		"LOP_AM_Infantry_Marksman",
		"LOP_AM_Infantry_AT",
		"LOP_AM_Infantry_Corpsman",
		"LOP_AM_Infantry_Rifleman",
		"LOP_AM_Infantry_Rifleman_6",
		"LOP_AM_Infantry_GL"
	};

	AW_guerillaVehicles[] = {
		"LOP_AM_Nissan_PKM",
		"LOP_AM_Offroad_M2"
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
