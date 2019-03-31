////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_argo\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Fri Jan 18 22:49:44 2019
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
	class A3_Language_F_Argo
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Malden - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Argo"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class MaldenDLC
	{
		displayName = "$STR_A3_CFGHINTS_MALDENDLC0";
		logicalOrder = 19;
		category = "Product";
		class Malden
		{
			displayName = "$STR_A3_CFGHINTS_MALDENDLC_MALDEN0";
			description = "$STR_A3_CFGHINTS_MALDENDLC_MALDEN1";
			arguments[] = {};
			image = "\A3\Data_F_Argo\Logos\arma3_argo_icon_hint_ca.paa";
			logicalOrder = 1;
		};
		class MaldenTerrain: Malden
		{
			displayName = "$STR_A3_CFGHINTS_MALDENDLC_MALDENTERRAIN0";
			description = "$STR_A3_CFGHINTS_MALDENDLC_MALDENTERRAIN1";
			logicalOrder = 2;
		};
		class CombatPatrol: Malden
		{
			displayName = "$STR_A3_CFGHINTS_MALDENDLC_COMBATPATROL0";
			description = "$STR_A3_CFGHINTS_MALDENDLC_COMBATPATROL1";
			logicalOrder = 3;
		};
	};
};
