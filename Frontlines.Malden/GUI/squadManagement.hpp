class AW_squadManagement {
	idd=9646;
	name="AW_squadManagement";
	movingEnable=0;
	class controls {
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.374 * safezoneH;
		};
		class RscListbox_1500: RscListbox
		{
			idc = 1500;
			onLBSelChanged = "_this call AW_fnc_squadManagementLBChange";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.352 * safezoneH;
		};
		class RscButtonMenu_2400: AW_RscButtonGeneral
		{
			idc = 2400;
			text = "Join"; //--- ToDo: Localize;
			onButtonClick = "['join'] call AW_fnc_manageSquad";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscListbox_1501: RscListbox
		{
			idc = 1501;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.286 * safezoneH;
		};
		class RscButtonMenu_2402: AW_RscButtonGeneral
		{
			idc = 2402;
			text = "Make Leader"; //--- ToDo: Localize;
			onButtonClick = "['changeLeader'] call AW_fnc_manageSquad";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};