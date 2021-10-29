class AW_retrieveMenu
{
	idd=9648;
	name="AW_retrieveMenu";
	movingEnable=0;
	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.121 * safezoneH;
		};
		class RscEdit_1400: RscEdit
		{
			idc = 1400;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Supplies"; //--- ToDo: Localize;
			maxChars = 2;
		};
		class RscEdit_1401: RscEdit
		{
			idc = 1401;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Fuel"; //--- ToDo: Localize;
			maxChars = 2;
		};
		class RscEdit_1402: RscEdit
		{
			idc = 1402;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Ammo"; //--- ToDo: Localize;
			maxChars = 2;
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Select your desired crate count"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.055 * safezoneH;
			style = 0x02;
		};
		class RscButton_1600: AW_RscButtonGeneral
		{
			idc = -1;
			text = "Retrieve"; //--- ToDo: Localize;
			onButtonClick="[] call AW_fnc_retrieveSupplies";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};