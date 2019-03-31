////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_epb\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Fri Jan 18 22:38:53 2019
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
	class A3_Language_F_EPB
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Adapt Episode - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Language_F_EPA"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	EPB = 1;
};
class CfgHints
{
	class Default{};
	class Tactics
	{
		class Instructor
		{
			displayName = "$STR_A3_CfgHints_Instructor_figure0";
			description = "$STR_A3_CfgHints_Instructor_figure1";
			tip = "$STR_A3_CfgHints_Instructor_figure2";
			arguments[] = {{{"diary"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
		};
	};
	class Weapons
	{
		class Mildot
		{
			displayName = "$STR_A3_CfgHints_Mildot0";
			description = "$STR_A3_CfgHints_Mildot1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
		};
		class irgrenade
		{
			displayName = "$STR_A3_irgrenade0";
			description = "$STR_A3_irgrenade1";
			tip = "$STR_A3_irgrenade2";
			arguments[] = {{{"throw"}},{{"cycleThrownItems"}},{{"lockTarget"}},{{"vehLockTargets"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 18;
		};
		class Static
		{
			displayName = "$STR_A3_Static1";
			description = "$STR_A3_Static0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
		};
	};
	class VehicleList
	{
		class gaMbt
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_i_mbt_03_cannon_f0"},{"str_a3_cfgvehicles_mbt_03_base_f_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "I_MBT_03_cannon_F";
			logicalOrder = 23;
		};
		class gaApcTracked
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_i_apc_tracked_03_cannon_f0"},{"str_a3_cfgvehicles_apc_tracked_03_base_f_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "I_APC_tracked_03_cannon_F";
			logicalOrder = 12;
		};
		class gaLightHeli
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_i_heli_light_03_f0"},{"str_a3_cfgvehicles_i_heli_light_03_f_armory0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "I_Heli_light_03_F";
			modelScale = 0.65;
			logicalOrder = 43;
		};
	};
	class Guide
	{
		class awareness
		{
			displayName = "$STR_A3_Guide_awareness0";
			description = "$STR_A3_Guide_awareness1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
		};
		class looking
		{
			displayName = "$STR_A3_Guide_looking0";
			description = "$STR_A3_Guide_looking1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 2;
		};
		class listening
		{
			displayName = "$STR_A3_Guide_listening0";
			description = "$STR_A3_Guide_listening1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
		};
		class iff
		{
			displayName = "$STR_A3_Guide_iff0";
			description = "$STR_A3_Guide_iff1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
		};
		class movement
		{
			displayName = "$STR_A3_Guide_movement0";
			description = "$STR_A3_Guide_movement1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 5;
		};
		class stamina
		{
			displayName = "$STR_A3_Guide_stamina0";
			description = "$STR_A3_Guide_stamina1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 6;
		};
		class marksmanship
		{
			displayName = "$STR_A3_Guide_marksmanship0";
			description = "$STR_A3_Guide_marksmanship1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 7;
		};
		class goodshot
		{
			displayName = "$STR_A3_Guide_goodshot0";
			description = "$STR_A3_Guide_goodshot1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 8;
		};
		class cover
		{
			displayName = "$STR_A3_Guide_cover0";
			description = "$STR_A3_Guide_cover1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 9;
		};
		class night
		{
			displayName = "$STR_A3_Guide_night0";
			description = "$STR_A3_Guide_night1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
		};
		class orientation
		{
			displayName = "$STR_A3_Guide_orientation0";
			description = "$STR_A3_Guide_orientation1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 11;
		};
		class fireteam
		{
			displayName = "$STR_A3_Guide_fireteam0";
			description = "$STR_A3_Guide_fireteam1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 12;
		};
		class observation
		{
			displayName = "$STR_A3_Guide_observation0";
			description = "$STR_A3_Guide_observation1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 13;
		};
		class contact
		{
			displayName = "$STR_A3_Guide_contact0";
			description = "$STR_A3_Guide_contact1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 14;
		};
		class attack
		{
			displayName = "$STR_A3_Guide_attack0";
			description = "$STR_A3_Guide_attack1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 15;
		};
		class ambush
		{
			displayName = "$STR_A3_Guide_ambush0";
			description = "$STR_A3_Guide_ambush1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 16;
		};
		class withdrawing
		{
			displayName = "$STR_A3_Guide_withdrawing0";
			description = "$STR_A3_Guide_withdrawing1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 17;
		};
		class defending
		{
			displayName = "$STR_A3_Guide_defending0";
			description = "$STR_A3_Guide_defending1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 18;
		};
		class recon
		{
			displayName = "$STR_A3_Guide_recon0";
			description = "$STR_A3_Guide_recon1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 19;
		};
		class guerrilla
		{
			displayName = "$STR_A3_Guide_guerrilla0";
			description = "$STR_A3_Guide_guerrilla1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 20;
		};
	};
};
