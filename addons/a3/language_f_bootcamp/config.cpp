////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_bootcamp\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Fri Jan 18 21:48:00 2019
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
	class A3_Language_F_Bootcamp
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Bootcamp Update - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Bootcamp"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class Navigation
	{
		class Tasks
		{
			class Tasks_sub
			{
				displayName = "$STR_A3_Tasks1_sub";
				description = "$STR_A3_Tasks2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Tasks_ca.paa";
				arguments[] = {{{"diary"}}};
				dlc = -1;
			};
		};
		class Direction
		{
			class Compass_sub
			{
				displayName = "$STR_A3_Compass1_sub";
				description = "$STR_A3_Compass2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Direction_ca.paa";
				arguments[] = {{{"compass"}},{{"compassToggle"}}};
				dlc = -1;
			};
			class Bearings_sub
			{
				displayName = "$STR_A3_Bearings1_sub";
				description = "$STR_A3_Bearings2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Direction_ca.paa";
				arguments[] = {};
				dlc = -1;
			};
			class GPS_sub
			{
				displayName = "$STR_A3_GPS1_sub";
				description = "$STR_A3_GPS2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				arguments[] = {{{"MiniMapToggle"}}};
				dlc = -1;
			};
		};
		class Map
		{
			class OpenMap_sub
			{
				displayName = "$STR_A3_OpenMap1_sub";
				description = "$STR_A3_OpenMap2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				arguments[] = {{{"showMap"}},{{"Action"}}};
				dlc = -1;
			};
			class GridDistances_sub
			{
				displayName = "$STR_A3_GridDistances1_sub";
				description = "$STR_A3_GridDistances2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				arguments[] = {};
				dlc = -1;
			};
		};
	};
	class Common
	{
		class ActionMenu
		{
			class ActionMenu_sub
			{
				displayName = "$STR_A3_ActionMenu1_sub";
				description = "$STR_A3_ActionMenu2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\ActionMenu_ca.paa";
				arguments[] = {{{"Action"}}};
				dlc = -1;
			};
		};
		class Gear
		{
			class OpenInventory_sub
			{
				displayName = "$STR_A3_OpenInventory1_sub";
				description = "$STR_A3_OpenInventory2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
				arguments[] = {{{"Gear"}}};
				dlc = -1;
			};
			class CloseInventory_sub
			{
				displayName = "$STR_A3_CloseInventory1_sub";
				description = "$STR_A3_CloseInventory2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
				arguments[] = {{{"Gear"}}};
				dlc = -1;
			};
		};
	};
	class Weapons_basic
	{
		class Scopes
		{
			class Scopes_sub
			{
				displayName = "$STR_A3_Scopes1_sub";
				description = "$STR_A3_Scopes2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Sniper_ca.paa";
				arguments[] = {{{"zeroingUp"}},{{"zeroingDown"}}};
				dlc = -1;
			};
			class Optics_sub
			{
				displayName = "$STR_A3_Optics1_sub";
				description = "$STR_A3_Optics2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Sniper_ca.paa";
				arguments[] = {{{"Optics"}}};
				dlc = -1;
			};
			class AlternativeOptics_sub
			{
				displayName = "$STR_A3_AlternativeOptics1_sub";
				description = "$STR_A3_AlternativeOptics2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Sniper_ca.paa";
				arguments[] = {{{"opticsMode"}}};
				dlc = -1;
			};
		};
		class Recoil
		{
			class HoldBreath_sub
			{
				displayName = "$STR_A3_HoldBreath1_sub";
				description = "$STR_A3_HoldBreath2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Shoot_ca.paa";
				arguments[] = {{{"holdBreath"}}};
				dlc = -1;
			};
		};
		class Launcher
		{
			class Countermeasures_sub
			{
				displayName = "$STR_A3_Countermeasures1_sub";
				description = "$STR_A3_Countermeasures2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Countermeasures_ca.paa";
				arguments[] = {};
				dlc = -1;
			};
		};
	};
	class Multiplayer
	{
		class Markers
		{
			class CreateMarkers_sub
			{
				displayName = "$STR_A3_CreateMarkers1_sub";
				description = "$STR_A3_CreateMarkers2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				arguments[] = {{{"defaultAction"}}};
				dlc = -1;
			};
			class ChangeMarkers_sub
			{
				displayName = "$STR_A3_ChangeMarkers1_sub";
				description = "$STR_A3_ChangeMarkers2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				arguments[] = {};
				dlc = -1;
			};
		};
	};
	class Vehicle
	{
		class Entering
		{
			class EnteringVehicle_sub
			{
				displayName = "$STR_A3_EnteringVehicle1_sub";
				description = "$STR_A3_EnteringVehicle2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Entering_ca.paa";
				arguments[] = {{{"Action"}}};
				dlc = -1;
			};
		};
	};
	class Command
	{
		class Selecting
		{
			class Selecting_sub
			{
				displayName = "$STR_A3_SelectSubordinates1_sub";
				description = "$STR_A3_SelectSubordinates2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
				arguments[] = {{{"selectAll"}}};
				dlc = -1;
			};
			class SelectSquad_sub
			{
				displayName = "$STR_A3_SelectSquad1_sub";
				description = "$STR_A3_SelectSquad2_sub";
				tip = "$STR_A3_SelectSquad3_sub";
				image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
				arguments[] = {{{"selectAll"}}};
				dlc = -1;
			};
		};
		class Waypoints
		{
			class Waypoints_sub
			{
				displayName = "$STR_A3_Waypoints1_sub";
				description = "$STR_A3_Waypoints2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Waypoints_ca.paa";
				arguments[] = {{{"Action"}}};
				dlc = -1;
			};
			class MapWaypoints_sub
			{
				displayName = "$STR_A3_MapWaypoints1_sub";
				description = "$STR_A3_MapWaypoints2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
				arguments[] = {{{"showMap"}},{{"Action"}}};
				dlc = -1;
			};
			class Stop_sub
			{
				displayName = "$STR_A3_Stop1_sub";
				description = "$STR_A3_Stop2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
				arguments[] = {{{"selectAll"}}};
				dlc = -1;
			};
			class ReturnToFormation_sub
			{
				displayName = "$STR_A3_ReturnToFormation1_sub";
				description = "$STR_A3_ReturnToFormation2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\BasicWalk_ca.paa";
				arguments[] = {};
				dlc = -1;
			};
		};
		class Complex
		{
			class ChangingStances_sub
			{
				displayName = "$STR_A3_ChangeStances1_sub";
				description = "$STR_A3_ChangeStances2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\BasicStances_ca.paa";
				arguments[] = {{{"selectAll"}}};
				dlc = -1;
			};
			class WatchDirection_sub
			{
				displayName = "$STR_A3_WatchDirection1_sub";
				description = "$STR_A3_WatchDirection2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Direction_ca.paa";
				arguments[] = {{{"selectAll"}}};
				dlc = -1;
			};
			class CombatMode_sub
			{
				displayName = "$STR_A3_CombatMode1_sub";
				description = "$STR_A3_CombatMode2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
				arguments[] = {};
				dlc = -1;
			};
			class Behavior_sub
			{
				displayName = "$STR_A3_Behavior1_sub";
				description = "$STR_A3_Behavior2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
				arguments[] = {};
				dlc = -1;
			};
		};
		class Quick
		{
			class FirstAid_sub
			{
				displayName = "$STR_A3_FirstAid1_sub";
				description = "$STR_A3_FirstAid2_sub";
				tip = "";
				image = "\a3\ui_f\data\igui\cfg\actions\Heal_ca.paa";
				arguments[] = {};
				dlc = -1;
			};
			class Repairing_sub
			{
				displayName = "$STR_A3_Repairing1_sub";
				description = "$STR_A3_Repairing2_sub";
				tip = "";
				image = "\a3\ui_f\data\igui\cfg\actions\Repair_ca.paa";
				arguments[] = {};
				dlc = -1;
			};
			class DeactivatingMines_sub
			{
				displayName = "$STR_A3_DeactivatingMines1_sub";
				description = "$STR_A3_DeactivatingMines2_sub";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Disarm_ca.paa";
				arguments[] = {};
				dlc = -1;
			};
		};
	};
	class UAV
	{
		class Backpack
		{
			class UAVAssembling_sub
			{
				displayName = "$STR_A3_UAVAssembling1_sub";
				description = "$STR_A3_UAVAssembling2_sub";
				tip = "$STR_A3_UAVAssembling3_sub";
				image = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
				arguments[] = {{{"nextAction"}}};
				dlc = -1;
			};
		};
		class PilotingQuadrotor
		{
			class UAVManualControl_sub
			{
				displayName = "$STR_A3_UAVManualControl1_sub";
				description = "$STR_A3_UAVManualControl2_sub";
				tip = "$STR_A3_UAVManualControl3_sub";
				image = "\a3\ui_f\data\gui\cfg\hints\UAVConncetion_ca.paa";
				arguments[] = {{{"nextAction"}}};
				dlc = -1;
			};
		};
	};
	class Learn
	{
		displayName = "$STR_A3_CfgHints_Learn0";
		logicalOrder = 20;
		category = "Product";
		class BootcampUpdate
		{
			displayName = "$STR_A3_CfgHints_Learn_BootcampUpdate0";
			description = "$STR_A3_CfgHints_Learn_BootcampUpdate1";
			tip = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			arguments[] = {};
		};
		class Bootcamp
		{
			displayName = "$STR_A3_CfgHints_Learn_Bootcamp0";
			description = "$STR_A3_CfgHints_Learn_Bootcamp1";
			tip = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			arguments[] = {};
		};
		class VRTraining
		{
			displayName = "$STR_A3_CfgHints_Learn_VRTraining0";
			description = "$STR_A3_CfgHints_Learn_VRTraining1";
			tip = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			arguments[] = {};
		};
		class MPBootcamp
		{
			displayName = "$STR_A3_CfgHints_Learn_MPBootcamp0";
			description = "$STR_A3_CfgHints_Learn_MPBootcamp1";
			tip = "$STR_A3_CfgHints_Learn_MPBootcamp2";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			arguments[] = {};
		};
		class Arsenal
		{
			displayName = "$STR_A3_CfgHints_Learn_Arsenal0";
			description = "$STR_A3_CfgHints_Learn_Arsenal1";
			tip = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			arguments[] = {};
		};
		class FManual
		{
			displayName = "$STR_A3_CfgHints_Learn_FManual0";
			description = "$STR_A3_CfgHints_Learn_FManual1";
			tip = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			arguments[] = {};
		};
		class CommunityGuides
		{
			displayName = "$STR_A3_CfgHints_Learn_CommunityGuides0";
			description = "$STR_A3_CfgHints_Learn_CommunityGuides1";
			tip = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			arguments[] = {};
		};
	};
};
