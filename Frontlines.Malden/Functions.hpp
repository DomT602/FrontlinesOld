class AWClient {
	tag = "AW";
	
	class functions {
		file = "Client\Functions";
		class checkMap {};
		class checkNumber {};
		class checkVehicleAccess {};
		class clearCargo {};
		class conditionChecker {};
		class createMarkers {};
		class dateToString {};
		class destroyItem {};
		class endGame {};
		class fetchDetails {};
		class findFrontlineSector {};
		class findFrontlineSectors {};
		class findNearestFOB {};
		class findNearestSector {};
		class fuelConsumptionLoop {};
		class gatherIntel {};
		class getCaptureRatio {};
		class getInMan {};
		class getMissionProgress {};
		class getOutMan {};
		class getSectorsByType {};
		class getSectorTypeIndex {};
		class isNearFOB {};
		class isNearSector {};
		class notify {};
		class respawn {};
		class seatSwitchedMan {};
		class secureLaptop {};
		class secureUAV {};
		class setupUAV {};
	};

	class gui {
		file = "Client\GUI";
		class confirmDeploy {};
		class confirmSecondary {};
		class deployMenuLBChange {};
		class guerillaAction {};
		class guerillaMenuTvChange {};
		class guerillaOnMouseButtonDown {};
		class initDeployMenu {};
		class initGuerillaMenu {};
		class initRetrieveMenu {};
		class initSecondaryMenu {};
		class initTutorialMenu {};
		class initZeusMenu {};
		class manualZeusAction {};
		class secondaryMenuLBChange {};
		class tutorialMenuLBChange {};
		class updateUI {};
	};

	class init {
		file = "Client\Init";
		class createAceActions {};
		class initCBAsettings {};
		class initialiseObject {};
		class initLrRadio {};
		class initSupplyCrate {};
		class initSwRadios {};
	};

	class logistics {
		file = "Client\Logistics";
		class addResourceAction {};
		class buildLoop {};
		class buildMenuTvChange {};
		class createNewFOB {};
		class createSupplyCrate {};
		class factoryMenuLBChange {};
		class initBuildMenu {};
		class initFactoryMenu {};
		class initLogisticsMenu {};
		class loadCrate {};
		class logisticsCalculate {};
		class logisticsBuyNewTruck {};
		class logisticsComboLBChange {};
		class logisticsMenuLBChange {};
		class logisticsStartRoute {};
		class moveObject {};
		class recycleObject {};
		class renameFOB {};
		class retrieveSupplies {};
		class setupBuild {};
		class startBuild {};
		class unloadCrate {};
		class updateFactoryProduction {};
	};
};

class DT_Core {
	tag = "DT";

	class Groups {
		file = "Client\Groups";
		class assignPlayer {};
		class handleDisconnect {};
		class initGroupMenu {};
		class onGroupMenuTvSelectChange {};
		class removeFromGroup {};
		class selectPosition {};
		class setupPlayer {};
		class updateGroups {};
	};
};