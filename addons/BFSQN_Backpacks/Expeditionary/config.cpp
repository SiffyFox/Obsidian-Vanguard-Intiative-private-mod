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
        requiredAddons[] = {,
            "EF_Data"
        };
        skipWhenMissingDependencies=1
    };
};

class CfgVehicles {
// Forward declarations needed:
    class B_AssaultPack_Base;
    class B_Carryall_Base;
    class B_Kitbag_Base;
    class B_TacticalPack_Base;

// Backpack modifications:
    class EF_B_AssaultPack_coy: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class EF_B_Carryall_coy: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class EF_B_Kitbag_coy: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class EF_B_RaiderPack_coy: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class EF_B_RaiderPack_olive: EF_B_RaiderPack_coy { maximumLoad = MAXLOAD; };
    class EF_B_TacticalPack_coy: B_TacticalPack_Base { maximumLoad = MAXLOAD; };
    class EF_B_RaiderPack_black: EF_B_RaiderPack_coy { maximumLoad = MAXLOAD; };
};