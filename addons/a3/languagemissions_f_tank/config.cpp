////////////////////////////////////////////////////////////////////
//DeRap: languagemissions_f_tank\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Sun May 20 20:55:42 2018 : 'file' last modified on Thu Apr 19 21:55:31 2018
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
	class A3_LanguageMissions_F_Tank
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Tank - Mission Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Tank"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
