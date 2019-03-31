////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_sams\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:41 2019 : 'file' last modified on Fri Jan 18 21:49:40 2019
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
	class A3_Language_F_Sams
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "CFGPATCHES_A3_Language_F_Sams";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Sams"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class WeaponList
	{
		class Radar_System_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Radar_System_01_name"},{"STR_A3_Radar_System_01_hint_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Radar_System_01_F";
			dlc = 601670;
			logicalOrder = 45;
		};
		class Radar_System_02
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Radar_System_02_name"},{"STR_A3_Radar_System_02_hint_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_Radar_System_02_F";
			dlc = 601670;
			logicalOrder = 46;
		};
		class SAM_System_03
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_SAM_System_03_name"},{"STR_A3_SAM_System_03_hint_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_SAM_System_03_F";
			dlc = 601670;
			logicalOrder = 47;
		};
		class SAM_System_04
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_SAM_System_04_name"},{"STR_A3_SAM_System_04_hint_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_SAM_System_04_F";
			dlc = 601670;
			logicalOrder = 48;
		};
	};
};
