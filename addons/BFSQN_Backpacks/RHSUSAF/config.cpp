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
            "rhsusf_vehicles"
        };
        skipWhenMissingDependencies=1
    };
};

class CfgVehicles {
// Forward declarations needed:
    class B_AssaultPack_Base;
    class B_AssaultPack_rgr;

// Backpack modifications:
    class rhsusf_assault_eagleaiii_ucp: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class rhsusf_assault_eagleaiii_ocp: rhsusf_assault_eagleaiii_ucp { maximumLoad = MAXLOAD; };
    class rhsusf_assault_eagleaiii_coy: rhsusf_assault_eagleaiii_ucp { maximumLoad = MAXLOAD; };
    class B_rhsusf_B_BACKPACK: rhsusf_assault_eagleaiii_ocp { maximumLoad = MAXLOAD; };
    class rhsusf_falconii_coy: B_AssaultPack_rgr { maximumLoad = MAXLOAD; };
    class rhsusf_falconii_mc: B_AssaultPack_rgr { maximumLoad = MAXLOAD; };
    class rhsusf_falconii: B_AssaultPack_rgr { maximumLoad = MAXLOAD; };
};