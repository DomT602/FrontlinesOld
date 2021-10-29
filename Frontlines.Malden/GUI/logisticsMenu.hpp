class AW_logisticsMenu
{
	idd=9643;
	name="AW_logisticsMenu";
	movingEnable=0;
	class controls
	{
		class RscPicture_1200: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(0,0,0,0.75)";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.506 * safezoneH;
		};
		class RscListbox_1500: RscListbox
		{
			idc = 1500;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.418 * safezoneH;
			onLBSelChanged = "_this call AW_fnc_logisticsMenuLBChange";
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Trucks available:"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Trucks in transit:"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2400: AW_RscButtonGeneral
		{
			idc = 2400;
			text = "Purchase new truck"; //--- ToDo: Localize;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[] call AW_fnc_logisticsBuyNewTruck";
			tooltip = "Purchase a new truck for 100 supplies"; //--- ToDo: Localize;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Pickup:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = "Drop-off:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1004: RscText
		{
			idc = 1004;
			text = "Trucks assigned:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1005: RscText
		{
			idc = 1005;
			text = "Time remaining:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1006: RscText
		{
			idc = 1006;
			text = "Supplies:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0,0.75,0,1};
		};
		class RscText_1007: RscText
		{
			idc = 1007;
			text = "Fuel:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.75,0.75,0,1};
		};
		class RscText_1008: RscText
		{
			idc = 1008;
			text = "Ammo:"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.75,0,0,1};
		};
		class RscText_1009: RscText
		{
			idc = 1009;
			style = 0x02;
			text = "New Convoy"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscCombo_2100: RscCombo
		{
			idc = 2100;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.022 * safezoneH;
			onLBSelChanged = "_this call AW_fnc_logisticsComboLBChange";
		};
		class RscEdit_1400: RscEdit
		{
			idc = 1400;
			text = "0"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Supplies";
		};
		class RscEdit_1401: RscEdit
		{
			idc = 1401;
			text = "0"; //--- ToDo: Localize;
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Fuel";
		};
		class RscEdit_1402: RscEdit
		{
			idc = 1402;
			text = "0"; //--- ToDo: Localize;
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Ammo";
		};
		class RscCombo_2101: RscCombo
		{
			idc = 2101;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.022 * safezoneH;
			onLBSelChanged = "_this call AW_fnc_logisticsComboLBChange";
		};
		class RscText_1010: RscText
		{
			idc = 1010;
			style = 0x02;
			text = "Pickup"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			style = 0x02;
			text = "Drop-off"; //--- ToDo: Localize;
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscButtonMenu_2401: AW_RscButtonGeneral
		{
			idc = 2401;
			text = "Send Convoy"; //--- ToDo: Localize;
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			onLoad = "(_this select 0) ctrlEnable false";
			onButtonClick = "[] call AW_fnc_logisticsStartRoute";
		};
		class RscMap_1200: RscMapControl
		{
			idc = 1200;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.209 * safezoneH;
		};
		class RscButtonMenu_2402: AW_RscButtonGeneral
		{
			idc = 2402;

			text = "Calculate"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[] call AW_fnc_logisticsCalculate";
		};
		class RscText_1015: RscText
		{
			idc = 1015;

			text = "Total travel time:"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1016: RscText
		{
			idc = 1016;

			text = "Fuel required:"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.75,0.75,0,1};
		};
		class RscText_1017: RscText
		{
			idc = 1017;

			text = "Trucks required:"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1018: RscText
		{
			idc = 1018;

			text = "Total fuel required:"; //--- ToDo: Localize;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.75,0.75,0,1};
		};
	};
};