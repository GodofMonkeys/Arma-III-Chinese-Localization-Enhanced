////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_tacops\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:41 2019 : 'file' last modified on Sat Nov 17 01:50:02 2018
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
	class A3_Language_F_Tacops
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Tac-Ops - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Tacops"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class PremiumContent
	{
		class PremiumTacops
		{
			displayName = "$STR_A3_TacOps_CfgMods_nameDLC";
			description = "$STR_A3_TacOps_CfgHints_PremiumTacOps_description";
			tip = "$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[] = {{"STR_A3_TacOps_CfgMods_overview"},"""<img size='9' shadow='0' image='A3\Data_F_tacops\Images\tacops_fm_overview_co.paa' />""","""http://steamcommunity.com/stats/107410/achievements"""};
			image = "\a3\Data_F_tacops\logos\arma3_tacops_logo_hint_ca.paa";
			logicalOrder = 8;
			class Hint
			{
				displayName = "$STR_A3_TacOps_CfgMods_nameDLC";
				description = "%11%1%12";
				tip = "$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
				arguments[] = {{"STR_A3_Tacops_CfgMods_overview"},"""<img size='7' shadow='0' image='A3\Data_F_tacops\Images\tacops_fm_overview_co.paa' />"""};
				image = "\a3\Data_F_tacops\logos\arma3_tacops_logo_hint_ca.paa";
			};
		};
	};
	class DlcMessage
	{
		class Dlc571710;
		class Dlc744950: Dlc571710
		{
			displayName = "$STR_A3_TacOps_CfgMods_nameDLC";
			image = "\a3\Data_F_tacops\logos\arma3_tacops_logo_hint_ca.paa";
		};
		class Dlc744950FM: Dlc744950{};
	};
};
