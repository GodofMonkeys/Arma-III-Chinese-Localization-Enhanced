////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_beta\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Tue Jan 29 20:22:06 2019
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
	class A3_Language_F_Beta
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Beta - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Language_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	beta = 1;
};
class CfgHints
{
	class Default{};
	class Command
	{
		class Formations
		{
			displayName = "$STR_A3_CfgHints_Command_Formations1";
			description = "$STR_A3_CfgHints_Command_Formations0";
			tip = "";
			arguments[] = {{{"selectAll"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
		class Vehicles
		{
			displayName = "$STR_A3_CfgHints_Command_Vehicles1";
			description = "$STR_A3_CfgHints_Command_Vehicles0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
		class Stances
		{
			displayName = "$STR_A3_CfgHints_Command_Stances1";
			description = "$STR_A3_CfgHints_Command_Stances0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
	};
	class Vehicle
	{
		class SDV
		{
			displayName = "$STR_A3_SDV1";
			description = "$STR_A3_SDV0";
			tip = "";
			arguments[] = {{{"submarineForward"}},{{"submarineBack"}},{{"submarineLeft"}},{{"submarineRight"}},{{"SubmarineUp"}},{{"submarineDown"}},{{"zoomTemp"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\SDV_ca.paa";
			logicalOrder = 22;
		};
	};
	class VehicleList
	{
		class SDVinfo
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_sdv_base0"},{"str_a3_cfgvehicles_sdv_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_SDV_01_F";
			modelScale = 1.25;
			logicalOrder = 33;
		};
		class blueforApcWheel
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_b_apc_wheeled_01_cannon"},{"str_a3_cfgvehicles_apc_wheeled_01_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_APC_Wheeled_01_cannon_F";
			logicalOrder = 6;
		};
		class blueforApcTrack
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_b_apc_tracked_01_base0"},{"str_a3_cfgvehicles_apc_tracked_01_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_APC_Tracked_01_rcws_F";
			logicalOrder = 16;
		};
		class gaMrap
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_mrap_03_base0"},{"str_a3_cfgvehicles_mrap_03_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "I_MRAP_03_hmg_F";
			logicalOrder = 35;
		};
		class opfor_apc_wheel
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_o_apc_wheeled_02_rcws"},{"str_a3_CfgVehicles_apc_wheeled_02_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_APC_Wheeled_02_rcws_F";
			logicalOrder = 29;
		};
		class opforApcTrack
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_APC_Tracked_02_0"},{"STR_A3_CfgVehicles_APC_Tracked_02_lib0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_APC_Tracked_02_cannon_F";
			logicalOrder = 9;
		};
		class bluforSquadTransport
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_b_truck_01"},{"str_a3_cfgvehicles_truck_01_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Truck_01_mover_F";
			logicalOrder = 14;
		};
		class squadTransport
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_c_truck_02_dump0"},{"str_a3_cfgvehicles_truck_02_lib"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_Truck_02_transport_F";
			logicalOrder = 44;
		};
		class bluforTransportHeli
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_heli_transport_01_base_f0"},{"str_a3_cfgvehicles_heli_transport_01_base_f_armory0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Heli_Transport_01_F";
			modelScale = 0.55;
			logicalOrder = 42;
		};
		class bluforAttackHeli
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_b_heli_attack_01"},{"STR_A3_Heli_Attack_01_lib"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Heli_Attack_01_F";
			modelScale = 0.75;
			logicalOrder = 5;
		};
		class opforAttackHeli
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_heli_attack_02_base0"},{"str_a3_cfgvehicles_heli_attack_02_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_Heli_Attack_02_F";
			modelScale = 0.65;
			logicalOrder = 26;
		};
		class gaTransport
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_heli_transport_02_Base0"},{"str_a3_heli_transport_02_lib"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "I_Heli_Transport_02_F";
			modelScale = 0.6;
			logicalOrder = 10;
		};
	};
	class WeaponList
	{
		class gaRifle
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_arifle_mk200"},{"str_a3_cfgweapons_arifle_mk20_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			weapon = "arifle_Mk20_F";
			logicalOrder = 12;
		};
		class titanshort
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_cfgweapons_launch_mprl_short_f0"},{"STR_A3_cfgWeapons_launch_MPRL_short_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			weapon = "launch_Titan_short_F";
			modelScale = 0.6;
			logicalOrder = 30;
		};
		class titanlong
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_launch_mprl0"},{"str_a3_cfgweapons_launch_mprl_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			weapon = "launch_Titan_F";
			modelScale = 0.6;
			logicalOrder = 31;
		};
		class bluforsmg
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_smg_010"},{"str_a3_cfgweapons_hgun_smg_01_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			weapon = "SMG_01_F";
			logicalOrder = 33;
		};
		class opforsmg
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_SMG_020"},{"str_a3_cfgweapons_SMG_02_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			weapon = "SMG_02_F";
			logicalOrder = 29;
		};
		class gapistol1
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_hgun_acpc2_f0"},{"STR_A3_CfgWeapons_hgun_ACPC2_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			weapon = "hgun_ACPC2_F";
			logicalOrder = 2;
		};
		class gaAutomatic
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_lmg_mk2000"},{"str_a3_cfgweapons_lmg_mk200_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			weapon = "LMG_Mk200_F";
			logicalOrder = 13;
		};
		class opforAutomatic
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_lmg_zafir_f0"},{"str_a3_cfgweapons_lmg_zafir_f_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			weapon = "LMG_Zafir_F";
			modelScale = 0.8;
			logicalOrder = 34;
		};
	};
	class FiringDrills
	{
		displayName = "$STR_A3_FiringDrills0";
		logicalOrder = 21;
		class FiringDrills
		{
			displayName = "$STR_A3_FiringDrills_FiringDrills0";
			description = "$STR_A3_FiringDrills_FiringDrills1";
			tip = "$STR_A3_FiringDrills_FiringDrills2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\FiringDrills_ca.paa";
		};
		class Rules
		{
			displayName = "$STR_A3_FiringDrills_Rules0";
			description = "$STR_A3_FiringDrills_Rules1";
			tip = "$STR_A3_FiringDrills_Rules2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Rules_ca.paa";
		};
		class Timing
		{
			displayName = "$STR_A3_FiringDrills_Timing0";
			description = "$STR_A3_FiringDrills_Timing1";
			tip = "$STR_A3_FiringDrills_Timing2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Timing_ca.paa";
		};
		class CheckPoints
		{
			displayName = "$STR_A3_FiringDrills_CheckPoints0";
			description = "$STR_A3_FiringDrills_CheckPoints1";
			tip = "$STR_A3_FiringDrills_CheckPoints2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Checkpoints_ca.paa";
		};
		class ShootingBoxes
		{
			displayName = "$STR_A3_FiringDrills_ShootingBoxes0";
			description = "$STR_A3_FiringDrills_ShootingBoxes1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\ShootingBoxes_ca.paa";
		};
		class Targets
		{
			displayName = "$STR_A3_FiringDrills_Targets0";
			description = "$STR_A3_FiringDrills_Targets1";
			tip = "$STR_A3_FiringDrills_Targets2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Targets_ca.paa";
		};
		class Weapons
		{
			displayName = "$STR_A3_FiringDrills_Weapons0";
			description = "$STR_A3_FiringDrills_Weapons1";
			tip = "$STR_A3_FiringDrills_Weapons2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
		};
		class Stances
		{
			displayName = "$STR_A3_FiringDrills_Stances0";
			description = "$STR_A3_FiringDrills_Stances1";
			tip = "$STR_A3_FiringDrills_Stances2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\BasicStances_ca.paa";
		};
		class Tips
		{
			displayName = "$STR_A3_FiringDrills_Tips0";
			description = "$STR_A3_FiringDrills_Tips1";
			tip = "$STR_A3_FiringDrills_Tips2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
		};
	};
};
