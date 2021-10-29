class AW_deployMenu
{
	idd=9640;
	name="AW_deployMenu";
	movingEnable=0;
	onUnload = "AW_spawnCamera cameraEffect ['terminate','back']; camDestroy AW_spawnCamera;";
	class controls
	{
		class RscListbox_1500: RscListbox
		{
			idc = 1500;
			onLBSelChanged="_this call AW_fnc_deployMenuLBChange";
			x = "0.0153125 * safezoneW + safezoneX";
			y = "0.258 * safezoneH + safezoneY";
			w = "0.190781 * safezoneW";
			h = "0.198 * safezoneH";
		};
		class RscMap_1200: RscMapControl
		{
			idc = 1200;
			x = "0.0153125 * safezoneW + safezoneX";
			y = "0.456 * safezoneH + safezoneY";
			w = "0.190781 * safezoneW";
			h = "0.286 * safezoneH";
		};
		class RscButton_1600: AW_RscButtonGeneral
		{
			idc=-1;
			text="Deploy";
			onButtonClick="[] call AW_fnc_confirmDeploy";
			x="0.0153125 * safezoneW + safezoneX";
			y="0.742 * safezoneH + safezoneY";
			w="0.190781 * safezoneW";
			h="0.0262 * safezoneH";
		};
	};
};