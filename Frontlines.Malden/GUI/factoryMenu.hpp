class AW_factoryMenu
{
	idd=9642;
	name="AW_factoryMenu";
	movingEnable=0;
	class controls
	{
		class RscPicture_1201: RscPicture
		{
			idc = 1201;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.462 * safezoneH;
		};
		class RscListbox_1500: RscListbox
		{
			idc = 1500;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.418 * safezoneH;
			onLBSelChanged = "_this call AW_fnc_factoryMenuLBChange";
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Producing:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscMap_1200: RscMapControl
		{
			idc = 1200;
			x = 0.530938 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.418 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Supplies:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0.75,0,1};
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Fuel:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.75,0.75,0,1};
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Ammo:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.75,0,0,1};
		};
		class RscButtonMenu_2400: AW_RscButtonGeneral
		{
			idc = -1;
			text = "Confirm"; //--- ToDo: Localize;
			onButtonClick = "[] call AW_fnc_updateFactoryProduction";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip="Changing the production requires 100 supplies at the factory";
		};
		class Toolbox: RscToolbox
		{
			idc = 1600;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.176 * safezoneH;
			rows = 4;
			columns = 1;
			strings[] = {"None","Supplies","Fuel","Ammo"};
			values[] = {-1,0,1,2};
		};
	};
};