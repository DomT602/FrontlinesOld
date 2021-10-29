class AW_guerillaMenu
{
	idd=9649;
	name="AW_guerillaMenu";
	movingEnable=0;
	onUnload = "deleteMarkerLocal ""guerTarget""";
	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.402187 * safezoneW;
			h = 0.462 * safezoneH;
		};
		class RscTree_1500: AW_RscTree
		{
			idc = 1500;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.44 * safezoneH;
			onTreeSelChanged = "_this call AW_fnc_guerillaMenuTvChange";
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Cooldown: Ready"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1001: RscText_1000
		{
			idc = 1001;
			text = "Required Civ Rep: 0%"; //--- ToDo: Localize;
			y = 0.676 * safezoneH + safezoneY;
		};
		class RscMap_1200: RscMapControl
		{
			idc = 1200;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.341 * safezoneH;
			onMouseButtonDown = "_this call AW_fnc_guerillaOnMouseButtonDown";
		};
		class RscButtonMenu_2400: AW_RscButtonGeneral
		{
			idc = 2400;
			text = "Confirm"; //--- ToDo: Localize;
			onButtonClick = "[] call AW_fnc_guerillaAction";
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};