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
            "rhsgref_main"
        };
        skipWhenMissingDependencies=1
    };
};

class CfgVehicles {
// Forward declarations needed:
    class B_Carryall_Base;
    class Bag_Base;

// Backpack modifications:
    class rhsgref_tortila_specter: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class rhsgref_hidf_alicepack: Bag_Base { maximumLoad = MAXLOAD; };
    class rhsgref_ttsko_alicepack: rhsgref_hidf_alicepack { maximumLoad = MAXLOAD; };
    class rhsgref_wdl_alicepack: rhsgref_hidf_alicepack { maximumLoad = MAXLOAD; };
};