////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_exp\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Fri Jan 18 21:57:35 2019
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
	class A3_Language_F_Exp
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Apex - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Exp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class WeaponList
	{
		class launch_RPG7
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_launch_RPG7_F0"},{"STR_A3_CfgWeapons_launch_RPG7_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			dlc = 395180;
			weapon = "launch_RPG7_F";
			logicalOrder = 25;
		};
		class DMR_07
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_DMR_07_base_F0"},{"STR_A3_CfgWeapons_DMR_07_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			dlc = 395180;
			weapon = "srifle_DMR_07_hex_F";
			logicalOrder = 4;
		};
		class LMG_03
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_LMG_03_F0"},{"STR_A3_CfgWeapons_LMG_03_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			dlc = 395180;
			weapon = "LMG_03_F";
			logicalOrder = 6;
		};
		class Pistol_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_hgun_Pistol_01_F0"},{"STR_A3_CfgWeapons_hgun_Pistol_01_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			dlc = 395180;
			weapon = "hgun_Pistol_01_F";
			logicalOrder = 21;
		};
		class arifle_AK12
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_arifle_AK12_base_F0"},{"STR_A3_CfgWeapons_arifle_AK12_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			dlc = 395180;
			weapon = "arifle_AK12_F";
			logicalOrder = 3;
		};
		class arifle_AKM
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_arifle_AKM_F0"},{"STR_A3_CfgWeapons_arifle_AKM_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			dlc = 395180;
			weapon = "arifle_AKM_F";
			logicalOrder = 3;
		};
		class arifle_AKS
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_arifle_AKS_F0"},{"STR_A3_CfgWeapons_arifle_AKS_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			dlc = 395180;
			weapon = "arifle_AKS_F";
			logicalOrder = 3;
		};
		class arifle_ARX
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_arifle_ARX_base_F0"},{"STR_A3_CfgWeapons_arifle_ARX_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			dlc = 395180;
			weapon = "arifle_ARX_blk_F";
			logicalOrder = 32;
		};
		class arifle_CTAR
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_arifle_CTAR_base_F0"},{"STR_A3_CfgWeapons_arifle_CTAR_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			dlc = 395180;
			weapon = "arifle_CTAR_blk_F";
			logicalOrder = 4;
		};
		class arifle_SPAR_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_arifle_SPAR_01_base_F0"},{"STR_A3_CfgWeapons_arifle_SPAR_01_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			dlc = 395180;
			weapon = "arifle_SPAR_01_blk_F";
			logicalOrder = 26;
		};
		class arifle_SPAR_03
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_arifle_SPAR_03_base_F0"},{"STR_A3_CfgWeapons_arifle_SPAR_03_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			dlc = 395180;
			weapon = "arifle_SPAR_03_blk_F";
			logicalOrder = 26;
		};
		class SMG_05
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_SMG_05_base_F0"},{"STR_A3_CfgWeapons_SMG_05_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			dlc = 395180;
			weapon = "SMG_05_F";
			logicalOrder = 21;
		};
	};
	class VehicleList
	{
		class VTOL_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_VTOL_01_base_F0"},{"STR_A3_CfgVehicles_VTOL_01_armed_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 395180;
			vehicle = "B_T_VTOL_01_armed_F";
			modelScale = 0.4;
			logicalOrder = 42;
		};
		class VTOL_02
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_VTOL_02_base_F0"},{"STR_A3_CfgVehicles_VTOL_02_infantry_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 395180;
			vehicle = "O_T_VTOL_02_infantry_F";
			modelScale = 0.6;
			logicalOrder = 43;
		};
		class LSV_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_LSV_01_base_F0"},{"STR_A3_CfgVehicles_LSV_01_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 395180;
			vehicle = "B_LSV_01_armed_F";
			modelScale = 1.5;
			logicalOrder = 31;
		};
		class LSV_02
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_LSV_02_base_F0"},{"STR_A3_CfgVehicles_LSV_02_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 395180;
			vehicle = "O_LSV_02_armed_F";
			modelScale = 1.5;
			logicalOrder = 31;
		};
		class Offroad_02
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_Offroad_02_base_F0"},{"STR_A3_CfgVehicles_Offroad_02_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 395180;
			vehicle = "C_Offroad_02_unarmed_F";
			modelScale = 1.5;
			logicalOrder = 22;
		};
		class Boat_Transport_02
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_Boat_Transport_02_base_F0"},{"STR_A3_CfgVehicles_Boat_Transport_02_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 395180;
			vehicle = "C_Boat_Transport_02_F";
			logicalOrder = 32;
		};
		class Plane_Civil_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_I_C_Plane_Civil_01_F0"},{"STR_A3_CfgVehicles_Plane_Civil_01_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 395180;
			vehicle = "C_Plane_Civil_01_F";
			modelScale = 1.0;
			logicalOrder = 9;
		};
		class UAV_03
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_UAV_03_base_F0"},{"STR_A3_CfgVehicles_UAV_03_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 395180;
			vehicle = "B_T_UAV_03_F";
			modelScale = 1.0;
			logicalOrder = 27;
		};
		class UAV_04
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_UAV_04_base_F0"},{"STR_A3_CfgVehicles_UAV_04_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 395180;
			vehicle = "O_T_UAV_04_CAS_F";
			modelScale = 1.0;
			logicalOrder = 18;
		};
		class Scooter_Transport_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_Scooter_Transport_01_base_F0"},{"STR_A3_CfgVehicles_Scooter_Transport_01_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 395180;
			vehicle = "C_Scooter_Transport_01_F";
			modelScale = 1.5;
			logicalOrder = 42;
		};
	};
	class DlcMessage
	{
		displayName = "";
		dlc = -1;
		class Dlc395180
		{
			displayName = "$STR_A3_CFGDEFAULTKEYSPRESETS_APEX0";
			description = "$STR_A3_CFGHINTS_DLCMESSAGE_DLC2885201";
			tip = "$STR_A3_CFGHINTS_DLCMESSAGE_DLC28852002";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\a3\data_f_exp\logos\arma3_exp_icon_hint_ca.paa";
			dlc = -1;
		};
		class Dlc395180FM
		{
			displayName = "$STR_A3_CFGDEFAULTKEYSPRESETS_APEX0";
			description = "$STR_A3_CFGHINTS_DLCMESSAGE_DLC2885201";
			tip = "$STR_A3_CFGHINTS_DLCMESSAGE_DLC28852002";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\a3\data_f_exp\logos\arma3_exp_icon_hint_ca.paa";
			dlc = -1;
		};
	};
	class PremiumContent
	{
		class PremiumApex
		{
			displayName = "$STR_A3_CfgHints_PremiumContent_PremiumApex0";
			description = "$STR_A3_CfgHints_PremiumContent_PremiumApex1";
			tip = "$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[] = {};
			image = "\a3\data_f_exp\logos\arma3_exp_icon_hint_ca.paa";
			logicalOrder = 5;
		};
	};
};
