////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Sat Feb 02 05:38:43 2019
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
	class A3_Language_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Alpha - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHintCategories
{
	class Default
	{
		displayName = "$STR_a3_rscdisplayfieldmanual_title";
		logicalOrder = 20;
	};
	class Mission
	{
		displayName = "$STR_workshop_button_mission";
		logicalOrder = -1;
	};
	class Product
	{
		displayName = "$STR_A3_CFGMODS_A30";
		logicalOrder = 10;
	};
	class TacticalGuide
	{
		displayName = "$STR_A3_CfgHints_tacticaltease_title";
		logicalOrder = 30;
	};
	class Assets
	{
		displayName = "$STR_a3_rscdisplaydlccontentbrowser_buttonassets";
		logicalOrder = 40;
	};
};
class CfgHints
{
	class Default{};
	class Command
	{
		displayName = "$STR_A3_CfgHints0";
		logicalOrder = 17;
		class Commandbar
		{
			displayName = "$STR_A3_CfgHints_Commandbar1";
			description = "$STR_A3_CfgHints_Commandbar0";
			tip = "";
			arguments[] = {"format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitCombatMode' >> 'colorGreen') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]","format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitStatus' >> 'colorWounded') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]","format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitStatus' >> 'colorNoAmmo') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]","format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitBehavior' >> 'colorStealth') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]","format [""color = '%1'"",(((configfile >> 'CfgInGameUI' >> 'CommandBar' >> 'UnitInfo' >> 'UnitBehavior' >> 'colorCombat') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML)]"};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
		class Complex
		{
			displayName = "$STR_A3_CfgHints_Complex1";
			description = "$STR_A3_CfgHints_Complex0";
			tip = "";
			arguments[] = {{{"selectAll"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
		class MarkTarget
		{
			displayName = "$STR_A3_CfgHints_MarkTarget1";
			description = "$STR_A3_CfgHints_MarkTarget0";
			tip = "";
			arguments[] = {{{"lockTarget"}},{{"selectAll"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
		class Orbat
		{
			displayName = "$STR_A3_CfgHints_Orbat1";
			description = "$STR_A3_CfgHints_Orbat0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
		class Quick
		{
			displayName = "$STR_A3_CfgHints_Quick1";
			description = "$STR_A3_CfgHints_Quick0";
			tip = "$STR_A3_CfgHints_Quick2";
			arguments[] = {{{"selectAll"}},{{"ActionContext"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
		class Response
		{
			displayName = "$STR_A3_CfgHints_Response1";
			description = "$STR_A3_CfgHints_Response0";
			tip = "";
			arguments[] = {{{"selectAll"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Response_ca.paa";
		};
		class Selecting
		{
			displayName = "$STR_A3_CfgHints_Selecting1";
			description = "$STR_A3_CfgHints_Selecting0";
			tip = "";
			arguments[] = {{{"selectAll"}},{{"switchCommand"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
		class Teams
		{
			displayName = "$STR_A3_CfgHints_Teams1";
			description = "$STR_A3_CfgHints_Teams0";
			tip = "$STR_A3_CfgHints_Teams2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
		};
		class Waypoints
		{
			displayName = "$STR_A3_CfgHints_Waypoints1";
			description = "$STR_A3_CfgHints_Waypoints0";
			tip = "$STR_A3_CfgHints_Waypoints2";
			arguments[] = {{{"showMap"}},{{"ActionContext"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Waypoints_ca.paa";
		};
	};
	class Hcommand
	{
		displayName = "$STR_A3_cfghints_Hcommand";
		logicalOrder = 18;
		class Hcwaypoints
		{
			displayName = "$STR_A3_CfgHints_Hcwaypoints1";
			description = "$STR_A3_CfgHints_Hcwaypoints0";
			tip = "";
			arguments[] = {{{"switchCommand"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
		};
		class HighCommand
		{
			displayName = "$STR_A3_CfgHints_HighCommand1";
			description = "$STR_A3_CfgHints_HighCommand0";
			tip = "";
			arguments[] = {{{"switchCommand"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
		};
		class UnitType
		{
			displayName = "$STR_A3_CfgHints_UnitType1";
			description = "$STR_A3_CfgHints_UnitType0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\UnitType_ca.paa";
			logicalOrder = 2;
		};
	};
	class Common
	{
		displayName = "$STR_A3_cfghints_general";
		logicalOrder = 4;
		class ActionMenu
		{
			displayName = "$STR_A3_ActionMenu1";
			description = "$STR_A3_ActionMenu0";
			tip = "";
			arguments[] = {{{"NextAction"}},{{"PrevAction"}},{{"ActionContext"}},{{"Action"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\ActionMenu_ca.paa";
			logicalOrder = 1;
		};
		class Clothes
		{
			displayName = "$STR_A3_Clothes1";
			description = "$STR_A3_Clothes0";
			tip = "$STR_A3_Clothes2";
			arguments[] = {{{"Gear"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 7;
		};
		class Containers
		{
			displayName = "$STR_A3_Containers1";
			description = "$STR_A3_Containers0";
			tip = "$STR_A3_Containers2";
			arguments[] = {{{"Gear"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 5;
		};
		class Doors
		{
			displayName = "$STR_A3_Doors1";
			description = "$STR_A3_Doors0";
			tip = "";
			arguments[] = {{{"Action"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Doors_ca.paa";
			logicalOrder = 2;
		};
		class Gear
		{
			displayName = "$STR_A3_Gear1";
			description = "$STR_A3_Gear0";
			tip = "$STR_A3_Gear2";
			arguments[] = {{{"Gear"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
			logicalOrder = 4;
		};
		class GPS
		{
			displayName = "$STR_A3_GPS1";
			description = "$STR_A3_GPS0";
			tip = "$STR_A3_GPS2";
			arguments[] = {{{"MiniMapToggle"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 11;
		};
		class Head
		{
			displayName = "$STR_A3_Head1";
			description = "$STR_A3_Head0";
			tip = "$STR_A3_Head2";
			arguments[] = {{{"binocular"}},{{"nightvision"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Head_ca.paa";
			logicalOrder = 12;
		};
		class Slots
		{
			displayName = "$STR_A3_Slots1";
			description = "$STR_A3_Slots0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Slots_ca.paa";
			logicalOrder = 6;
		};
		class Take
		{
			displayName = "$STR_A3_Take1";
			description = "$STR_A3_Take0";
			tip = "$STR_A3_Take2";
			arguments[] = {{{"NextAction"}},{{"Gear"}},{{"ActionContext"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Take_ca.paa";
			logicalOrder = 9;
		};
		class Rearm
		{
			displayName = "$STR_A3_Rearm1";
			description = "$STR_A3_Rearm0";
			tip = "$STR_A3_Rearm2";
			arguments[] = {{{"NextAction"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
		};
		class Looting
		{
			displayName = "$STR_A3_Looting1";
			description = "$STR_A3_Looting0";
			tip = "";
			arguments[] = {{{"Gear"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 8;
		};
		class FastEquip
		{
			displayName = "$STR_A3_FastEquip1";
			description = "$STR_A3_FastEquip0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
		};
	};
	class Damage
	{
		displayName = "$STR_A3_Damage0";
		logicalOrder = 16;
		class FAK
		{
			displayName = "$STR_A3_FAK1";
			description = "$STR_A3_FAK0";
			tip = "$STR_A3_FAK2";
			arguments[] = {{{"NextAction"}},{{"ActionContext"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 7;
		};
		class FireDamage
		{
			displayName = "$STR_A3_FireDamage1";
			description = "$STR_A3_FireDamage0";
			tip = "$STR_A3_FireDamage2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
		};
		class HitDamage
		{
			displayName = "$STR_A3_HitDamage1";
			description = "$STR_A3_HitDamage0";
			tip = "$STR_A3_HitDamage2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
		};
		class Injury
		{
			displayName = "$STR_A3_Injury1";
			description = "$STR_A3_Injury0";
			tip = "";
			arguments[] = {{{"selectAll"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Injury_ca.paa";
			logicalOrder = 2;
		};
		class Medikit
		{
			displayName = "$STR_A3_Medikit1";
			description = "$STR_A3_Medikit0";
			tip = "$STR_A3_Medikit2";
			arguments[] = {{{"NextAction"}},{{"Action"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 6;
		};
		class NormalDamage
		{
			displayName = "$STR_A3_NormalDamage1";
			description = "$STR_A3_NormalDamage0";
			tip = "$STR_A3_NormalDamage2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\NormalDamage_ca.paa";
			logicalOrder = 1;
		};
		class WaterDamage
		{
			displayName = "$STR_A3_WaterDamage1";
			description = "$STR_A3_WaterDamage0";
			tip = "$STR_A3_WaterDamage2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 5;
		};
	};
	class ExplosivesList
	{
		displayName = "$STR_A3_ExplosivesList0";
		logicalOrder = 25;
		category = "Assets";
		class atmine
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgmagazines_mine0"},{"STR_A3_cfgMagazines_Mine_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
			ammo = "ATMine_Range_Ammo";
		};
		class apmine
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgmagazines_classicminerangemagazine0"},{"str_a3_cfgmagazines_classicminerangemagazine_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 2;
			ammo = "APERSMine_Range_Ammo";
			modelScale = 2.0;
		};
		class apboundingmine
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgmagazines_bouncingminerangemagazine0"},{"str_a3_cfgmagazines_bouncingminerangemagazine_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
			ammo = "APERSBoundingMine_Range_Ammo";
			modelScale = 2.0;
		};
		class slammine
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgmagazines_directionalminerangemagazine0"},{"str_a3_cfgmagazines_directionalminerangemagazine_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 8;
			ammo = "SLAMDirectionalMine_Wire_Ammo";
			modelScale = 1.5;
		};
		class claymore
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgmagazines_directionalmineremotemagazine0"},{"str_a3_cfgmagazines_directionalmineremotemagazine_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
			ammo = "ClaymoreDirectionalMine_Remote_Ammo";
			modelScale = 1.5;
		};
		class explosivecharge
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgmagazines_democharge0"},{"str_a3_cfgmagazines_democharge_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 5;
			ammo = "DemoCharge_Remote_Ammo";
		};
		class explosivesatchel
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgmagazines_pipebomb0"},{"str_a3_cfgmagazines_pipebomb_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 6;
			ammo = "SatchelCharge_Remote_Ammo";
		};
		class navalmooredmine
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_underwaterminerange0"},{"str_a3_cfgvehicles_underwaterminerange_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
			ammo = "UnderwaterMine_Range_Ammo";
			modelScale = 0.4;
		};
		class navalbotommine
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_underwaterminerangeab0"},{"str_a3_cfgvehicles_underwaterminerangeab_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 9;
			ammo = "UnderwaterMineAB_Range_Ammo";
			modelScale = 0.5;
		};
		class navalshallowmine
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CFGVEHICLES_UNDERWATERMINEPDM0"},{"STR_A3_CFGVEHICLES_UNDERWATERMINEPDM_LIBRARY0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 11;
			ammo = "UnderwaterMinePDM_Range_Ammo";
			modelScale = 0.5;
		};
		class ied
		{
			displayName = "$STR_A3_cfgmagazines_ied0";
			description = "$STR_A3_cfgmagazines_ied1";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 7;
			ammo = "IEDUrbanBig_Remote_Ammo";
			modelScale = 0.5;
		};
	};
	class InfantryMovement
	{
		displayName = "$STR_A3_InfantryControls";
		logicalOrder = 7;
		class Adjust
		{
			displayName = "$STR_A3_Adjust1";
			description = "$STR_A3_Adjust0";
			tip = "";
			arguments[] = {{{"AdjustUp"}},{{"AdjustDown"}},{{"AdjustLeft"}},{{"AdjustRight"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Adjust_ca.paa";
			logicalOrder = 6;
		};
		class BasicDive
		{
			displayName = "$STR_A3_BasicDive1";
			description = "$STR_A3_BasicDive0";
			tip = "$STR_A3_BasicDive2";
			arguments[] = {{{"MoveForward"}},{{"SwimUp"}},{{"SwimDown"}},{{"MoveForward"}},{{"MoveBack"}},{{"TurnLeft"}},{{"TurnRight"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\BasicDive_ca.paa";
			logicalOrder = 10;
		};
		class BasicLean
		{
			displayName = "$STR_A3_BasicLean1";
			description = "$STR_A3_BasicLean0";
			tip = "$STR_A3_BasicLean2";
			arguments[] = {{{"LeanLeft"}},{{"LeanRight"}},{{"LeanLeftToggle"}},{{"LeanRightToggle"}},{{"MoveDown"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\BasicLean_ca.paa";
			logicalOrder = 7;
		};
		class BasicLook
		{
			displayName = "$STR_A3_BasicLook1";
			description = "$STR_A3_BasicLook0";
			tip = "$STR_A3_BasicLook2";
			arguments[] = {{{"LookAround"}},{{"LookAroundToggle"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\BasicLook_ca.paa";
			logicalOrder = 9;
		};
		class BasicSpeed
		{
			displayName = "$STR_A3_BasicSpeed1";
			description = "$STR_A3_BasicSpeed0";
			tip = "$STR_A3_BasicSpeed2";
			arguments[] = {{{"turbo"}},{{"MoveUp"}},{{"MoveDown"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\BasicSpeed_ca.paa";
			logicalOrder = 2;
		};
		class BasicMove
		{
			displayName = "$STR_A3_BasicMove1";
			description = "$STR_A3_BasicMove0";
			tip = "";
			arguments[] = {{{"MoveForward"}},{{"MoveBack"}},{{"TurnLeft"}},{{"TurnRight"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\BasicMove_ca.paa";
			logicalOrder = 1;
		};
		class BasicStances
		{
			displayName = "$STR_A3_BasicStances1";
			description = "$STR_A3_BasicStances0";
			tip = "$STR_A3_BasicStances2";
			arguments[] = {{{"MoveUp"}},{{"MoveDown"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\BasicStances_ca.paa";
			logicalOrder = 5;
		};
		class BasicWalk
		{
			displayName = "$STR_A3_BasicWalk1";
			description = "$STR_A3_BasicWalk0";
			tip = "$STR_A3_BasicWalk2";
			arguments[] = {{{"walkRunToggle"}},{{"TactToggle"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\BasicWalk_ca.paa";
			logicalOrder = 3;
		};
		class Death
		{
			displayName = "$STR_A3_Death1";
			description = "$STR_A3_Death0";
			tip = "$STR_A3_Death2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Death_ca.paa";
			logicalOrder = 11;
		};
		class SteppingOver
		{
			displayName = "$STR_A3_SteppingOver1";
			description = "$STR_A3_SteppingOver0";
			tip = "";
			arguments[] = {{{"getOver"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\SteppingOver_ca.paa";
			logicalOrder = 8;
		};
		class CombatPace
		{
			displayName = "$STR_A3_CombatPace1";
			description = "$STR_A3_CombatPace0";
			tip = "$STR_A3_CombatPace2";
			arguments[] = {{{"TactToggle"}},{{"toggleRaiseWeapon"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 4;
		};
	};
	class Multiplayer
	{
		displayName = "$STR_A3_Multiplayer0";
		logicalOrder = 5;
		class Chat
		{
			displayName = "$STR_A3_Multiplayer_Chat1";
			description = "$STR_A3_Multiplayer_Chat0";
			tip = "";
			arguments[] = {{{"nextChannel"}},{{"prevChannel"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
			logicalOrder = 5;
		};
		class Voice
		{
			displayName = "$STR_A3_Multiplayer_Voice1";
			description = "$STR_A3_Multiplayer_Voice0";
			tip = "";
			arguments[] = {{{"pushToTalk"}},{{"prevChannel"}},{{"nextChannel"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Voice_ca.paa";
			logicalOrder = 4;
		};
		class TeamSwitch
		{
			displayName = "$STR_A3_Multiplayer_TeamSwitch1";
			description = "$STR_A3_Multiplayer_TeamSwitch0";
			tip = "$STR_A3_Multiplayer_TeamSwitch2";
			arguments[] = {{{"teamSwitch"}},{{"teamSwitchNext"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Team_switch_ca.paa";
			logicalOrder = 2;
		};
		class Text
		{
			displayName = "$STR_A3_Multiplayer_Text1";
			description = "$STR_A3_Multiplayer_Text0";
			tip = "$STR_A3_Multiplayer_Text2";
			arguments[] = {{{"chat"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
			logicalOrder = 3;
		};
		class Markers
		{
			displayName = "$STR_A3_Multiplayer_Markers1";
			description = "$STR_A3_Multiplayer_Markers0";
			tip = "$STR_A3_Multiplayer_Markers2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
		};
	};
	class Navigation
	{
		displayName = "$STR_A3_Navigation";
		logicalOrder = 9;
		class Direction
		{
			displayName = "$STR_A3_Direction1";
			description = "$STR_A3_Direction0";
			tip = "$STR_A3_Direction2";
			arguments[] = {{{"MiniMapToggle"}},{{"compassToggle"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Direction_ca.paa";
			logicalOrder = 2;
		};
		class Map
		{
			displayName = "$STR_A3_Map1";
			description = "$STR_A3_Map0";
			tip = "$STR_A3_Map2";
			arguments[] = {{{"showMap"}},{{"hideMap"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
			logicalOrder = 1;
		};
		class Tasks
		{
			displayName = "$STR_A3_Tasks1";
			description = "$STR_A3_Tasks0";
			tip = "$STR_A3_Tasks2";
			arguments[] = {{{"diary"}},{{"showMap"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Tasks_ca.paa";
			logicalOrder = 5;
		};
		class Waypoint
		{
			displayName = "$STR_A3_Waypoint1";
			description = "$STR_A3_Waypoint0";
			tip = "$STR_A3_Waypoint2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Waypoint_ca.paa";
			logicalOrder = 3;
		};
	};
	class Tactics
	{
		displayName = "$STR_A3_Tactics0";
		logicalOrder = 19;
		class AmmoType
		{
			displayName = "$STR_A3_Tactics_AmmoType1";
			description = "$STR_A3_Tactics_AmmoType0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\AmmoType_ca.paa";
			logicalOrder = 6;
		};
		class Supports
		{
			displayName = "$STR_A3_Tactics_Supports1";
			description = "$STR_A3_Tactics_Supports0";
			tip = "$STR_A3_Tactics_Supports2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\CallSupport_CA.paa";
			logicalOrder = 4;
		};
		class Annoucning
		{
			displayName = "$STR_A3_Tactics_Annoucning1";
			description = "$STR_A3_Tactics_Annoucning0";
			tip = "";
			arguments[] = {{{"revealTarget"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Annoucning_ca.paa";
			logicalOrder = 1;
		};
		class ArtilleryCall
		{
			displayName = "$STR_A3_Tactics_ArtilleryCall1";
			description = "$STR_A3_Tactics_ArtilleryCall0";
			tip = "$STR_A3_Tactics_ArtilleryCall2";
			arguments[] = {{{"selectAll"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\ArtilleryCall_ca.paa";
			logicalOrder = 5;
		};
		class Ballistic
		{
			displayName = "$STR_A3_Tactics_Ballistic1";
			description = "$STR_A3_Tactics_Ballistic0";
			tip = "";
			arguments[] = {{{"NextAction"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Zeroing_ca.paa";
			logicalOrder = 7;
		};
	};
	class Vehicle
	{
		displayName = "$STR_A3_VehicleControls";
		logicalOrder = 12;
		class Commanding
		{
			displayName = "$STR_A3_Commanding1";
			description = "$STR_A3_Commanding0";
			tip = "$STR_A3_Commanding2";
			arguments[] = {{{"DefaultAction"}},{{"switchGunnerWeapon"}},{{"heliManualFire"}},{{"optics"}},{{"MoveForward"}},{{"MoveBack"}},{{"TurnLeft"}},{{"TurnRight"}},{{"CarFastForward"}},{{"CarSlowForward"}},{{"fire"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleCommanding_CA.paa";
			logicalOrder = 6;
		};
		class Countermeasures
		{
			displayName = "$STR_A3_Countermeasures1";
			description = "$STR_A3_Countermeasures0";
			tip = "$STR_A3_Countermeasures2";
			arguments[] = {{{"launchCM"}},{{"nextCM"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Countermeasures_CA.paa";
			logicalOrder = 8;
		};
		class Driving
		{
			displayName = "$STR_A3_Driving1";
			description = "$STR_A3_Driving0";
			tip = "$STR_A3_Driving2";
			arguments[] = {{{"CarForward"}},{{"CarBack"}},{{"CarLeft"}},{{"CarRight"}},{{"CarSlowForward"}},{{"CarFastForward"}},{{"personView"}},{{"LookAround"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Driving_ca.paa";
			logicalOrder = 4;
		};
		class Entering
		{
			displayName = "$STR_A3_Entering1";
			description = "$STR_A3_Entering0";
			tip = "$STR_A3_Entering2";
			arguments[] = {{{"Action"}},{{"NextAction"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Entering_ca.paa";
			logicalOrder = 1;
		};
		class Exit
		{
			displayName = "$STR_A3_Exit1";
			description = "$STR_A3_Exit0";
			tip = "$STR_A3_Exit2";
			arguments[] = {{{"GetOut"}},{{"Eject"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleGetOut_CA.paa";
			logicalOrder = 3;
		};
		class Firing
		{
			displayName = "$STR_A3_Firing1";
			description = "$STR_A3_Firing0";
			tip = "$STR_A3_Firing2";
			arguments[] = {{{"DefaultAction"}},{{"ZoomIn"}},{{"opticsTemp"}},{{"nextWeapon"}},{{"NextAction"}},{{"lockTarget"}},{{"vehLockTargets"}},{{"ZoomOut"}},{{"SwitchWeaponGrp1"}},{{"SwitchWeaponGrp2"}},{{"SwitchWeaponGrp3"}},{{"SwitchWeaponGrp4"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Firing_ca.paa";
			logicalOrder = 12;
		};
		class Radar
		{
			displayName = "$STR_A3_Radar1";
			description = "$STR_A3_Radar0";
			tip = "$STR_A3_Radar2";
			arguments[] = {{{"ActiveSensorsToggle"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Radar_ca.paa";
			logicalOrder = 7;
		};
		class Seats
		{
			displayName = "$STR_A3_Seats1";
			description = "$STR_A3_Seats0";
			tip = "$STR_A3_Seats2";
			arguments[] = {{{"NextAction"}},{{"opticsTemp"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Seats_ca.paa";
			logicalOrder = 2;
		};
		class TakeOff
		{
			displayName = "$STR_A3_TakeOff1";
			description = "$STR_A3_TakeOff0";
			tip = "";
			arguments[] = {{{"HeliCollectiveRaise"}},{{"HeliCollectiveLower"}},{{"heliCyclicLeft"}},{{"heliCyclicRight"}},{{"HeliCyclicForward"}},{{"HeliCyclicBack"}},{{"HeliRudderLeft"}},{{"HeliRudderRight"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\TakeOff_ca.paa";
			logicalOrder = 17;
		};
		class VehicGuided
		{
			displayName = "$STR_A3_VehicGuided1";
			description = "$STR_A3_VehicGuided0";
			tip = "$STR_A3_VehicGuided2";
			arguments[] = {{{"lockTarget"}},{{"vehLockTargets"}},"format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'Seeker' >> 'color') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'Seeker' >> 'texture')]","format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'Seeker' >> 'color') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'Seeker' >> 'texture')]","format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'SeekerLocked' >> 'color') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'SeekerLocked' >> 'texture')]","format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'SeekerNoLos' >> 'color') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'SeekerNoLos' >> 'texture')]"};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 15;
		};
		class VehicleAmmo
		{
			displayName = "$STR_A3_VehicleAmmo1";
			description = "$STR_A3_VehicleAmmo0";
			tip = "";
			arguments[] = {{{"NextAction"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleAmmo_ca.paa";
			logicalOrder = 13;
		};
		class VehicleGUI
		{
			displayName = "$STR_A3_VehicleGUI1";
			description = "$STR_A3_VehicleGUI0";
			tip = "$STR_A3_VehicleGUI2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleGUI_ca.paa";
			logicalOrder = 5;
		};
		class VehicleRearm
		{
			displayName = "$STR_A3_VehicleRearm1";
			description = "$STR_A3_VehicleRearm0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 9;
		};
		class VehicleRepair
		{
			displayName = "$STR_A3_VehicleRepair1";
			description = "$STR_A3_VehicleRepair0";
			tip = "$STR_A3_VehicleRepair2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleRepair_CA.paa";
			logicalOrder = 10;
		};
		class VehicUnguided
		{
			displayName = "$STR_A3_VehicUnguided1";
			description = "$STR_A3_VehicUnguided0";
			tip = "$STR_A3_VehicUnguided2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\VehicUnguided_ca.paa";
			logicalOrder = 14;
		};
		class CountermeasuresSimple
		{
			displayName = "$STR_A3_Countermeasures1";
			description = "$STR_A3_Countermeasures0";
			tip = "";
			arguments[] = {{{"launchCM"}}};
			dlc = -1;
			image = "\a3\ui_f\data\gui\cfg\hints\Countermeasures_CA.paa";
		};
	};
	class VehicleList
	{
		displayName = "$STR_A3_VehicleList0";
		logicalOrder = 26;
		category = "Assets";
		class AssaultBoat
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_boat_armed_01_base0"},{"str_a3_cfgvehicles_boat_armed_01_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Boat_Armed_01_minigun_F";
			logicalOrder = 34;
		};
		class LightTransportBoat
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgVehicles_Rubber_duck_base0"},{"str_a3_cfgvehicles_rubber_duck_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Boat_Transport_01_F";
			modelScale = 2;
			logicalOrder = 8;
		};
		class bluforMrap
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_mrap_01_base0"},{"str_a3_cfgvehicles_mrap_01_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_MRAP_01_hmg_F";
			logicalOrder = 15;
		};
		class opforMrap
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_A3_cfgvehicles_o_mrap_02_f0"},{"STR_A3_CfgVehicles_mrap_02_Base_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_MRAP_02_hmg_F";
			logicalOrder = 17;
		};
		class miscTransportQuad
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_quadbike_base_f0"},{"str_a3_cfgvehicles_quadbike_base_f_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Quadbike_01_F";
			modelScale = 2;
			logicalOrder = 32;
		};
		class bluforLightHeli
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_heli_light_01_base0"},{"STR_A3_CFGVEHICLES_B_HELI_LIGHT_01_ARMORY1"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_Heli_Light_01_F";
			logicalOrder = 24;
		};
		class opforLightHeli
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_heli_light_02_base_f0"},{"STR_A3_cfgvehicles_heli_light_02_lib"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "O_Heli_Light_02_F";
			modelScale = 0.75;
			logicalOrder = 31;
		};
	};
	class View
	{
		displayName = "$STR_A3_View";
		logicalOrder = 8;
		class Dots
		{
			displayName = "$STR_A3_Dots1";
			description = "$STR_A3_Dots0";
			tip = "$STR_A3_Dots2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Pheripheal_vision_ca.paa";
			logicalOrder = 2;
		};
		class NV
		{
			displayName = "$STR_A3_NV1";
			description = "$STR_A3_NV0";
			tip = "$STR_A3_NV2";
			arguments[] = {{{"nightVision"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\NV_ca.paa";
			logicalOrder = 4;
		};
		class TacticalView
		{
			displayName = "$STR_A3_TacticalView1";
			description = "$STR_A3_TacticalView0";
			tip = "$STR_A3_TacticalView2";
			arguments[] = {{{"tacticalView"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Tactical_view_ca.paa";
			logicalOrder = 3;
		};
		class Thirdperson
		{
			displayName = "$STR_A3_Thirdperson1";
			description = "$STR_A3_Thirdperson0";
			tip = "$STR_A3_Thirdperson2";
			arguments[] = {{{"personView"}},{{"LookAround"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 1;
		};
		class TI
		{
			displayName = "$STR_A3_TI1";
			description = "$STR_A3_TI0";
			tip = "$STR_A3_TI2";
			arguments[] = {{{"nightVision"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Thermal_imaging_ca.paa";
			logicalOrder = 5;
		};
	};
	class WeaponList
	{
		displayName = "$STR_A3_WeaponList0";
		logicalOrder = 24;
		category = "Assets";
		class portableMortar1
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgvehicles_mortar_01_base0"},{"str_a3_cfgvehicles_mortar_01_base_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			weapon = "";
			logicalOrder = 16;
		};
		class bluforRifle
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_arifle_xmx0"},{"str_a3_cfgweapons_arifle_xmx_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			weapon = "arifle_MX_F";
			logicalOrder = 17;
		};
		class opforRifle
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_arifle_Katiba_F0"},{"STR_A3_CfgWeapons_arifle_Katiba_F_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			weapon = "arifle_Katiba_F";
			logicalOrder = 6;
		};
		class bluforSpecShort
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_arifle_trg210"},{"str_a3_cfgweapons_arifle_trg21_gl_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			weapon = "arifle_TRG21_F";
			logicalOrder = 32;
		};
		class UnderwaterRifle
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_arifle_sdar0"},{"str_a3_cfgweapons_arifle_sdar_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";
			weapon = "arifle_SDAR_F";
			logicalOrder = 26;
		};
		class opforAutomatic
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_lmg_mk2000"},{"str_a3_cfgweapons_lmg_mk200_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
			weapon = "LMG_Mk200_F";
			logicalOrder = 13;
		};
		class opfroMarksman
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_srifle_abr0"},{"STR_A3_CfgWeapons_srifle_ABR_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			weapon = "srifle_DMR_01_F";
			logicalOrder = 22;
		};
		class bluforMarksman
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_srifle_abr0"},{"STR_A3_CfgWeapons_srifle_ABR_Library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			weapon = "srifle_EBR_F";
			modelScale = 0.8;
			logicalOrder = 11;
		};
		class bluforLauncher
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_launch_nlaw0"},{"str_a3_cfgweapons_launch_nlaw_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			modelScale = 0.8;
			weapon = "launch_NLAW_F";
			logicalOrder = 20;
		};
		class opforLauncher
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_launch_law0"},{"str_a3_cfgweapons_launch_law_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			modelScale = 0.6;
			weapon = "launch_RPG32_F";
			logicalOrder = 25;
		};
		class opforAntimat
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_CfgWeapons_srifle_GM60"},{"str_a3_cfgweapons_srifle_gm6_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			modelScale = 0.6;
			weapon = "srifle_GM6_F";
			logicalOrder = 5;
		};
		class bluforAntimat
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_srifle_lrr0"},{"str_a3_cfgweapons_srifle_lrr_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";
			modelScale = 0.4;
			weapon = "srifle_LRR_F";
			logicalOrder = 7;
		};
		class bluforpistol1
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_hgun_p070"},{"str_a3_cfgweapons_hgun_p07_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			weapon = "hgun_P07_F";
			logicalOrder = 19;
		};
		class opforpistol1
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"str_cfgweapons_hgun_rook40_f0"},{"str_a3_cfgweapons_hgun_rook40_library0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			weapon = "hgun_Rook40_F";
			logicalOrder = 24;
		};
	};
	class Weapons_basic
	{
		displayName = "$STR_A3_WeaponBasicClass";
		logicalOrder = 10;
		class Firemode
		{
			displayName = "$STR_A3_Firemode1";
			description = "$STR_A3_Firemode0";
			tip = "";
			arguments[] = {{{"nextWeapon"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Firemode_ca.paa";
			logicalOrder = 5;
		};
		class Launcher
		{
			displayName = "$STR_A3_Launcher1";
			description = "$STR_A3_Launcher0";
			tip = "$STR_A3_Launcher2";
			arguments[] = {{{"SwitchWeapon"}},{{"optics"}},{{"DefaultAction"}},{{"LockTarget"}},{{"NextAction"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Launcher_ca.paa";
			logicalOrder = 18;
		};
		class Lowering
		{
			displayName = "$STR_A3_Lowering1";
			description = "$STR_A3_Lowering0";
			tip = "$STR_A3_Lowering2";
			arguments[] = {{{"toggleRaiseWeapon"}},{{"DefaultAction"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Lowering_ca.paa";
			logicalOrder = 14;
		};
		class Recoil
		{
			displayName = "$STR_A3_Recoil1";
			description = "$STR_A3_Recoil0";
			tip = "";
			arguments[] = {{{"MoveUp"}},{{"MoveDown"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 10;
		};
		class Reload
		{
			displayName = "$STR_A3_Reload1";
			description = "$STR_A3_Reload0";
			tip = "$STR_A3_Reload2";
			arguments[] = {{{"ReloadMagazine"}},{{"Action"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Reload_ca.paa";
			logicalOrder = 4;
		};
		class Rifles
		{
			displayName = "$STR_A3_Rifles1";
			description = "$STR_A3_Rifles0";
			tip = "$STR_A3_Rifles2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";
			logicalOrder = 15;
		};
		class Scopes
		{
			displayName = "$STR_A3_Scopes1";
			description = "$STR_A3_Scopes0";
			tip = "$STR_A3_Scopes2";
			arguments[] = {{{"Gear"}},{{"nightVision"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Optics_ca.paa";
			logicalOrder = 7;
		};
		class Shoot
		{
			displayName = "$STR_A3_Shoot1";
			description = "$STR_A3_Shoot0";
			tip = "$STR_A3_Shoot2";
			arguments[] = {{{"DefaultAction"}},{{"zoomTemp"}},{{"HoldBreath"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Shoot_ca.paa";
			logicalOrder = 12;
		};
		class Handgun
		{
			displayName = "$STR_A3_Handgun1";
			description = "$STR_A3_Handgun0";
			tip = "$STR_A3_Handgun2";
			arguments[] = {{{"handgun"}},{{"NextAction"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			logicalOrder = 16;
			class Handgun_sub1
			{
				displayName = "$STR_A3_Handgun1";
				description = "$STR_A3_Handgun0_sub1_desc";
				tip = "";
				image = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
				arguments[] = {};
			};
		};
		class Grenades
		{
			displayName = "$STR_A3_Grenades1";
			description = "$STR_A3_Grenades0";
			tip = "";
			arguments[] = {{{"throw"}},{{"cycleThrownItems"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Grenades_ca.paa";
			logicalOrder = 17;
		};
		class GUI
		{
			displayName = "$STR_A3_GUI1";
			description = "$STR_A3_GUI0";
			tip = "$STR_A3_GUI2";
			arguments[] = {{{"DefaultAction"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\GUI_ca.paa";
			logicalOrder = 2;
		};
		class Switch
		{
			displayName = "$STR_A3_Switch1";
			description = "$STR_A3_Switch0";
			tip = "$STR_A3_Switch2";
			arguments[] = {{{"SwitchWeapon"}},{{"SwitchHandgun"}},{{"NextAction"}},{{"SwitchSecondary"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Switch_ca.paa";
			logicalOrder = 3;
		};
		class Zooming
		{
			displayName = "$STR_A3_Zooming1";
			description = "$STR_A3_Zooming0";
			tip = "$STR_A3_Zooming2";
			arguments[] = {{{"zoomTemp"}},{{"opticsMode"}},{{"zoomTemp"}},{{"zoomIn"}},{{"zoomOut"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Zooming_ca.paa";
			logicalOrder = 19;
		};
		class Zeroing
		{
			displayName = "$STR_A3_Zeroing1";
			description = "$STR_A3_Zeroing0";
			tip = "$STR_A3_Zeroing2";
			arguments[] = {{{"ZeroingUp"}},{{"ZeroingDown"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Zeroing_ca.paa";
			logicalOrder = 6;
		};
		class WeaponSway
		{
			displayName = "$STR_A3_WeaponSway0";
			description = "$STR_A3_WeaponSway1";
			tip = "$STR_A3_WeaponSway2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\WeaponInertia_ca.paa";
			logicalOrder = 21;
		};
	};
	class Weapons
	{
		displayName = "$STR_A3_WeaponHandling";
		logicalOrder = 11;
		class Designator
		{
			displayName = "$STR_A3_Designator1";
			description = "$STR_A3_Designator0";
			tip = "$STR_A3_Designator2";
			arguments[] = {{{"NextAction"}},{{"zoomIn"}},{{"zoomOut"}},{{"nightVision"}},{{"DefaultAction"}},{{"binocular"}},{{"optics"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Designator_ca.paa";
			logicalOrder = 15;
		};
		class Directional
		{
			displayName = "$STR_A3_Directional1";
			description = "$STR_A3_Directional0";
			tip = "";
			arguments[] = {{"str_a3_cfgmagazines_directionalminerangemagazine0"},{"str_a3_cfgmagazines_directionalmineremotemagazine0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Directional_ca.paa";
			logicalOrder = 16;
		};
		class Disarm
		{
			displayName = "$STR_A3_Disarm1";
			description = "$STR_A3_Disarm0";
			tip = "$STR_A3_Disarm2";
			arguments[] = {{{"MoveDown"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Disarm_ca.paa";
			logicalOrder = 9;
		};
		class Flares
		{
			displayName = "$STR_A3_Flares1";
			description = "$STR_A3_Flares0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Flares_ca.paa";
			logicalOrder = 20;
		};
		class Chemlights
		{
			displayName = "$STR_A3_Chemlights1";
			description = "$STR_A3_Chemlights0";
			tip = "";
			arguments[] = {{{"throw"}},{{"cycleThrownItems"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Chemlights_ca.paa";
			logicalOrder = 21;
		};
		class IEDs
		{
			displayName = "$STR_A3_IEDs1";
			description = "$STR_A3_IEDs0";
			tip = "$STR_A3_IEDs2";
			arguments[] = {{{"NextAction"}},{{"ActionContext"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\IEDs_ca.paa";
			logicalOrder = 6;
		};
		class Mines
		{
			displayName = "$STR_A3_Mines1";
			description = "$STR_A3_Mines0";
			tip = "$STR_A3_Mines2";
			arguments[] = {{{"NextAction"}},{{"ActionContext"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Mines_ca.paa";
			logicalOrder = 8;
		};
		class Minesweep
		{
			displayName = "$STR_A3_Minesweep1";
			description = "$STR_A3_Minesweep0";
			tip = "$STR_A3_Minesweep2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Minesweep_ca.paa";
			logicalOrder = 7;
		};
		class Muzzles
		{
			displayName = "$STR_A3_Muzzles1";
			description = "$STR_A3_Muzzles0";
			tip = "";
			arguments[] = {{{"Gear"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Muzzles_ca.paa";
			logicalOrder = 2;
		};
		class Pointers
		{
			displayName = "$STR_A3_Pointers1";
			description = "$STR_A3_Pointers0";
			tip = "$STR_A3_Pointers2";
			arguments[] = {{{"headlights"}},{{"Gear"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Pointer_ca.paa";
			logicalOrder = 3;
			class LaserPointer_sub
			{
				displayName = "$STR_A3_LaserPointer1";
				description = "$STR_A3_LaserPointer2";
				tip = "";
				image = "\A3\Ui_f\data\GUI\Cfg\Hints\Pointer_ca.paa";
				arguments[] = {{{"headlights"}}};
				dlc = -1;
			};
		};
		class Rangefinder
		{
			displayName = "$STR_A3_CFGWEAPONS_RANGEFINDER0";
			description = "$STR_A3_Rangefinder0";
			tip = "";
			arguments[] = {{{"ZeroingUp"}},{{"ZeroingDown"}},{{"gunElevAuto"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Rangefinder_ca.paa";
			logicalOrder = 14;
		};
		class Smokes
		{
			displayName = "$STR_A3_Smokes1";
			description = "$STR_A3_Smokes0";
			tip = "$STR_A3_Smokes2";
			arguments[] = {{{"throw"}},{{"cycleThrownItems"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Smoke_granade_ca.paa";
			logicalOrder = 17;
		};
		class Sniper
		{
			displayName = "$STR_A3_Sniper1";
			description = "$STR_A3_Sniper0";
			tip = "$STR_A3_Sniper2";
			arguments[] = {{{"MoveDown"}},{{"zoomTemp"}},{{"ZeroingUp"}},{{"ZeroingDown"}},{{"HoldBreath"}},{{"DefaultAction"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Sniper_ca.paa";
			logicalOrder = 11;
		};
		class Tracers
		{
			displayName = "$STR_A3_Tracers1";
			description = "$STR_A3_Tracers0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Tracers_ca.paa";
			logicalOrder = 19;
		};
		class UGL
		{
			displayName = "$STR_A3_UGL1";
			description = "$STR_A3_UGL0";
			tip = "$STR_A3_UGL2";
			arguments[] = {{{"nextWeapon"}},{{"zoomTemp"}},{{"DefaultAction"}},{{"ZeroingUp"}},{{"ZeroingDown"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\UGL_ca.paa";
			logicalOrder = 12;
		};
		class Underwater
		{
			displayName = "$STR_A3_Underwater1";
			description = "$STR_A3_Underwater0";
			tip = "";
			arguments[] = {{"str_a3_cfgweapons_arifle_sdar0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Underwater_ca.paa";
			logicalOrder = 13;
		};
		class Flashlight
		{
			displayName = "$STR_A3_Flashlight1";
			description = "$STR_A3_Flashlight0";
			tip = "";
			arguments[] = {{{"headlights"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Pointers_ca.paa";
			logicalOrder = 4;
			class Flashlight_sub
			{
				displayName = "$STR_A3_Flashlight1";
				description = "$STR_A3_Flashlight2";
				tip = "";
				image = "\A3\Ui_f\data\GUI\Cfg\Hints\Pointers_ca.paa";
				arguments[] = {{{"headlights"}}};
				dlc = -1;
			};
		};
	};
	class Spectating
	{
		displayName = "$STR_A3_Spectating0";
		logicalOrder = 6;
		class spectatorinfo
		{
			displayName = "$STR_A3_Spectator_FieldManual_Title_01";
			description = "$STR_A3_Spectating_spectatorinfo0";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 1;
		};
		class spectatorcamera
		{
			displayName = "$STR_A3_Spectator_FieldManual_Title_02";
			description = "$STR_A3_Spectator_FieldManual_Description_02";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 2;
		};
		class SpectatorUnitView
		{
			displayName = "$STR_A3_Spectating_SpectatorUnitView1";
			description = "$STR_A3_Spectator_FieldManual_Description_03";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 3;
		};
		class Spectator3PPView
		{
			displayName = "$STR_A3_Spectator_FieldManual_Title_04";
			description = "$STR_A3_Spectator_FieldManual_Description_04";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 4;
		};
		class SpectatorFreeView
		{
			displayName = "$STR_A3_Spectating_SpectatorFreeView1";
			description = "$STR_A3_Spectator_FieldManual_Description_05";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Thirdperson_ca.paa";
			logicalOrder = 5;
		};
	};
	class PremiumContent
	{
		displayName = "$STR_A3_CfgHints_PremiumContent0";
		logicalOrder = 2;
		category = "Product";
		class PremiumBundle
		{
			displayName = "$STR_A3_CfgHints_PremiumContent_PremiumBundle0";
			description = "$STR_A3_CfgHints_PremiumContent_PremiumBundle1";
			tip = "";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\arma3_bundle_icon_hint.paa";
			logicalOrder = 1;
		};
		class PremiumBundle2
		{
			displayName = "$STR_A3_CfgMods_DLCBundle2_nameShort";
			description = "$STR_A3_CfgMods_DLCBundle2_overview";
			tip = "";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\arma3_bundle_icon_hint.paa";
			logicalOrder = 2;
		};
		class PremiumDefine
		{
			displayName = "$STR_A3_CfgHints_PremiumContent_PremiumDefine0";
			description = "$STR_A3_CfgHints_PremiumContent_PremiumDefine1";
			tip = "";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\a3\ui_f\data\gui\cfg\hints\Commanding_ca.paa";
			logicalOrder = 0;
		};
	};
};
