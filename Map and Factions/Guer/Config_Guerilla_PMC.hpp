/*
	Faction: Private Military Contractors
	Author: Stanhope
	Requires: Project Opfor
*/
class Guerilla_Setup {
	AW_guerillaSquad[] = {
		"LOP_PMC_Infantry_SL",
		"LOP_PMC_Infantry_MG",
		"LOP_PMC_Infantry_Marksman",
		"LOP_PMC_Infantry_Rifleman_2",
		"LOP_PMC_Infantry_Corpsman",
		"LOP_PMC_Infantry_Rifleman",
		"LOP_PMC_Infantry_Rifleman_4",
		"LOP_PMC_Infantry_GL"
	};

	AW_guerillaVehicles[] = {
		"LOP_PMC_Offroad_M2"
	};

	AW_guerillaSupports[] = {
		{"Infantry Attack","infAttack",35,45},
		{"Mechanized Attack","mechAttack",70,60},
		{"Mortar Support","mortar",30,1},
		{"Crate Retrieval","crateRetrieve",25,20},
		{"Supply Drop","supplyDrop",40,20},
		{"Sector Defence","sectorDefence",75,90}
	};
};
