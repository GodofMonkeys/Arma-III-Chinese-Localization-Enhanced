////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Jul 04 20:06:31 2017 : Created on Tue Jul 04 20:06:31 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=13
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

//Class languagemissions_f_jets : config.bin{
class CfgPatches
{
	class A3_LanguageMissions_F_Jets
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Jets - Mission Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Jets"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
//};
