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
            "rhssaf_main"
        };
        skipWhenMissingDependencies=1;
    };
};

class CfgVehicles {
// Forward declarations needed:
    class Bag_Base;
    class rhssaf_Kitbag_base;

// Backpack modifications:
    class rhssaf_alice_md2camo: Bag_Base { maximumLoad = MAXLOAD; };
    class rhssaf_alice_smb: Bag_Base { maximumLoad = MAXLOAD; };
    class rhssaf_kitbag_digital: rhssaf_Kitbag_base { maximumLoad = MAXLOAD; };
    class rhssaf_kitbag_md2camo: rhssaf_Kitbag_base { maximumLoad = MAXLOAD; };
    class rhssaf_kitbag_smb: rhssaf_Kitbag_base { maximumLoad = MAXLOAD; };
};