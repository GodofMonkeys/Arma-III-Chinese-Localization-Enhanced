////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\language_f_heli\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:21 2019 : 'file' last modified on Fri Jan 18 22:37:35 2019
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
	class A3_Language_F_Heli
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Helicopters - Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Heli"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgHints
{
	class Slingloading
	{
		displayName = "$STR_A3_SlingLoad1";
		logicalOrder = 14;
		class SlingLoad
		{
			displayName = "$STR_A3_SlingLoad1";
			description = "$STR_A3_SlingLoad2";
			tip = "$STR_A3_SlingLoad3";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\SlingLoading_ca.paa";
			arguments[] = {};
		};
		class SlingLoadManager
		{
			displayName = "$STR_A3_SlingLoadManager1";
			description = "$STR_A3_SlingLoadManager2";
			tip = "";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\SLAssistant_ca.paa";
			arguments[] = {{{"HeliSlingLoadManager"}}};
		};
		class CargoHook
		{
			displayName = "$STR_A3_CargoHook1";
			description = "$STR_A3_CargoHook2";
			tip = "";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\HookingUp_ca.paa";
			arguments[] = {{{"HeliRopeAction"}}};
		};
		class CargoUnhook
		{
			displayName = "$STR_A3_CargoUnhook1";
			description = "$STR_A3_CargoUnhook2";
			tip = "$STR_A3_CargoUnhook3";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Detaching_ca.paa";
			arguments[] = {{{"HeliRopeAction"}}};
		};
		class SlingLoadCamera
		{
			displayName = "$STR_A3_SlingLoadCamera1";
			description = "$STR_A3_SlingLoadManager3";
			tip = "";
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\Camera_ca.paa";
			arguments[] = {{{"PilotCamera"}}};
		};
	};
	class GroundSupport
	{
		displayName = "$STR_A3_mp_groundsupport_modulemptypegroundsupport_title";
		dlc = -1;
		class GS_GroupMarkers
		{
			displayName = "$STR_A3_mp_groundsupport_hints_group_markers_label";
			description = "$STR_A3_mp_groundsupport_hints_group_markers_main_text";
			tip = "";
			image = "\a3\ui_f\data\gui\cfg\hints\UnitType_CA.paa";
			arguments[] = {{{"TeamSwitch"}}};
		};
		class GS_ScoreAwarded
		{
			displayName = "$STR_A3_mp_groundsupport_hints_score_increased_label";
			description = "$STR_A3_mp_groundsupport_hints_score_increased_main_text";
			tip = "$STR_A3_mp_groundsupport_hints_score_increased_xtra_text";
			image = "\a3\ui_f\data\gui\cfg\hints\CompetitiveRules_ca.paa";
		};
		class GS_TacticalStrikes
		{
			displayName = "$STR_A3_mp_groundsupport_hints_tactical_strikes_label";
			description = "$STR_A3_mp_groundsupport_hints_tactical_strikes_main_text";
			tip = "$STR_A3_mp_groundsupport_hints_tactical_strikes_xtra_text";
			image = "\a3\ui_f\data\gui\cfg\hints\Target_ca.paa";
		};
		class GS_TransportRequest
		{
			displayName = "$STR_A3_mp_groundsupport_hints_transport_request_label";
			description = "$STR_A3_mp_groundsupport_hints_transport_request_main_text";
			tip = "$STR_A3_mp_groundsupport_hints_transport_request_xtra_text";
			image = "\a3\ui_f\data\gui\cfg\hints\Waypoint_ca.paa";
			arguments[] = {{{"TeamSwitch"}}};
		};
		class GS_MedevacRequest
		{
			displayName = "$STR_A3_mp_groundsupport_hints_medevac_request_label";
			description = "$STR_A3_mp_groundsupport_hints_medevac_request_main_text";
			tip = "$STR_A3_mp_groundsupport_hints_medevac_request_xtra_text";
			image = "\a3\ui_f\data\gui\cfg\hints\Injury_ca.paa";
		};
		class GS_ResupplyRequest
		{
			displayName = "$STR_A3_mp_groundsupport_hints_resupply_request_label";
			description = "$STR_A3_mp_groundsupport_hints_resupply_request_main_text";
			tip = "$STR_A3_mp_groundsupport_hints_resupply_request_xtra_text";
			image = "\a3\ui_f\data\gui\cfg\hints\Slots_ca.paa";
		};
		class GS_CASRequest
		{
			displayName = "$STR_A3_mp_groundsupport_hints_cas_request_label";
			description = "$STR_A3_mp_groundsupport_hints_cas_request_main_text";
			tip = "$STR_A3_mp_groundsupport_hints_cas_request_xtra_text";
			image = "\a3\ui_f\data\gui\cfg\hints\Radar_ca.paa";
		};
		class GS_CrashLanding
		{
			displayName = "$STR_A3_mp_groundsupport_hints_crash_landing_label";
			description = "$STR_A3_mp_groundsupport_hints_crash_landing_main_text";
			tip = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Incapacitated_ca.paa";
		};
	};
	class Vehicle
	{
		class VehicleTurrets
		{
			displayName = "$STR_A3_VehicleTurrets1";
			description = "$STR_A3_VehicleTurrets2";
			tip = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Use_ca.paa";
			arguments[] = {};
			logicalOrder = 11;
		};
		class LandingGear
		{
			displayName = "$STR_A3_HeliLandingGear_main_title";
			description = "$STR_A3_HeliLandingGear_main_desc";
			tip = "$STR_A3_HeliLandingGear_main_tip";
			image = "\a3\ui_f\data\gui\cfg\hints\Use_ca.paa";
			arguments[] = {{{"LandGear"}},{{"LandGearUp"}}};
			logicalOrder = 21;
		};
	};
	class Helicopters
	{
		displayName = "$STR_A3_HeliClass_name";
		logicalOrder = 13;
		class HeliVelocityVector
		{
			displayName = "$STR_A3_helivelocityvector_main_title";
			description = "$STR_A3_helivelocityvector_main_desc";
			tip = "$STR_A3_helivelocityvector_main_hint";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\VelocityVector_ca.paa";
			arguments[] = {};
			logicalOrder = 4;
		};
		class HeliCockpitView
		{
			displayName = "$STR_A3_helilookdown_main_title";
			description = "$STR_A3_helilookdown_main_desc";
			tip = "";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Pheripheal_vision_ca.paa";
			arguments[] = {{{"LookAround"}},{{"LookDown"}},{{"LookUp"}},{{"LookCenter"}}};
			logicalOrder = 5;
		};
		class HeliPitch
		{
			displayName = "$STR_A3_HeliPitch_main_title";
			description = "$STR_A3_HeliPitch_main_desc";
			tip = "$STR_A3_HeliPitch_main_tip";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Pheripheal_vision_ca.paa";
			arguments[] = {{{"HeliForward"}},{{"HeliBack"}}};
			logicalOrder = 6;
			class HeliPitch_sub1
			{
				displayName = "$STR_A3_HeliPitch_sub1_title";
				description = "$STR_A3_HeliPitch_sub1_desc";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_pitch_ca.paa'/>";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_pitch_ca.paa";
				arguments[] = {{{"HeliForward"}},{{"HeliBack"}}};
			};
			class HeliPitch_sub2
			{
				displayName = "$STR_A3_HeliPitch_sub2_title";
				description = "$STR_A3_HeliPitch_sub2_desc";
				tip = "";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_pitch_ca.paa";
				arguments[] = {{{"AutoHover"}}};
			};
			class HeliPitch_sub3
			{
				displayName = "$STR_A3_HeliPitch_sub3_title";
				description = "$STR_A3_HeliPitch_sub3_desc";
				tip = "$STR_A3_HeliPitch_sub3_tip";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_pitch_ca.paa";
				arguments[] = {{{"HeliForward"}},{{"HeliBack"}},{{"AutoHover"}},"format [""<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_pitch_ca.paa'/>""]"};
			};
			class HeliPitch_sub4
			{
				displayName = "$STR_A3_HeliPitch_sub4_title";
				description = "$STR_A3_HeliPitch_sub4_desc";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_pitch_ca.paa'/> <img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_lift_ca.paa'/>";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_pitch_ca.paa";
				arguments[] = {{{"HeliForward"}},{{"HeliDown"}}};
			};
		};
		class HeliRoll
		{
			displayName = "$STR_A3_HeliRoll_main_title";
			description = "$STR_A3_HeliRoll_main_desc";
			tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_cyclic_ca.paa'/>";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_roll_ca.paa";
			arguments[] = {{{"HeliCyclicLeft"}},{{"HeliCyclicRight"}}};
			logicalOrder = 7;
			class HeliRoll_sub1
			{
				displayName = "$STR_A3_HeliRoll_sub1_title";
				description = "$STR_A3_HeliRoll_sub1_desc";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_roll_ca.paa'/>";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_roll_ca.paa";
				arguments[] = {{{"HeliCyclicLeft"}},{{"HeliCyclicRight"}}};
			};
			class HeliRoll_sub2
			{
				displayName = "$STR_A3_HeliRoll_sub2_title";
				description = "$STR_A3_HeliRoll_sub2_desc";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_roll_ca.paa'/>";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_roll_ca.paa";
				arguments[] = {{{"HeliCyclicLeft"}},{{"HeliCyclicRight"}}};
			};
			class HeliRoll_sub3
			{
				displayName = "$STR_A3_HeliRoll_sub3_title";
				description = "$STR_A3_HeliRoll_sub3_desc";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_pitch_ca.paa'/>";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_roll_ca.paa";
				arguments[] = {{{"HeliBack"}}};
			};
		};
		class HeliYaw
		{
			displayName = "$STR_A3_HeliYaw_main_title";
			description = "$STR_A3_HeliYaw_main_desc";
			tip = "$STR_A3_HeliYaw_main_tip";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_yaw_ca.paa";
			arguments[] = {{{"HeliRudderLeft"}},{{"HeliRudderRight"}},"format [""<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_tail_rotor_ca.paa'/>""]"};
			logicalOrder = 8;
			class HeliYaw_sub1
			{
				displayName = "$STR_A3_HeliYaw_sub1_title";
				description = "$STR_A3_HeliYaw_sub1_desc";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_yaw_ca.paa'/>";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_yaw_ca.paa";
				arguments[] = {{{"HeliRudderLeft"}},{{"HeliRudderRight"}}};
			};
			class HeliYaw_sub2
			{
				displayName = "$STR_A3_HeliYaw_sub2_title";
				description = "$STR_A3_HeliYaw_sub2_desc";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_roll_ca.paa'/>";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_yaw_ca.paa";
				arguments[] = {{{"HeliCyclicLeft"}},{{"HeliCyclicRight"}}};
			};
		};
		class HeliCollective
		{
			displayName = "$STR_A3_HeliCollective_main_title";
			description = "$STR_A3_HeliCollective_main_desc";
			tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_collective_ca.paa'/>%1";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_lift_ca.paa";
			arguments[] = {{{"HeliUp"}},{{"HeliDown"}}};
			logicalOrder = 9;
			class HeliCollective_sub1
			{
				displayName = "$STR_A3_HeliCollective_sub1_title";
				description = "$STR_A3_HeliCollective_sub1_desc";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_lift_ca.paa'/>";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_lift_ca.paa";
				arguments[] = {{{"HeliUp"}},{{"HeliDown"}}};
			};
			class HeliCollective_sub2
			{
				displayName = "$STR_A3_HeliCollective_sub2_title";
				description = "$STR_A3_HeliCollective_sub2_desc";
				tip = "<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_pitch_ca.paa'/> <img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_control_lift_ca.paa'/>";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_axes_lift_ca.paa";
				arguments[] = {{{"HeliForward"}},{{"HeliUp"}}};
			};
		};
		class HeliGroundEffect
		{
			displayName = "$STR_A3_HeliGroundEffect_main_title";
			description = "$STR_A3_HeliGroundEffect_main_desc";
			tip = "$STR_A3_HeliGroundEffect_main_tip";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_ground_effect2_ca.paa";
			arguments[] = {{{"AutoHover"}},"format [""<img size='5' align='center' image = '\a3\Ui_f\data\GUI\Cfg\Hints\Heli_ground_effect_ca.paa'/>""]"};
			logicalOrder = 10;
			class HeliGroundEffect_sub1
			{
				displayName = "$STR_A3_HeliGroundEffect_sub1_title";
				description = "$STR_A3_HeliGroundEffect_sub1_desc";
				tip = "";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_ground_effect2_ca.paa";
				arguments[] = {{{"AutoHover"}}};
			};
		};
		class HeliTranslationalLift
		{
			displayName = "$STR_A3_HeliTranslationalLift_main_title";
			description = "$STR_A3_HeliTranslationalLift_main_desc";
			tip = "$STR_A3_HeliTranslationalLift_main_tip";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_translational_lift_ca.paa";
			arguments[] = {};
			logicalOrder = 11;
		};
		class HeliVortexRing
		{
			displayName = "$STR_A3_helivortexring_main_title";
			description = "$STR_A3_helivortexring_main_desc";
			tip = "$STR_A3_helivortexring_main_tip";
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			arguments[] = {};
			logicalOrder = 12;
		};
		class HeliTrim
		{
			displayName = "$STR_A3_HeliTrim_main_title";
			description = "$STR_A3_HeliTrim_main_desc";
			tip = "";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_tail_rotor_ca.paa";
			arguments[] = {{{"HelicopterTrimOn"}}};
			logicalOrder = 13;
		};
		class HeliStressDamage
		{
			displayName = "$STR_A3_HeliStressDamage_main_title";
			description = "$STR_A3_HeliStressDamage_main_desc";
			tip = "";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_stressdamage_ca.paa";
			arguments[] = {{{"HeliDown"}}};
			logicalOrder = 14;
		};
		class HeliAutorotation
		{
			displayName = "$STR_A3_HeliAutorotation_main_title";
			description = "$STR_A3_HeliAutorotation_main_desc";
			tip = "";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_autorotation_ca.paa";
			arguments[] = {{{"HeliDown"}},{{"HeliForward"}},{{"HeliUp"}}};
			logicalOrder = 15;
			class HeliAutorotation_sub1
			{
				displayName = "$STR_A3_HeliAutorotation_main_title";
				description = "$STR_A3_HeliAutorotation_sub1_desc";
				tip = "$STR_A3_HeliAutorotation_sub1_tip";
				image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_autorotation_ca.paa";
				arguments[] = {{{"HeliDown"}},{{"HeliForward"}},{{"HeliUp"}}};
			};
		};
		class HeliTailLoss
		{
			displayName = "$STR_A3_HeliTailLoss_main_title";
			description = "$STR_A3_HeliTailLoss_main_desc";
			tip = "";
			image = "\a3\Ui_f\data\GUI\Cfg\Hints\Heli_tail_rotor_ca.paa";
			arguments[] = {};
			logicalOrder = 16;
		};
		class AutoHover
		{
			displayName = "$STR_A3_AutoHover1";
			description = "$STR_A3_AutoHover2";
			tip = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Use_ca.paa";
			arguments[] = {{{"AutoHover"}}};
			logicalOrder = 2;
		};
		class HeliAdvancedFlightModel
		{
			displayName = "$STR_A3_HeliAdvancedFM_main_title";
			description = "$STR_A3_HeliAdvancedFM_main_desc";
			tip = "$STR_A3_HeliAdvancedFM_main_tip";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 1;
		};
		class HeliAerialCombat
		{
			displayName = "$STR_A3_vr_heli_advanced_stage4_title";
			description = "$STR_A3_HeliAerialCombat_desc";
			tip = "";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			logicalOrder = 3;
		};
	};
	class TimeTrials
	{
		class HelicopterCheckPoints
		{
			displayName = "$STR_A3_TimeTrials_HelicopterCPs0";
			description = "$STR_A3_TimeTrials_HelicopterCPs1";
			tip = "$STR_A3_TimeTrials_HelicopterCPs2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Checkpoints_ca.paa";
			logicalOrder = 5;
		};
		class HelicopterSlingLoading
		{
			displayName = "$STR_A3_TimeTrials_SL0";
			description = "$STR_A3_TimeTrials_SL1";
			tip = "$STR_A3_TimeTrials_SL2";
			arguments[] = {};
			image = "\A3\Ui_f\data\GUI\Cfg\Hints\SlingLoading_ca.paa";
			logicalOrder = 6;
		};
		class HelicopterTips
		{
			displayName = "$STR_A3_TimeTrials_HelicopterTips0";
			description = "$STR_A3_TimeTrials_HelicopterTips1";
			tip = "$STR_A3_TimeTrials_HelicopterTips2";
			arguments[] = {};
			image = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
			logicalOrder = 7;
		};
	};
	class VehicleList
	{
		class Huron
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_HURON_TITLE_F0"},{"STR_A3_HURON_DESC_F0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 304380;
			vehicle = "B_Heli_Transport_03_F";
			modelScale = 0.4;
			logicalOrder = 11;
		};
		class Taru
		{
			displayName = "%11";
			description = "%12";
			tip = "";
			arguments[] = {{"STR_A3_TARU_TITLE_F0"},{"STR_A3_TARU_DESC_F0"}};
			image = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
			dlc = 304380;
			vehicle = "O_Heli_Transport_04_F";
			modelScale = 0.6;
			logicalOrder = 25;
		};
	};
	class DlcMessage
	{
		displayName = "";
		dlc = -1;
		class Dlc304380
		{
			displayName = "$STR_A3_CFGMODS_HELI2";
			description = "$STR_A3_CfgHints_DlcMessage_Dlc2885201";
			tip = "$STR_A3_CfgHints_DlcMessage_Dlc28852002";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\a3\data_f_heli\logos\arma3_heli_icon_hint_ca.paa";
			dlc = -1;
		};
		class Dlc304380FM
		{
			displayName = "$STR_A3_CFGMODS_HELI2";
			description = "$STR_A3_CfgHints_DlcMessage_Dlc2885201";
			tip = "$STR_A3_CfgHints_DlcMessage_Dlc28852002";
			arguments[] = {{{"OpenDlcScreen"}}};
			image = "\a3\data_f_heli\logos\arma3_heli_icon_hint_ca.paa";
			dlc = -1;
		};
	};
	class PremiumContent
	{
		class PremiumHeli
		{
			displayName = "$STR_A3_CfgHints_PremiumContent_PremiumHeli0";
			description = "$STR_A3_CfgHints_PremiumContent_PremiumHeli1";
			tip = "$STR_A3_CfgHints_PremiumContent_PremiumKarts2";
			arguments[] = {};
			image = "\a3\data_f_heli\logos\arma3_heli_icon_hint_ca.paa";
			logicalOrder = 4;
		};
	};
};
