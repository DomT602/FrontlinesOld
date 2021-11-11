class AW_zeusMenu {
	idd=9647;
	name="AW_zeusMenu";
	movingEnable=0;
	class controls {
		class RscPicture_1200: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
		};
		class RscEdit_1400: RscEdit
		{
			idc = 1400;
			text = "0"; //--- ToDo: Localize;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2400: AW_RscButtonGeneral
		{
			onButtonClick="[""adjustIntel""] call AW_fnc_manualZeusAction";

			idc = 2400;
			text = "Intel"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2401: AW_RscButtonGeneral
		{
			onButtonClick="[""adjustCivRep""] call AW_fnc_manualZeusAction";

			idc = 2401;
			text = "Civ Rep"; //--- ToDo: Localize;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2402: AW_RscButtonGeneral
		{
			onButtonClick="[""adjustThreat""] call AW_fnc_manualZeusAction";

			idc = 2402;
			text = "Threat"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2403: AW_RscButtonGeneral
		{
			onButtonClick="[""adjustResources"",0] call AW_fnc_manualZeusAction";

			idc = 2403;
			text = "Supply"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2404: AW_RscButtonGeneral
		{
			onButtonClick="[""adjustResources"",1] call AW_fnc_manualZeusAction";

			idc = 2404;
			text = "Fuel"; //--- ToDo: Localize;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2405: AW_RscButtonGeneral
		{
			onButtonClick="[""adjustResources"",2] call AW_fnc_manualZeusAction";

			idc = 2405;
			text = "Ammo"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2406: AW_RscButtonGeneral
		{
			onButtonClick="[""forceSave""] call AW_fnc_manualZeusAction";

			idc = 2406;
			text = "Force Save"; //--- ToDo: Localize;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2407: AW_RscButtonGeneral
		{
			onButtonClick="[""wipeSave""] spawn AW_fnc_manualZeusAction";
			colorBackground[]={0.52899998,0,0,1};

			idc = 2407;
			text = "Wipe Save"; //--- ToDo: Localize;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2408: AW_RscButtonGeneral
		{
			onButtonClick="[""assignZeus""] call AW_fnc_manualZeusAction";

			idc = 2408;
			text = "Assign Zeus"; //--- ToDo: Localize;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2409: AW_RscButtonGeneral
		{
			onButtonClick="[""sendReinforcements""] call AW_fnc_manualZeusAction";

			idc = 2409;
			text = "Call Reinforcements"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2410: AW_RscButtonGeneral
		{
			onButtonClick="[""captureSector""] call AW_fnc_manualZeusAction";

			idc = 2410;
			text = "Capture Sector"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2411: AW_RscButtonGeneral
		{
			onButtonClick="[""loseSector""] call AW_fnc_manualZeusAction";

			idc = 2411;
			text = "Lose Sector"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2412: AW_RscButtonGeneral
		{
			onButtonClick="[""fobAssault""] call AW_fnc_manualZeusAction";

			idc = 2412;
			text = "FOB Assault"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2413: AW_RscButtonGeneral
		{
			onButtonClick="[""convoyAmbush""] call AW_fnc_manualZeusAction";

			idc = 2413;
			text = "Convoy Ambush"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2414: AW_RscButtonGeneral
		{
			onButtonClick="[""sectorCounterAttack""] call AW_fnc_manualZeusAction";

			idc = 2414;
			text = "Counter-Attack"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2415: AW_RscButtonGeneral
		{
			onButtonClick="[""allowDamage""] call AW_fnc_manualZeusAction";

			idc = 2415;
			text = "Toggle Damage"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2416: AW_RscButtonGeneral
		{
			onButtonClick="[""openArsenal""] call AW_fnc_manualZeusAction";

			idc = 2416;
			text = "Full Arsenal"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2417: AW_RscButtonGeneral
		{
			onButtonClick="[""heal""] call AW_fnc_manualZeusAction";

			idc = 2417;
			text = "Heal/Fix self"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2418: AW_RscButtonGeneral
		{
			onButtonClick="[""mapTP""] call AW_fnc_manualZeusAction";

			idc = 2418;
			text = "Toggle Map TP"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2419: AW_RscButtonGeneral
		{
			onButtonClick="[""hideObject""] call AW_fnc_manualZeusAction";

			idc = 2419;
			text = "Toggle Hide Object"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2420: AW_RscButtonGeneral
		{
			onButtonClick = "[""clearSmoke""] call AW_fnc_manualZeusAction";
			idc = 2420;
			text = "Clear Smoke"; //--- ToDo: Localize;
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2421: AW_RscButtonGeneral
		{
			onButtonClick = "[""clearMines""] call AW_fnc_manualZeusAction";
			idc = 2421;
			text = "Clear Mines"; //--- ToDo: Localize;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2422: AW_RscButtonGeneral
		{
			onButtonClick="[""activateSector""] call AW_fnc_manualZeusAction";

			idc = 2422;
			text = "Activate Sector"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscListbox_1500: RscListbox
		{
			idc = 1500;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.22 * safezoneH;
		};
	};
};