////////////////////////////////////////////////////////////////////
//DeRap: 新增資料夾\languagemissions_f_gamma\config.bin
//Produced from mikero's Dos Tools Dll version 6.80
//'now' is Sun Mar 31 23:01:51 2019 : 'file' last modified on Fri Jan 18 21:17:39 2019
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
	class A3_LanguageMissions_F_Gamma
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 - Mission Texts and Translations";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_LanguageMissions_F_Beta"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
