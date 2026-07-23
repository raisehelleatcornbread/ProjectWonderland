class CfgPatches
{
	class Wonderland_Framework
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class Wonderland_Framework
	{
		dir = "Wonderland_Framework";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Project Wonderland Framework";
		credits = "Project Wonderland";
		author = "Project Wonderland";
		authorID = "";
		version = "0.1.0-alpha";
		type = "mod";
		dependencies[] = {"Game", "World", "Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Wonderland_Framework/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Wonderland_Framework/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Wonderland_Framework/Scripts/5_Mission"};
			};
		};
	};
};
