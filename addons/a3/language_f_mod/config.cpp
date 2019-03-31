////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_mod\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:41 2019 : 'file' last modified on Fri Jan 18 23:06:53 2019
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
	class A3_Language_F_Mod
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Official Mod - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Mod"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class WeaponList
	{
		class SMG_03
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_SMG_03_TR_BASE0"},{"STR_A3_CfgWeapons_SMG_03_TR_BASE_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			weapon = "SMG_03_TR_black";
			logicalOrder = 3;
		};
	};
};
