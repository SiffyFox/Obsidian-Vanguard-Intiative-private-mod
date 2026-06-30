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
            "rhs_main"
        };
        skipWhenMissingDependencies=1
    };
};

class CfgVehicles {
// Forward declarations needed:
    class B_AssaultPack_Base;
    class rhs_rk_sht_30_emr_engineer;
    class rhs_rk_sht_30_olive_engineer;
    class rhs_rpg;
    class B_Carryall_Base;
    class rhs_assault_umbts_engineer;

// Backpack modifications:
    class rhs_medic_bag: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class rhs_r148: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class rhs_rd54: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class rhs_rd54_emr1: rhs_rd54 { maximumLoad = MAXLOAD; };
    class rhs_rd54_flora2: rhs_rd54 { maximumLoad = MAXLOAD; };
    class rhs_rd54_flora1: rhs_rd54 { maximumLoad = MAXLOAD; };
    class rhs_rd54_vest: rhs_rd54 { maximumLoad = MAXLOAD; };
    class rhs_rd54_vest_emr1: rhs_rd54_emr1 { maximumLoad = MAXLOAD; };
    class rhs_rd54_vest_flora2: rhs_rd54_flora2 { maximumLoad = MAXLOAD; };
    class rhs_rd54_vest_flora1: rhs_rd54_flora1 { maximumLoad = MAXLOAD; };
    class rhs_rk_sht_30_emr_engineer_empty: rhs_rk_sht_30_emr_engineer { maximumLoad = MAXLOAD; };
    class rhs_rk_sht_30_olive_engineer_empty: rhs_rk_sht_30_olive_engineer { maximumLoad = MAXLOAD; };
    class rhs_rpg_empty: rhs_rpg { maximumLoad = MAXLOAD; };
    class rhs_rpg_2: rhs_rpg { maximumLoad = MAXLOAD; };
    class rhs_rpg_6b2: rhs_rpg_2 { maximumLoad = MAXLOAD; };
    class rhs_rpg_6b3: rhs_rpg_2 { maximumLoad = MAXLOAD; };
    class rhs_sidor: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class rhs_tortila_grey: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class rhs_tortila_khaki: rhs_tortila_grey { maximumLoad = MAXLOAD; };
    class rhs_tortila_olive: rhs_tortila_grey { maximumLoad = MAXLOAD; };
    class rhs_assault_umbts: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class rhs_assault_umbts_engineer_empty: rhs_assault_umbts_engineer { maximumLoad = MAXLOAD; };
    class rhs_rk_sht_30_emr: rhs_assault_umbts { maximumLoad = MAXLOAD; };
    class rhs_rk_sht_30_olive: rhs_assault_umbts { maximumLoad = MAXLOAD; };
    class rhs_tortila_black: rhs_tortila_grey { maximumLoad = MAXLOAD; };
    class rhs_tortila_emr: rhs_tortila_grey { maximumLoad = MAXLOAD; };
};