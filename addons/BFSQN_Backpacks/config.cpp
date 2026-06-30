#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = SPOKE;
        author = AUTHOR;
        requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "BFSQN_private_core"
        };
    };
};

class CfgVehicles {
    class Weapon_Bag_Base;

    class BFSQN_Infinite_BackpackF: Weapon_Bag_Base
	{
		scope = 2;
		displayName = "Infinite Invisible Backpack";
		isbackpack = 1;
		model = "\A3\weapons_f\empty"
		maximumLoad = 9999999;
	};
};

