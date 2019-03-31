////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_tank\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:41 2019 : 'file' last modified on Tue Jan 29 22:16:12 2019
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
	class A3_Language_F_Tank
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Tank - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class PremiumContent
	{
		class PremiumTank
		{
			displayName = "$STR_A3_Tank_CfgMods_nameDLC";
			description = "$STR_A3_CfgHints_PremiumContent_PremiumTank0";
			tip = "$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[] = {{"$STR_A3_cfgmods_tank_overview0"},"""<img size='9' shadow='0' image='A3\Data_F_tank\Images\tank_fm_overview_co' />""","""http://steamcommunity.com/stats/107410/achievements"""};
			image = "\a3\data_f_tank\logos\arma3_tank_icon_hint_ca.paa";
			logicalOrder = 7;
			class Hint
			{
				displayName = "$STR_A3_Tank_CfgMods_nameDLC";
				description = "%11%1%12";
				tip = "$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
				arguments[] = {{"$STR_A3_cfgmods_tank_overview0"},"""<img size='7' shadow='0' image='A3\Data_F_tank\Images\tank_fm_overview_co' />"""};
				image = "\a3\data_f_tank\logos\arma3_tank_icon_hint_ca.paa";
			};
		};
	};
	class DlcMessage
	{
		class Dlc571710;
		class Dlc798390: Dlc571710
		{
			displayName = "$STR_A3_cfgmods_tank_name0";
			image = "\a3\Data_F_tank\logos\arma3_tank_logo_hint_ca.paa";
		};
		class Dlc798390FM: Dlc798390{};
	};
	class Weapons
	{
		class MissileFlightModes
		{
			displayName = "$STR_A3_MissileFlightModes1";
			description = "$STR_A3_MissileFlightModes2";
			tip = "$STR_A3_MissileFlightModes3";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Missile_Modes_ca.paa";
			logicalOrder = 25;
		};
		class WarheadTypes
		{
			displayName = "$STR_A3_WarheadTypes1";
			description = "$STR_A3_WarheadTypes2";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Warhead_Types_ca.paa";
			logicalOrder = 26;
		};
		class ReactiveArmor
		{
			displayName = "$STR_A3_ReactiveArmor1";
			description = "$STR_A3_ReactiveArmor2";
			tip = "$STR_A3_ReactiveArmor3";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Armor_ERA_ca.paa";
			logicalOrder = 28;
		};
		class SlatArmor
		{
			displayName = "$STR_A3_SlatArmor1";
			description = "$STR_A3_SlatArmor2";
			tip = "$STR_A3_SlatArmor3";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Armor_SLAT_ca.paa";
			logicalOrder = 29;
		};
		class LOAL
		{
			displayName = "$STR_A3_LOAL1";
			description = "$STR_A3_LOAL2";
			tip = "$STR_A3_LOAL3";
			arguments[] = {{{"VehLockTargets"}},{{"NextWeapon"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Missile_Seeking_ca.paa";
			logicalOrder = 30;
		};
	};
	class VehicleList
	{
		class Angara
		{
			displayName = "$STR_A3_Angara_library0";
			description = "$STR_A3_Angara_library1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 798390;
			vehicle = "O_MBT_04_cannon_F";
		};
		class Rhino
		{
			displayName = "$STR_A3_Rhino_library0";
			description = "$STR_A3_Rhino_library1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 798390;
			vehicle = "B_AFV_Wheeled_01_cannon_F";
		};
		class Nyx
		{
			displayName = "$STR_A3_Nyx_library0";
			description = "$STR_A3_Nyx_library1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 798390;
			vehicle = "I_LT_01_AT_F";
		};
	};
	class WeaponList
	{
		class Vorona
		{
			displayName = "$STR_A3_Vorona_library0";
			description = "$STR_A3_Vorona_library1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 798390;
			weapon = "launch_O_Vorona_brown_F";
		};
		class MAAWS
		{
			displayName = "$STR_A3_MAAWS_library0";
			description = "$STR_A3_MAAWS_library1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 798390;
			weapon = "launch_MRAWS_green_F";
		};
	};
};
