import ScrollBar;
import RscProgress;
import RscStructuredText;
import RscPicture;
import RscShortcutButton;
import RscButtonMenu;
import RscText;
import RscListBox;
import RscCombo;
import RscMapControl;
import RscEdit;
import RscToolbox;

class AW_RscButtonGeneral: RscButtonMenu
{
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	style = 0x02;
	class Attributes
	{
		font="PuristaLight";
		color="#E5E5E5";
		align="center";
		shadow="false";
	};
};
class AW_RscTree
{
	idc=-1;
	type=12;
	style=0;
	blinkingPeriod=0;
	w=0.1;
	h=0.2;
	colorBackground[]={0,0,0,0.2};
	sizeEx="(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	picture="";
	colorPicture[]={1,1,1,1};
	colorPictureSelected[]={1,1,1,1};
	colorPictureDisabled[]={1,1,1,1};
	colorPictureRight[]={1,1,1,1};
	colorPictureRightSelected[]={1,1,1,1};
	colorPictureRightDisabled[]={1,1,1,1};
	colorPictureLeft[]={1,1,1,1};
	colorPictureLeftSelected[]={1,1,1,1};
	colorPictureLeftDisabled[]={1,1,1,1};
	font="PuristaLight";
	rowHeight=0.039999999;
	color[]={1,1,1,1};
	colorSelect[]={0.69999999,0.69999999,0.69999999,1};
	colorSelectBackground[]={0,0,0,0.5};
	colorBorder[]={0,0,0,0};
	borderSize=0;
	colorMarked[]={"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",0.5};
	colorMarkedSelected[]={"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",1};
	colorText[]={1,1,1,1};
	colorSelectText[]={1,1,1,1};
	colorMarkedText[]={1,1,1,1};
	colorSearch[]={0.13,0.54000002,0.20999999,0.80000001};
	tooltip="";
	tooltipColorShade[]={0,0,0,1};
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	multiselectEnabled=1;
	expandOnDoubleclick=1;
	hiddenTexture="\A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa";
	expandedTexture="\A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa";
	maxHistoryDelay=1;
	colorDisabled[]={0,0,0,0};
	colorArrow[]={0,0,0,0};
	class ScrollBar: Scrollbar
	{
	};
};
class AW_RscTreeSearch: AW_RscTree
{
	idcSearch=645;
};