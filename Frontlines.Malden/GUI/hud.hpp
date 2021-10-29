class AW_HUD {
	idd=-1;
	duration=1e+012;
	onLoad="uiNamespace setVariable [""AW_HUD"",_this select 0]";
	class controls {
		class FOBBackground: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.933125 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.198 * safezoneH;
		};
		class SectorBackground: RscPicture
		{
			idc = 1201;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.9125 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Capture"; //--- ToDo: Localize;
			x = 0.917656 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			style = 0x02;
		};
		class BarBackground: RscPicture
		{
			idc = 1901;
			text = "#(argb,8,8,3)color(0.5,0,0,1)";
			x = 0.917656 * safezoneW + safezoneX;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class CaptureBar: RscProgress
		{
			idc = 1900;
			x = 0.917656 * safezoneW + safezoneX;
			y = 0.25 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.011 * safezoneH;
			colorBar[]={0,0.3,0.6,1};
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Fuel:"; //--- ToDo: Localize;
			x = 0.933125 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.75,0.75,0,1};
			style = 0x01;
		};
		class RscText_1002: RscText_1001
		{
			idc = 1002;
			text = "Supplies:"; //--- ToDo: Localize;
			y = 0.412 * safezoneH + safezoneY;
			colorText[] = {0,0.75,0,1};
		};
		class RscText_1003: RscText_1001
		{
			idc = 1003;
			text = "Ammo:"; //--- ToDo: Localize;
			y = 0.456 * safezoneH + safezoneY;
			colorText[] = {0.75,0,0,1};
		};
		class RscText_1004: RscText_1001
		{
			idc = 1004;
			text = "Rotary:"; //--- ToDo: Localize;
			y = 0.478 * safezoneH + safezoneY;
			colorText[] = {1,1,1,1};
		};
		class RscText_1005: RscText_1001
		{
			idc = 1005;
			text = "Fixed-Wing:"; //--- ToDo: Localize;
			y = 0.5 * safezoneH + safezoneY;
			colorText[] = {1,1,1,1};
		};
		class RscText_1006: RscText_1001
		{
			idc = 1006;
			text = "Threat:"; //--- ToDo: Localize;
			y = 0.522 * safezoneH + safezoneY;
			colorText[] = {1,1,1,1};
		};
		class RscText_1007: RscText_1001
		{
			idc = 1007;
			text = "Civ Rep:"; //--- ToDo: Localize;
			y = 0.544 * safezoneH + safezoneY;
			colorText[] = {1,1,1,1};
		};
		class RscText_1008: RscText_1001
		{
			idc = 1008;
			text = "Intel:"; //--- ToDo: Localize;
			y = 0.566 * safezoneH + safezoneY;
			colorText[] = {0,0.627,1,1};
		};
		class RscText_1009: RscText_1001
		{
			idc = 1009;
			text = "Players:"; //--- ToDo: Localize;
			y = 0.588 * safezoneH + safezoneY;
			colorText[] = {1,1,1,1};
		};
	};
};