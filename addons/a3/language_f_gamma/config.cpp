////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_gamma\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Fri Jan 18 22:30:25 2019
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
	class A3_Language_F_Gamma
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Language_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	gamma = 1;
};
class CfgHints
{
	class Default{};
	class Guide
	{
		displayName = "$STR_A3_CfgHints_tacticaltease_title";
		logicalOrder = 3;
		category = "TacticalGuide";
		class tacticaltease
		{
			displayName = "$STR_A3_CfgHints_tacticaltease0";
			description = "$STR_A3_CfgHints_tacticaltease1";
			tip = "$STR_A3_CfgHints_tacticaltease2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 0;
		};
	};
	class Command
	{
		class TeamGear
		{
			displayName = "$STR_A3_CfgHints_TeamGear1";
			description = "$STR_A3_CfgHints_TeamGear0";
			tip = "";
			arguments[] = {{{"showMap"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
	};
	class Tactics
	{
		class Assemble
		{
			displayName = "$STR_A3_Tactics_Assemble1";
			description = "$STR_A3_Tactics_Assemble0";
			tip = "$STR_A3_Tactics_Assemble2";
			arguments[] = {{{"Gear"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 9;
		};
		class Disassemble
		{
			displayName = "$STR_A3_Tactics_Disassemble1";
			description = "$STR_A3_Tactics_Disassemble0";
			tip = "$STR_A3_Tactics_Disassemble2";
			arguments[] = {{{"NextAction"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 8;
		};
	};
	class UAV
	{
		displayName = "$STR_A3_0";
		logicalOrder = 15;
		class Basics
		{
			displayName = "$STR_A3_Basics0";
			description = "$STR_A3_Basics1";
			arguments[] = {{"PLACEHOLDER"}};
			image = "\a3\ui_f\data\gui\cfg\hints\UAVBasic_ca.paa";
			logicalOrder = 1;
		};
		class Types
		{
			displayName = "$STR_A3_Types0";
			description = "$STR_A3_Types1";
			arguments[] = {{"str_a3_cfgvehicles_ugv_01_base0"},{"str_a3_cfgvehicles_uav_01_base0"},{"str_a3_cfgvehicles_uav_02_base0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\UAVTypes_ca.paa";
			logicalOrder = 2;
		};
		class Connection
		{
			displayName = "$STR_A3_Connection0";
			description = "$STR_A3_Connection1";
			arguments[] = {{"str_a3_cfgweapons_items_uavterminal"},{{"nextAction"}},{"str_useract_uav_openuavterminal"},{{"optics"}},{"str_useract_uav_uavterminalmakeconnection"},{"str_a3_rscdisplayavterminal_avt_takecontrol"}};
			image = "\a3\ui_f\data\gui\cfg\hints\UAVConncetion_ca.paa";
			logicalOrder = 3;
		};
		class Terminal
		{
			displayName = "$STR_A3_Terminal0";
			description = "$STR_A3_Terminal1";
			arguments[] = {{"str_a3_cfgweapons_items_uavterminal"},{"str_useract_uav_openuavterminal"},{{"fire"}},{{"optics"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
			logicalOrder = 4;
		};
		class Backpack
		{
			displayName = "$STR_A3_Backpack0";
			description = "$STR_A3_Backpack1";
			arguments[] = {{"str_a3_cfgvehicles_uav_01_base0"},{{"nextAction"}},{{"prevAction"}},{"str_a3_disassemble"},{"str_a3_assemble"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
			logicalOrder = 5;
		};
		class DrivingGround
		{
			displayName = "$STR_A3_DrivingGround0";
			description = "$STR_A3_Driving0";
			tip = "$STR_A3_Driving2";
			arguments[] = {{{"CarForward"}},{{"CarBack"}},{{"CarLeft"}},{{"CarRight"}},{{"CarSlowForward"}},{{"CarFastForward"}},{{"personView"}},{{"LookAround"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Driving_ca.paa";
			logicalOrder = 6;
		};
		class PilotingQuadrotor
		{
			displayName = "$STR_A3_PilotingQuadrotor0";
			description = "$STR_A3_PilotingQuadrotor1";
			tip = "";
			arguments[] = {{{"HeliCollectiveRaise"}},{{"HeliCollectiveLower"}},{{"heliCyclicLeft"}},{{"heliCyclicRight"}},{{"HeliCyclicForward"}},{{"HeliCyclicBack"}},{{"HeliRudderLeft"}},{{"HeliRudderRight"}},{{"AutoHover"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\PilotingQuadrotor_ca.paa";
			logicalOrder = 7;
		};
		class PilotingFixedWing
		{
			displayName = "$STR_A3_PilotingFixedWing0";
			description = "$STR_A3_PilotingFixedWing1";
			tip = "$STR_A3_Controls2";
			arguments[] = {{{"HeliBack"}},{{"HeliForward"}},{{"HeliUp"}},{{"HeliDown"}},{{"AirBankLeft"}},{{"AirBankRight"}},{{"HeliRudderLeft"}},{{"HeliRudderRight"}},{{"FlapsDown"}},{{"FlapsUp"}},{{"LandGear"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\PilotingFixedwing_ca.paa";
			logicalOrder = 8;
		};
		class Targets
		{
			displayName = "$STR_A3_Targets0";
			description = "$STR_A3_Targets1";
			tip = "$STR_A3_VehicGuided2";
			arguments[] = {{{"vehLockTargets"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Target_ca.paa";
			logicalOrder = 9;
		};
	};
	class Vehicle
	{
		class Controls
		{
			displayName = "$STR_A3_Controls1";
			description = "$STR_A3_Controls0";
			tip = "$STR_A3_Controls2";
			arguments[] = {{{"HeliBack"}},{{"HeliForward"}},{{"HeliUp"}},{{"HeliDown"}},{{"AirBankLeft"}},{{"AirBankRight"}},{{"HeliRudderLeft"}},{{"HeliRudderRight"}},{{"FlapsDown"}},{{"FlapsUp"}},{{"LandGear"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 16;
		};
		class Landing
		{
			displayName = "$STR_A3_Landing1";
			description = "$STR_A3_Landing0";
			tip = "$STR_A3_Landing2";
			arguments[] = {{{"HeliDown"}},{{"landGear"}},{{"FlapsDown"}},{{"AirPlaneBrake"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 20;
		};
		class TakeOffPlane
		{
			displayName = "$STR_A3_TakeOffPlane1";
			description = "$STR_A3_TakeOffPlane0";
			tip = "$STR_A3_TakeOffPlane2";
			arguments[] = {{{"autoHover"}},{{"FlapsDown"}},{{"FlapsUp"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Vtol_take_off_ca.paa";
			logicalOrder = 19;
		};
	};
	class VehicleList
	{
		class UGV
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_ugv_01_base0"},{"str_a3_cfgvehicles_ugv_01_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_UGV_01_rcws_F";
			modelScale = 1.5;
			logicalOrder = 41;
		};
		class UAVrotor
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_uav_01_base0"},{"str_a3_cfgvehicles_uav_01_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_UAV_01_F";
			modelScale = 5;
			logicalOrder = 7;
		};
		class UAVfixedwing
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_uav_02_base0"},{"str_a3_cfgvehicles_uav_02_base_armory0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_UAV_02_CAS_F";
			modelScale = 0.75;
			logicalOrder = 28;
		};
		class motorBoat
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_boat_civil_01_base0"},{"str_a3_cfgvehicles_boat_civil_01_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "C_Boat_Civil_01_F";
			logicalOrder = 27;
		};
		class Truck
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_c_van_01"},{"str_a3_cfgvehicles_van_01_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "C_Van_01_transport_F";
			logicalOrder = 40;
		};
		class bluforMbt
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_MBT_01_cannon_base_F0"},{"STR_A3_CfgVehicles_MBT_01_cannon_base_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_MBT_01_cannon_F";
			logicalOrder = 19;
		};
		class gaApcWheel
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_apc_wheeled_03_wapc0"},{"str_a3_cfgvehicles_apc_wheeled_03_wapc_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "I_APC_Wheeled_03_cannon_F";
			logicalOrder = 4;
		};
		class opforMbt
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_mbt_02_base0"},{"str_a3_cfgvehicles_mbt_02_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_MBT_02_cannon_F";
			logicalOrder = 37;
		};
		class bluforHeavyArty
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_mbt_01_arty_base0"},{"str_a3_cfgvehicles_mbt_01_arty_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_MBT_01_arty_F";
			logicalOrder = 21;
		};
		class bluforRocketArty
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_B_MBT_01_MLRS0"},{"STR_A3_CfgVehicles_B_MBT_01_MLRS_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_MBT_01_mlrs_F";
			logicalOrder = 22;
		};
		class opforHeavyArty
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_MBT_02_Arty_base0"},{"STR_A3_CfgVehicles_MBT_02_Arty_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_MBT_02_arty_F";
			logicalOrder = 1;
		};
		class galightTransportOffroad
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_offroad_base0"},{"str_a3_cfgvehicles_offroad_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_G_Offroad_01_armed_F";
			logicalOrder = 30;
		};
		class galightTransportCar
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_car_base0"},{"STR_A3_CfgVehicles_Car_Base_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "C_Hatchback_01_F";
			logicalOrder = 13;
		};
		class galightTransportSuv
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_suv_base0"},{"str_a3_cfgvehicles_suv_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "C_SUV_01_F";
			logicalOrder = 36;
		};
		class gaFixedwing
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_o_plane_fighter_03"},{"str_a3_cfgvehicles_o_plane_fighter_03_cas_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "I_Plane_Fighter_03_CAS_F";
			modelScale = 0.75;
			logicalOrder = 2;
		};
	};
	class WeaponList
	{
		class staticHMG
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_hmg_01_base0"},{"str_a3_cfgvehicles_hmg_01_base_armory0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 14;
		};
		class staticGMG
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_gmg_01_base0"},{"str_a3_cfgvehicles_gmg_01_base_armory0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 15;
		};
		class gasmg
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_hgun_pdw20000"},{"str_a3_cfgweapons_hgun_pdw2000_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			weapon = "hgun_PDW2000_F";
			logicalOrder = 21;
		};
	};
	class Arma3
	{
		displayName = "$STR_A3_CFGMODS_A30";
		logicalOrder = 1;
		category = "Product";
		class Welcome1
		{
			displayName = "$STR_A3_FM_Welcome0";
			description = "$STR_A3_FM_Welcome1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 2;
			class HeliPitch_sub5
			{
				displayName = "$STR_A3_cfghints_learn_fmanual0";
				description = "$STR_A3_FieldManualLink";
				tip = "$STR_A3_FieldManualLinkTip";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Rules_ca.paa";
				arguments[] = {{{"ShowMap"}}};
			};
		};
		class Welcome2
		{
			displayName = "$STR_A3_FM_Welcome2";
			description = "$STR_A3_FM_Welcome3";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
		};
		class Welcome4
		{
			displayName = "$STR_A3_FM_Welcome6";
			description = "$STR_A3_FM_Welcome7";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
		};
		class Feedback
		{
			displayName = "$STR_A3_Alpha_Feedback1";
			description = "$STR_A3_Alpha_Feedback0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
		};
		class License
		{
			displayName = "$STR_A3_Credits_License1";
			description = "%11";
			arguments[] = {"call BIS_fnc_advHintCredits"};
			image = "\a3\ui_f\data\gui\cfg\hints\License_ca.paa";
			logicalOrder = 5;
		};
	};
};
