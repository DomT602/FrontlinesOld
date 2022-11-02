/*
	Faction: UN
	Author: Damo3D
	Requires: Project Opfor
*/
class Guerilla_Setup {
	AW_guerillaSquad[] = {
		"LOP_UN_Infantry_SL",
		"LOP_UN_Infantry_MG",
		"LOP_UN_Infantry_MG_Asst",
		"LOP_UN_Infantry_Rifleman",
		"LOP_UN_Infantry_Rifleman_2",
		"LOP_UN_Infantry_GL",
		"LOP_UN_Infantry_AT",
		"LOP_UN_Infantry_AA",
		"LOP_UN_Infantry_GL"
	};

	AW_guerillaVehicles[] = {
		"LOP_UN_Offroad",
		"LOP_UN_UAZ_DshKM",
		"LOP_UN_BTR70"
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
