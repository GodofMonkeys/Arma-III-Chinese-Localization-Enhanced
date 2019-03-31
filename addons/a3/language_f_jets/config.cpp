////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_jets\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:41 2019 : 'file' last modified on Fri Jan 18 22:29:07 2019
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
	class A3_Language_F_Jets
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Jets - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class PremiumContent
	{
		class PremiumJets
		{
			displayName = "$STR_A3_CfgHints_PremiumContent_PremiumJets0";
			description = "$STR_A3_CfgHints_PremiumContent_PremiumJets1";
			tip = "$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[] = {};
			image = "\a3\data_f_jets\logos\jets_icon_hint_ca.paa";
			logicalOrder = 6;
		};
	};
	class Common
	{
		class Panels
		{
			displayName = "$STR_A3_Hint_Panels_title";
			description = "$STR_A3_Hint_Panels_desc";
			tip = "";
			arguments[] = {{{"ListLeftVehicleDisplay"}},{{"ListRightVehicleDisplay"}},{{"NextModeLeftVehicleDisplay"}},{{"NextModeRightVehicleDisplay"}}};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\UIPanels_ca.paa";
		};
	};
	class Vehicle
	{
		class ILSLanding
		{
			displayName = "$STR_A3_Hint_ILSLanding_title";
			description = "$STR_A3_Hint_ILSLanding_desc";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\ILSApproach_ca.paa";
		};
		class Sensors
		{
			displayName = "$STR_A3_Hint_Sensors_title";
			description = "$STR_A3_Hint_Sensors_desc";
			tip = "$STR_A3_Hint_Sensors_tip";
			arguments[] = {{{"ListRightVehicleDisplay"}},{{"vehLockTargets"}},{{"LockTarget"}}};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\Sensors_ca.paa";
		};
		class SensorTypes
		{
			displayName = "$STR_A3_Hint_SensorTypes_title";
			description = "$STR_A3_Hint_SensorTypes_desc";
			tip = "$STR_A3_Hint_SensorTypes_tip";
			arguments[] = {};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\SensorsTypes_ca.paa";
		};
		class SensorDisplay
		{
			displayName = "$STR_A3_Hint_SensorDisplay_title";
			description = "$STR_A3_Hint_SensorDisplay_desc";
			tip = "";
			arguments[] = {"format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorUnknown') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconUnknownAir')]","format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorUnknown') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconUnknownGround')]","format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorUnknown') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconUnknownMan')]","format [""<img size='1' color = '%1' align='left' image = '%2'/><img size='1' color = '%1' align='left' image = '%3'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorFriendly') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconFriendlyAir'),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconFriendlyGround')]","format [""<img size='1' color = '%1' align='left' image = '%2'/><img size='1' color = '%1' align='left' image = '%3'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorUnknown') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconUnknownAir'),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconUnknownGround')]","format [""<img size='1' color = '%1' align='left' image = '%2'/><img size='1' color = '%1' align='left' image = '%3'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorEnemy') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconEnemyAir'),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconEnemyGround')]","format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'threats' >> 'colorMissile') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'threats' >> 'iconmissile')]","format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorMarked') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconMarkedTarget')]","format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorAssigned') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconAssignedTarget')]","format [""<img size='1' color = '%1' align='left' image = 'A3\Ui_F_Jets\Data\GUI\Cfg\Hints\icon_text\Hint_threatSector_ca.paa'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'threats' >> 'colorLocking') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML), getText(configfile >> 'RscCustomInfoSensors' >> 'threats' >> 'iconsector')]","format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorEnemy') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconLaserTarget')]","format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorEnemy') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconNVTarget')]","format [""<img size='1' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'colorUnknown') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'RscCustomInfoSensors' >> 'targets' >> 'iconActiveSensor')]"};
			image = "A3\Ui_F_Jets\Data\GUI\Cfg\Hints\SensorsRadar_ca.paa";
		};
		class Datalink
		{
			displayName = "$STR_A3_Hint_Datalink_title";
			description = "$STR_A3_Hint_Datalink_desc";
			tip = "";
			arguments[] = {{{"ListRightVehicleDisplay"}},"format [""<img size='1.5' color = '%1' align='left' image = '%2'/>"",(((configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'MarkedTarget' >> 'color') call bis_fnc_colorConfigToRGBA) call bis_fnc_colorRGBAtoHTML),getText(configfile >> 'CfgInGameUI' >> 'Cursor' >> 'Targeting' >> 'MarkedTarget' >> 'texture')]"};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\SensorsDataLink_ca.paa";
		};
		class Bombs
		{
			displayName = "$STR_A3_Hint_Bombs_title";
			description = "$STR_A3_Hint_Bombs_desc";
			tip = "$STR_A3_Hint_Bombs_tip";
			arguments[] = {{{"LockTarget"}}};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\WeaponsBombs_ca.paa";
		};
		class CarrierTakeOff
		{
			displayName = "$STR_A3_Hint_CarrierTakeOff_title";
			description = "$STR_A3_Hint_CarrierTakeOff_desc";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftTakeOffCarrier_ca.paa";
		};
		class CarrierLanding
		{
			displayName = "$STR_A3_Hint_CarrierLanding_title";
			description = "$STR_A3_Hint_CarrierLanding_desc";
			tip = "$STR_A3_Hint_CarrierLanding_tip";
			arguments[] = {};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftLandCarrier_ca.paa";
		};
		class TargetingCamera
		{
			displayName = "$STR_A3_Hint_TargetingCamera_title";
			description = "$STR_A3_Hint_TargetingCamera_desc";
			tip = "";
			arguments[] = {{{"PilotCamera"}},{{"vehLockTurretView"}},{{"LookCenter"}}};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftTgtCamera_ca.paa";
		};
		class HUDs
		{
			displayName = "$STR_A3_Hint_HUDs_title";
			description = "$STR_A3_Hint_HUDs_desc";
			tip = "";
			arguments[] = {"format [""<img size='0.5' color = '%1' align='left' image = 'A3\Ui_F_Jets\Data\GUI\Cfg\Hints\icon_text\Hint_waterline_ca.paa'/>"",([0.15, 1.0, 0.15, 1.0] call bis_fnc_colorRGBAtoHTML)]","format [""<img size='1' color = '%1' align='left' image = 'A3\Ui_F_Jets\Data\GUI\Cfg\Hints\icon_text\Hint_FPV_ca.paa'/>"",([0.15, 1.0, 0.15, 1.0] call bis_fnc_colorRGBAtoHTML)]","format [""<img size='1' color = '%1' align='left' image = 'A3\Ui_F_Jets\Data\GUI\Cfg\Hints\icon_text\Hint_tgtbox_ca.paa'/>"",([0.15, 1.0, 0.15, 1.0] call bis_fnc_colorRGBAtoHTML)]"};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftHUD_ca.paa";
		};
		class AirplaneDamage
		{
			displayName = "$STR_A3_Hint_AirplaneDamage_title";
			description = "$STR_A3_Hint_AirplaneDamage_desc";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftDamage_ca.paa";
		};
		class FCS
		{
			displayName = "$STR_A3_Hint_FCS_title";
			description = "$STR_A3_Hint_FCS_desc";
			tip = "$STR_A3_Hint_FCS_tip";
			arguments[] = {{{"LockTarget"}}};
			image = "a3\Ui_f\data\GUI\Cfg\Hints\Zeroing_ca.paa";
		};
		class Loadout
		{
			displayName = "$STR_A3_Hint_Loadout_title";
			description = "$STR_A3_Hint_Loadout_desc";
			tip = "";
			arguments[] = {{{"LockTarget"}}};
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftFireControlSystems_ca.paa";
		};
	};
	class VehicleList
	{
		class Plane_Fighter_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Fighter_01_name"},{"STR_A3_Fighter_01_armory_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 601670;
			vehicle = "B_Plane_Fighter_01_F";
			modelScale = 0.4;
			logicalOrder = 11;
		};
		class Plane_Fighter_02
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Fighter_02_name"},{"STR_A3_Fighter_02_armory_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 601670;
			vehicle = "O_Plane_Fighter_02_F";
			modelScale = 0.4;
			logicalOrder = 39;
		};
		class Plane_Fighter_04
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Fighter_04_name"},{"STR_A3_Fighter_04_armory_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 601670;
			vehicle = "I_Plane_Fighter_04_F";
			modelScale = 0.4;
			logicalOrder = 2;
		};
		class UAV_05
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_UCAV_05_name"},{"STR_A3_UCAV_05_armory_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 601670;
			vehicle = "B_UAV_05_F";
			modelScale = 0.4;
			logicalOrder = 40;
		};
	};
	class WeaponList
	{
		class AAA_System_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Phalanx_name"},{"STR_A3_Phalanx_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_AAA_System_01_F";
			dlc = 601670;
			logicalOrder = 21;
		};
		class SAM_System_01
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Mk49_name"},{"STR_A3_Mk49_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_SAM_System_01_F";
			dlc = 601670;
			logicalOrder = 15;
		};
		class SAM_System_02
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_Mk21_name"},{"STR_A3_Mk21_description"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			vehicle = "B_SAM_System_02_F";
			dlc = 601670;
			logicalOrder = 13;
		};
	};
};
