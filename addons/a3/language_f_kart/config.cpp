////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_kart\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:41 2019 : 'file' last modified on Fri Jan 18 22:26:30 2019
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
	class A3_Language_F_Kart
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Karts - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Kart"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class Default{};
	class DlcMessage
	{
		displayName = "";
		dlc = -1;
		class Dlc288520
		{
			displayName = "$STR_A3_CFGHINTS_DLCMESSAGE_KARTS_HEADLINE";
			description = "$STR_A3_CfgHints_DlcMessage_Dlc2885201";
			tip = "$STR_A3_CfgHints_DlcMessage_Dlc28852002";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\a3\data_f_kart\logos\arma3_karts_icon_hint_ca.paa";
			dlc = -1;
		};
		class Dlc288520FM
		{
			displayName = "$STR_A3_CFGHINTS_DLCMESSAGE_KARTS_HEADLINE";
			description = "$STR_A3_CfgHints_DlcMessage_Dlc2885201";
			tip = "$STR_A3_CfgHints_DlcMessage_Dlc28852002";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\a3\data_f_kart\logos\arma3_karts_icon_hint_ca.paa";
			dlc = -1;
		};
	};
	class VehicleList
	{
		class GoKart
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_dlc_karts_fm_headline_kart"},{"STR_A3_CFGVEHICLES_KART_01_BASE_F_LIBRARY0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 288520;
			vehicle = "C_Kart_01_F";
			modelScale = 2;
			logicalOrder = 18;
		};
	};
	class WeaponList
	{
		class FlareGun
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_dlc_karts_fm_headline_flaregun"},{"STR_A3_CFGWEAPONS_HGUN_PISTOL_SIGNAL_F_LIBRARY0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			dlc = 288520;
			weapon = "hgun_Pistol_Signal_F";
			logicalOrder = 28;
		};
	};
	class TimeTrials
	{
		displayName = "$STR_A3_TimeTrials0";
		logicalOrder = 22;
		class TimeTrials
		{
			displayName = "$STR_A3_TimeTrials_TimeTrials0";
			description = "$STR_A3_TimeTrials_TimeTrials1";
			tip = "$STR_A3_TimeTrials_TimeTrials2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Time_trials_ca.paa";
			logicalOrder = 1;
		};
		class Timing
		{
			displayName = "$STR_A3_TimeTrials_Timing0";
			description = "$STR_A3_TimeTrials_Timing1";
			tip = "$STR_A3_TimeTrials_Timing2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Timing_ca.paa";
			logicalOrder = 3;
		};
		class CheckPoints
		{
			displayName = "$STR_A3_TimeTrials_CheckPoints0";
			description = "$STR_A3_TimeTrials_CheckPoints1";
			tip = "$STR_A3_TimeTrials_CheckPoints2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Checkpoints_ca.paa";
			logicalOrder = 2;
		};
		class Tips
		{
			displayName = "$STR_A3_TimeTrials_Tips0";
			description = "$STR_A3_TimeTrials_Tips1";
			tip = "$STR_A3_TimeTrials_Tips2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
			logicalOrder = 4;
		};
	};
	class PremiumContent
	{
		class PremiumKarts
		{
			displayName = "$STR_A3_CfgHints_PremiumContent_PremiumKarts0";
			description = "$STR_A3_CfgHints_PremiumContent_PremiumKarts1";
			tip = "$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[] = {};
			image = "\a3\data_f_kart\logos\arma3_karts_icon_hint_ca.paa";
			logicalOrder = 3;
		};
	};
};
