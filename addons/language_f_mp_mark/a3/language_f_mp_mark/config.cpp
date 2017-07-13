////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Jul 04 19:34:33 2017 : Created on Tue Jul 04 19:34:33 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=13
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class language_f_mp_mark : config.bin{
class CfgPatches
{
	class A3_Language_F_MP_Mark
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Marksmen (Multiplayer) - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Mark"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class Multiplayer
	{
		class DynamicGroups
		{
			displayName = "$STR_A3_DynamicGroups1";
			description = "$STR_A3_DynamicGroups2";
			tip = "";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Rifle_ca.paa";
			arguments[] = {{{"teamSwitch"}}};
			logicalOrder = 6;
		};
	};
	class Common
	{
		class Containers
		{
			class EndGameVirtualArsenal_sub
			{
				displayName = "$STR_A3_rscdisplaymain_buttonvirtualarsenal";
				description = "$STR_A3_EndGameVA2";
				tip = "";
				image = "\A3\Ui_f\data\GUI\Cfg\Hints\Switch_ca.paa";
				arguments[] = {};
			};
		};
	};
};
//};
