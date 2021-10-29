class AW_buildMenu
{
	idd=9641;
	name="AW_buildMenu";
	movingEnable=0;
	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.2 * safezoneW + safezoneX;
			y = 0.2 * safezoneH + safezoneY;
			w = 0.6 * safezoneW;
			h = 0.6 * safezoneH;
		};
		class RscTree_1500: AW_RscTreeSearch
		{
			idc = 1500;
			onTreeSelChanged="_this call AW_fnc_buildMenuTvChange";
			x = 0.206094 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.324844 * safezoneW;
			h = 0.539 * safezoneH;
		};
		class RscButtonMenu_2400: AW_RscButtonGeneral
		{
			idc = 2400;
			text = "Build Item"; //--- ToDo: Localize;
			onButtonClick="[] call AW_fnc_startBuild";
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.764 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = -1;
			text = "Search:"; //--- ToDo: Localize;
			x = 0.206094 * safezoneW + safezoneX;
			y = 0.764 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscStructuredText_1100: RscStructuredText
		{
			idc = 1100;
			text = ""; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.257813 * safezoneW;
			h = 0.539 * safezoneH;

			class Attributes {
		        align = "center";
		    };
		};
		class RscEdit_645: RscEdit
		{
			idc = 645;
			x = 0.242187 * safezoneW + safezoneX;
			y = 0.764 * safezoneH + safezoneY;
			w = 0.28875 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};