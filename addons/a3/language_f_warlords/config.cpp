////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_warlords\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:41 2019 : 'file' last modified on Tue Jan 29 22:22:50 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
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

class CfgPatches
{
	class A3_Language_F_Warlords
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Warlords - Texts and Translations";
		url = "http://www.arma3.com";
		requiredAddons[] = {"A3_Language_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class WarlordsUpdate
	{
		category = "Product";
		displayName = "$STR_A3_WL_modUpdate";
		logicalOrder = 15;
		class Warlords
		{
			arguments[] = {{"<img size='9' shadow='0' color='#ffffff' image='A3\Data_F_Warlords\Data\wl_logo_ca.paa' />"}};
			displayName = "$STR_A3_WL_modName";
			description = "$STR_A3_WL_modDescription";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
	};
};
