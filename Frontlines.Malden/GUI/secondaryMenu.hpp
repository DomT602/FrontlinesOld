class AW_secondaryMenu
{
	idd=9645;
	name="AW_secondaryMenu";
	movingEnable=0;
	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.55 * safezoneH;
		};
		class RscListbox_1500: RscListbox
		{
			idc = 1500;
			onLBSelChanged = "_this call AW_fnc_secondaryMenuLBChange";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.113125 * safezoneW;
			h = 0.495 * safezoneH;
		};
		class RscStructuredText_1100: RscStructuredText
		{
			idc = 1100;
			x = 0.417187 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.283906 * safezoneW;
			h = 0.528 * safezoneH;
		};
		class RscButtonMenu_2400: AW_RscButtonGeneral
		{
			idc = 2400;
			text = "Start"; //--- ToDo: Localize;
			onButtonClick = "[] call AW_fnc_confirmSecondary";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};