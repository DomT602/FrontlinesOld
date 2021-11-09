class AW_fobNameMenu
{
	idd=9650;
	name="AW_fobNameMenu";
	movingEnable=0;
	onUnload = "uiNamespace setVariable [""AW_currentFOB"",nil];";
	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.088 * safezoneH;
		};
		class RscEdit_1400: RscEdit
		{
			idc = 1400;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.033 * safezoneH;
			maxChars = 30;
		};
		class RscButtonMenu_2400: AW_RscButtonGeneral
		{
			idc = -1;
			text = "Name FOB"; //--- ToDo: Localize;
			onButtonClick = "[uiNamespace getVariable [""AW_currentFOB"",""""]] call AW_fnc_renameFOB";
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};