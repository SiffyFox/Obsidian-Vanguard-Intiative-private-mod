#include "script_component.hpp"
#include "../maxload.hpp"

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
            "BFSQN_private_core",
            "Weapons_1_F_lxWS"
        };
        skipWhenMissingDependencies=1
    };
};

class CfgVehicles {
// Forward declarations needed:
    class B_AssaultPack_khk;
    class B_Carryall_mcamo;
    class B_Kitbag_rgr;

// Backpack modifications:
    class B_AssaultPack_desert_lxWS: B_AssaultPack_khk { maximumLoad = MAXLOAD; };
    class B_Carryall_desert_lxWS: B_Carryall_mcamo { maximumLoad = MAXLOAD; };
    class B_Kitbag_desert_lxWS: B_Kitbag_rgr { maximumLoad = MAXLOAD; };
};