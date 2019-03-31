////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_epc\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Fri Jan 18 20:42:31 2019
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
	class A3_Language_F_EPC
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Win Episode - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Language_F_EPB"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	EPC = 1;
};
class CfgHints
{
	class Default{};
	class Navigation
	{
		class CustomWP
		{
			displayName = "$STR_A3_CustomWaypoints0";
			description = "$STR_A3_CustomWaypoints1";
			tip = "";
			arguments[] = {{{"showMap"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
		};
	};
	class VehicleList
	{
		class blueforFixedwing
		{
			displayName = "$STR_A3_blueforFixedwing0";
			description = "$STR_A3_blueforFixedwing1";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_b_plane_cas_01_f0"},{"str_a3_cfgvehicles_b_plane_cas_01_f_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Plane_CAS_01_F";
			modelScale = 0.65;
			logicalOrder = 3;
		};
		class opforFixedwing
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_o_plane_cas_02_f0"},{"str_a3_cfgvehicles_o_plane_cas_02_f_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_Plane_CAS_02_F";
			modelScale = 0.65;
			logicalOrder = 39;
		};
		class opforSquadTransport
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_o_truck_03_transport_f0"},{"str_a3_cfgvehicles_truck_03_base_f_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_Truck_03_transport_F";
			logicalOrder = 38;
		};
		class bluforMbtUP
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_B_MBT_01_TUSK_F0"},{"STR_A3_sfgvehicles_b_mbt_01_tusk_f_library"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_MBT_01_TUSK_F";
			logicalOrder = 20;
		};
	};
	class Guide
	{
		class squad
		{
			displayName = "$STR_A3_Guide_squad0";
			description = "$STR_A3_Guide_squad1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 21;
		};
		class formation
		{
			displayName = "$STR_A3_Guide_formation0";
			description = "$STR_A3_Guide_formation1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 22;
		};
		class smoke
		{
			displayName = "$STR_A3_Guide_smoke0";
			description = "$STR_A3_Guide_smoke1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 23;
		};
		class antiair
		{
			displayName = "$STR_A3_Guide_antiair0";
			description = "$STR_A3_Guide_antiair1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 24;
		};
		class antiarmor
		{
			displayName = "$STR_A3_Guide_antiarmor0";
			description = "$STR_A3_Guide_antiarmor1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 25;
		};
		class airattack
		{
			displayName = "$STR_A3_Guide_airattack0";
			description = "$STR_A3_Guide_airattack1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 26;
		};
		class snipers
		{
			displayName = "$STR_A3_Guide_snipers0";
			description = "$STR_A3_Guide_snipers1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 27;
		};
		class mout
		{
			displayName = "$STR_A3_Guide_mout0";
			description = "$STR_A3_Guide_mout1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 28;
		};
		class indirect
		{
			displayName = "$STR_A3_Guide_indirect0";
			description = "$STR_A3_Guide_indirect1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 29;
		};
		class armor
		{
			displayName = "$STR_A3_Guide_armor0";
			description = "$STR_A3_Guide_armor1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 30;
		};
	};
	class Vehicle
	{
		class TakeOffPlaneFixedWing
		{
			displayName = "$STR_A3_TakeOffPlaneFixedWing0";
			description = "$STR_A3_TakeOffPlaneFixedWing1";
			tip = "$STR_A3_TakeOffPlaneFixedWing2";
			arguments[] = {{{"HeliUp"}},{{"HeliBack"}},{{"FlapsDown"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 18;
		};
	};
};
