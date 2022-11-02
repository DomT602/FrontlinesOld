class Dynamic_Groups { //format: {"Group Name",{"Group","Roles","Matching","Role","Configs"},"Conditions for the group to be shown"}
	faction_name = "CDF";
	group_setup[] = {
		{"Platoon",{"officer","rto","uavop"},"true"},
		{"Alpha",{"squadlead","teamlead","medic","rifleman","rifleman","teamlead","engineer","rifleman","rifleman"},"true"},
		{"Bravo",{"squadlead","teamlead","medic","rifleman","rifleman","teamlead","engineer","rifleman","rifleman"},"count playableUnits > 5"},
		{"Charlie",{"squadlead","teamlead","medic","rifleman","rifleman","teamlead","engineer","rifleman","rifleman"},"count playableUnits > 15"},
		{"Talon",{"pilot","pilot"},"true"},
		{"Outlaw",{"pilot","pilot"},"count playableUnits > 10"},
		{"Logistics",{"pilot","logiengineer"},"true"},
		{"Hammer",{"commander","crewman","crewman"},"true"},
		{"Anvil",{"commander","crewman","crewman"},"count playableUnits > 14"},
		{"FSG",{"squadlead","rifleman","rifleman"},"true"}
	};
};

#include "Config_Roles.hpp"