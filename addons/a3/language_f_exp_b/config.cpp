////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_exp_b\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Fri Jan 18 21:18:55 2019
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
	class A3_Language_F_Exp_B
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Eden Update - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Exp_B"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class EdenUpdate
	{
		displayName = "$STR_A3_CfgHints_EdenUpdate_EdenUpdate_displayName";
		logicalOrder = 20;
		category = "Product";
		class EdenUpdate
		{
			displayName = "$STR_A3_CfgHints_EdenUpdate_EdenUpdate_displayName";
			description = "$STR_A3_CfgHints_EdenUpdate_EdenUpdate_description";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 1;
		};
		class EdenEditor: EdenUpdate
		{
			displayName = "$STR_A3_CfgHints_EdenUpdate_EdenEditor_displayName";
			description = "$STR_A3_CfgHints_EdenUpdate_EdenEditor_description";
			logicalOrder = 2;
		};
		class CombatAudio: EdenUpdate
		{
			displayName = "$STR_A3_CfgHints_EdenUpdate_CombatAudio_displayName";
			description = "$STR_A3_CfgHints_EdenUpdate_CombatAudio_description";
			logicalOrder = 3;
		};
		class LauncherServerBrowser: EdenUpdate
		{
			displayName = "$STR_A3_CfgHints_EdenUpdate_LauncherServerBrowser_displayName";
			description = "$STR_A3_CfgHints_EdenUpdate_LauncherServerBrowser_description";
			logicalOrder = 4;
		};
		class Font: EdenUpdate
		{
			displayName = "$STR_A3_CfgHints_EdenUpdate_Font_displayName";
			description = "$STR_A3_CfgHints_EdenUpdate_Font_description";
			logicalOrder = 5;
		};
		class Analytics: EdenUpdate
		{
			displayName = "$STR_A3_CfgHints_EdenUpdate_Analytics_displayName";
			description = "$STR_A3_CfgHints_EdenUpdate_Analytics_description";
			logicalOrder = 6;
		};
		class SteamLeaderboards: EdenUpdate
		{
			displayName = "$STR_A3_CfgHints_EdenUpdate_SteamLeaderboards_displayName";
			description = "$STR_A3_CfgHints_EdenUpdate_SteamLeaderboards_description";
			logicalOrder = 7;
		};
	};
};
