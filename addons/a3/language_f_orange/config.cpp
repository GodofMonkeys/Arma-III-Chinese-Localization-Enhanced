////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_orange\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:41 2019 : 'file' last modified on Fri Jan 18 22:32:58 2019
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
	class A3_Language_F_Orange
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Orange - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHintCategories
{
	class LOAC
	{
		displayName = "$STR_A3_Orange_Faction_IDAP_FM_filter_LoW";
		logicalOrder = 35;
	};
};
class CfgHints
{
	class ExplosivesList
	{
		class APERSMineDispenser
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgMagazines_APERSMineDispenser_Mag0"},{"STR_A3_CfgMagazines_APERSMineDispenser_Mag_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 571710;
			logicalOrder = 2;
			ammo = "APERSMineDispenser_Ammo";
		};
		class TrainingMine
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgMagazines_TrainingMine_Mag0"},{"STR_A3_CfgMagazines_TrainingMine_Mag_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 571710;
			logicalOrder = 13;
			ammo = "TrainingMine_Ammo";
		};
		class UXO
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Orange_CfgHints_UXO_displayName"},{"STR_A3_Orange_CfgHints_UXO_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 571710;
			logicalOrder = 14;
			ammo = "Mo_cluster_AP_UXO1_Ammo_F";
		};
	};
	class VehicleList
	{
		class Van_02
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Orange_CfgHints_Van_02_displayName"},{"STR_A3_CfgVehicles_Van_02_Base_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 571710;
			vehicle = "C_Van_02_transport_F";
			modelScale = 1;
			logicalOrder = 41;
		};
		class UAV_06
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_C_IDAP_UAV_06_F0"},{"STR_A3_CfgVehicles_UAV_06_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 571710;
			vehicle = "C_IDAP_UAV_06_F";
			modelScale = 4;
			logicalOrder = 42;
		};
		class UAV_06_AntiMine
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_C_IDAP_UAV_06_antimine_F0"},{"STR_A3_CfgVehicles_UAV_06_antimine_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 571710;
			logicalOrder = 11;
		};
	};
	class PremiumContent
	{
		class PremiumOrange
		{
			displayName = "$STR_A3_Orange_CfgMods_nameDLC";
			description = "$STR_A3_Orange_CfgHints_PremiumOrange_description";
			tip = "$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[] = {{"STR_A3_Orange_CfgMods_overview"},"""<img size='9' shadow='0' image='A3\Data_F_Orange\Images\orange_fm_overview_co' />""","""http://steamcommunity.com/stats/107410/achievements"""};
			image = "\a3\data_f_orange\logos\arma3_orange_icon_hint_ca.paa";
			logicalOrder = 7;
			class Hint
			{
				displayName = "$STR_A3_Orange_CfgMods_nameDLC";
				description = "%11%1%12";
				tip = "$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
				arguments[] = {{"STR_A3_Orange_CfgMods_overview"},"""<img size='7' shadow='0' image='A3\Data_F_Orange\Images\orange_fm_overview_co' />"""};
				image = "\a3\data_f_orange\logos\arma3_orange_icon_hint_ca.paa";
			};
		};
		class DLCStrategy
		{
			displayName = "$STR_A3_Orange_CfgHints_DLCStrategy_displayName";
			description = "$STR_A3_Orange_CfgHints_DLCStrategy_description";
			tip = "$STR_A3_Orange_CfgHints_DLCStrategy_tip";
			arguments[] = {"""https://www.bistudio.com/blog/roadmap-14-15-dlc-strategy-blog"""};
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\arma3_bundle_icon_hint.paa";
			logicalOrder = 2;
		};
		class PremiumBundle2
		{
			description = "$STR_A3_Orange_CfgHints_PremiumBundle2_overview";
		};
	};
	class DlcMessage
	{
		displayName = "";
		dlc = -1;
		class Dlc571710
		{
			displayName = "$STR_A3_Orange_CfgMods_name";
			description = "$STR_A3_CFGHINTS_DLCMESSAGE_DLC2885201";
			tip = "$STR_A3_CFGHINTS_DLCMESSAGE_DLC28852002";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\a3\data_f_orange\logos\arma3_orange_icon_hint_ca.paa";
			dlc = -1;
		};
		class Dlc571710FM
		{
			displayName = "$STR_A3_Orange_CfgMods_name";
			description = "$STR_A3_CFGHINTS_DLCMESSAGE_DLC2885201";
			tip = "$STR_A3_CFGHINTS_DLCMESSAGE_DLC28852002";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\a3\data_f_orange\logos\arma3_orange_icon_hint_ca.paa";
			dlc = -1;
		};
	};
	class InternationalHumanitarianLaw
	{
		displayName = "$STR_A3_Orange_CfgHints_InternationalHumanitarianLaw_displayName";
		logicalOrder = 1;
		category = "LOAC";
		class Overview
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_Overview_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_Overview_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_Overview_tip";
			arguments[] = {{"STR_A3_Orange_CfgHints_IHL_Overview_arg11"}};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 1;
			class Hint
			{
				displayName = "$STR_A3_Orange_CfgHints_InternationalHumanitarianLaw_displayName";
				description = "%11";
				tip = "$STR_A3_Orange_CfgHints_IHL_Overview_tip";
				arguments[] = {{"STR_A3_Orange_CfgHints_IHL_Overview_arg11"}};
				image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			};
		};
		class Humanity
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_Humanity_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_Humanity_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_Humanity_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 2;
		};
		class Distinction
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_Distinction_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_Distinction_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_Distinction_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 3;
		};
		class Precaution
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_Precaution_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_Precaution_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_Precaution_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 4;
		};
		class Proportionality
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_Proportionality_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_Proportionality_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_Proportionality_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 5;
		};
		class ProtectionProhibitions
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_ProtectionProhibitions_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_ProtectionProhibitions_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_ProtectionProhibitions_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 6;
		};
		class ProtectionObligations
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_ProtectionObligations_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_ProtectionObligations_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_ProtectionObligations_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 7;
		};
		class LimitsProhibitions
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_LimitsProhibitions_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_LimitsProhibitions_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_LimitsProhibitions_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 8;
		};
		class LimitsObligations
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_LimitsObligations_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_LimitsObligations_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_LimitsObligations_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 9;
		};
		class Definitions
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_Definitions_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_Definitions_description";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 10;
		};
		class TreatiesProtocols
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_TreatiesProtocols_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_TreatiesProtocols_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_TreatiesProtocols_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 11;
		};
		class MoreInfo
		{
			displayName = "$STR_A3_Orange_CfgHints_IHL_MoreInfo_displayName";
			description = "$STR_A3_Orange_CfgHints_IHL_MoreInfo_description";
			tip = "$STR_A3_Orange_CfgHints_IHL_MoreInfo_tip";
			arguments[] = {"""https://www.arma3.com/ihl"""};
			image = "\a3\UI_F_Orange\Data\CfgHints\loac_ca.paa";
			logicalOrder = 12;
		};
	};
	class CombatantCodeOfConduct
	{
		displayName = "$STR_A3_Orange_CfgHints_CCoC_displayName";
		logicalOrder = 2;
		category = "LOAC";
		class CombatRules
		{
			displayName = "$STR_A3_Orange_CfgHints_CCoC_CombatRules_displayName";
			description = "$STR_A3_Orange_CfgHints_CCoC_CombatRules_description";
			tip = "$STR_A3_Orange_CfgHints_CCoC_CombatRules_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\codeofconduct1_ca.paa";
			logicalOrder = 1;
		};
		class ProtectiveSymbols
		{
			displayName = "$STR_A3_Orange_CfgHints_CCoC_ProtectiveSymbols_displayName";
			description = "$STR_A3_Orange_CfgHints_CCoC_ProtectiveSymbols_description";
			tip = "$STR_A3_Orange_CfgHints_CCoC_ProtectiveSymbols_tip";
			arguments[] = {"""<img size='1.5' image = 'A3\Data_f\Flags\flag_rcrystal_co' />"""};
			image = "\a3\UI_F_Orange\Data\CfgHints\codeofconduct2_ca.paa";
			logicalOrder = 2;
		};
		class HorsDeCombat
		{
			displayName = "$STR_A3_Orange_CfgHints_CCoC_HorsDeCombat_displayName";
			description = "$STR_A3_Orange_CfgHints_CCoC_HorsDeCombat_description";
			tip = "$STR_A3_Orange_CfgHints_CCoC_HorsDeCombat_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\codeofconduct3_ca.paa";
			logicalOrder = 3;
		};
		class PrisonersOfWar
		{
			displayName = "$STR_A3_Orange_CfgHints_CCoC_PrisonersOfWar_displayName";
			description = "$STR_A3_Orange_CfgHints_CCoC_PrisonersOfWar_description";
			tip = "$STR_A3_Orange_CfgHints_CCoC_PrisonersOfWar_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\codeofconduct4_ca.paa";
			logicalOrder = 4;
		};
		class Civilians
		{
			displayName = "$STR_A3_Orange_CfgHints_CCoC_Civilians_displayName";
			description = "$STR_A3_Orange_CfgHints_CCoC_Civilians_description";
			tip = "$STR_A3_Orange_CfgHints_CCoC_Civilians_tip";
			arguments[] = {};
			image = "\a3\UI_F_Orange\Data\CfgHints\codeofconduct5_ca.paa";
			logicalOrder = 5;
		};
	};
	class Common
	{
		class Panels
		{
			logicalOrder = 13;
		};
		class Renegade
		{
			displayName = "$STR_A3_Orange_CfgHints_Renegade_displayName";
			description = "$STR_A3_Orange_CfgHints_Renegade_description";
			tip = "$STR_A3_Orange_CfgHints_Renegade_tip";
			arguments[] = {{"STR_A3_Orange_CfgHints_Renegade_arg11"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 14;
			class Hint
			{
				displayName = "$STR_A3_Orange_CfgHints_Renegade_displayName";
				description = "$STR_A3_Orange_CfgHints_Renegade_description";
				tip = "$STR_A3_Orange_CfgHints_Renegade_tip";
				arguments[] = {""};
				image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			};
		};
	};
	class Weapons
	{
		class ClusterMunitions
		{
			displayName = "$STR_A3_Orange_CfgHints_ClusterMunitions_displayName";
			description = "$STR_A3_Orange_CfgHints_ClusterMunitions_description";
			tip = "$STR_A3_Orange_CfgHints_ClusterMunitions_tip";
			arguments[] = {};
			image = "\A3\UI_F_Orange\Data\CfgHints\cluster_ca.paa";
			logicalOrder = 22;
		};
		class UXO
		{
			displayName = "$STR_A3_Orange_CfgHints_UXO_displayName";
			description = "$STR_A3_Orange_CfgHints_UXO2_description";
			tip = "$STR_A3_Orange_CfgHints_UXO2_tip";
			arguments[] = {};
			image = "\A3\UI_F_Orange\Data\CfgHints\uxo_ca.paa";
			logicalOrder = 23;
		};
		class MineDispensers
		{
			displayName = "$STR_A3_Orange_CfgHints_MineDispensers_displayName";
			description = "$STR_A3_Orange_CfgHints_MineDispensers_description";
			tip = "$STR_A3_Orange_CfgHints_MineDispensers_tip";
			arguments[] = {{"STR_A3_Orange_CfgHints_MineDispensers_arg11"}};
			image = "\A3\UI_F_Orange\Data\CfgHints\minedispensers_ca.paa";
			logicalOrder = 9;
			class Hint
			{
				displayName = "$STR_A3_Orange_CfgHints_MineDispensers_displayName";
				description = "$STR_A3_Orange_CfgHints_MineDispensers_description";
				tip = "$STR_A3_Orange_CfgHints_MineDispensers_tip";
				arguments[] = {""};
				image = "\A3\UI_F_Orange\Data\CfgHints\minedispensers_ca.paa";
			};
		};
		class Minesweep
		{
			description = "$STR_A3_Orange_CfgHints_Minesweep_description";
			arguments[] = {{{"ListLeftVehicleDisplay"}},{{"ListRightVehicleDisplay"}},{{"LockTarget"}},{"STR_A3_Orange_CfgHints_Minesweep_arg14"},"format [""color = '%1'"", (['IGUI', 'ERROR_RGB'] call BIS_fnc_displayColorGet) call bis_fnc_colorRGBAtoHTML]"};
			class HintVisual
			{
				displayName = "$STR_A3_Minesweep1";
				description = "$STR_A3_Orange_CfgHints_Minesweep_description_visual";
				tip = "$STR_A3_Minesweep2";
				arguments[] = {{{"LockTarget"}},{"STR_A3_Orange_CfgHints_Minesweep_arg14"},"format [""color = '%1'"", (['IGUI', 'ERROR_RGB'] call BIS_fnc_displayColorGet) call bis_fnc_colorRGBAtoHTML]"};
				image = "\a3\ui_f\data\gui\cfg\hints\Minesweep_ca.paa";
			};
			class HintDetector
			{
				displayName = "$STR_A3_Minesweep1";
				description = "$STR_A3_Orange_CfgHints_Minesweep_description_detector";
				tip = "$STR_A3_Minesweep2";
				arguments[] = {{{"ListLeftVehicleDisplay"}},{{"ListRightVehicleDisplay"}},{{"LockTarget"}},"format [""color = '%1'"", (['IGUI', 'ERROR_RGB'] call BIS_fnc_displayColorGet) call bis_fnc_colorRGBAtoHTML]"};
				image = "\a3\ui_f\data\gui\cfg\hints\Minesweep_ca.paa";
			};
			class HintDetector_NoTip: HintDetector
			{
				tip = "";
			};
		};
		class Disarm
		{
			description = "$STR_A3_orange_cfghints_disarm";
			tip = "$STR_A3_Disarm2";
			arguments[] = {{{"MoveDown"}},{{"LockTarget"}}};
		};
	};
	class Tactics
	{
		class Leaflets
		{
			displayName = "$STR_A3_Orange_CfgHints_Leaflets_displayName";
			description = "$STR_A3_Orange_CfgHints_Leaflets_description";
			tip = "$STR_A3_Orange_CfgHints_Leaflets_tip";
			arguments[] = {{{"DefaultAction"}},{{"Action"}},{"STR_A3_Orange_CfgHints_Leaflets_arg13"}};
			image = "\A3\UI_F_Orange\Data\CfgHints\leaflets_ca.paa";
			logicalOrder = 11;
			class HintDrop
			{
				displayName = "$STR_A3_Orange_CfgHints_Leaflets_HintDrop_displayName";
				description = "$STR_A3_Orange_CfgHints_Leaflets_HintDrop_description";
				tip = "$STR_A3_Orange_CfgHints_Leaflets_tip";
				arguments[] = {{{"DefaultAction"}},{"STR_A3_Orange_CfgHints_Leaflets_arg13"}};
				image = "\A3\UI_F_Orange\Data\CfgHints\leaflets_ca.paa";
			};
			class HintRead
			{
				displayName = "$STR_A3_Orange_CfgHints_Leaflets_HintRead_displayName";
				description = "$STR_A3_Orange_CfgHints_Leaflets_HintRead_description";
				tip = "$STR_A3_Orange_CfgHints_Leaflets_tip";
				arguments[] = {{{"Action"}},{"STR_A3_Orange_CfgHints_Leaflets_arg13"}};
				image = "\A3\UI_F_Orange\Data\CfgHints\leaflets_ca.paa";
			};
		};
		class AmmoType
		{
			description = "$STR_A3_Orange_CfgHints_AmmoType_description";
		};
	};
	class Vehicle
	{
		class TargetingCamera
		{
			description = "$STR_A3_Orange_CfgHints_TargetingCamera_description";
			tip = "$STR_A3_Orange_CfgHints_TargetingCamera_tip";
		};
		class VehicleRearm
		{
			description = "$STR_A3_Orange_CfgHints_VehicleRearm_description";
			tip = "$STR_A3_Orange_CfgHints_VehicleRearm_tip";
		};
	};
	class Command
	{
		class CombatModes
		{
			displayName = "$STR_A3_Orange_CfgHints_CombatModes_displayName";
			description = "$STR_A3_Orange_CfgHints_CombatModes_description";
			tip = "$STR_A3_Orange_CfgHints_CombatModes_tip";
			arguments[] = {"format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitCombatMode' >> 'colorGreen') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]",{"STR_A3_Orange_CfgHints_CombatModes_arg12"},{"STR_A3_Orange_CfgHints_CombatModes_arg13"},{"STR_A3_Orange_CfgHints_CombatModes_arg14"},{"STR_A3_Orange_CfgHints_CombatModes_arg15"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			class Hint
			{
				displayName = "$STR_A3_Orange_CfgHints_CombatModes_displayName";
				description = "%11%1%2%12%1%2%13%1%2%14";
				tip = "$STR_A3_Orange_CfgHints_CombatModes_tip";
				arguments[] = {{"STR_A3_Orange_CfgHints_CombatModes_arg12"},{"STR_A3_Orange_CfgHints_CombatModes_arg13"},{"STR_A3_Orange_CfgHints_CombatModes_arg14"},{"STR_A3_Orange_CfgHints_CombatModes_arg15"}};
				image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			};
		};
	};
};
class CfgVehicles{};
