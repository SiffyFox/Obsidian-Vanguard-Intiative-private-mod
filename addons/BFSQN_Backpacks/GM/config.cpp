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
            "gm_core"
        };
        skipWhenMissingDependencies=1
    };
};

class CfgVehicles {
// Forward declarations needed:
    class gm_dk_army_backpack_73_base;
    class gm_gc_backpack_80_assaultpack_base;
    class gm_gc_backpack_80_assaultpack_lmg_base;
    class gm_ge_army_backpack_90_flk_base;
    class gm_ge_army_backpack_90_trp_base;
    class gm_ge_army_backpack_90_blk_base;
    class gm_ge_army_backpack_90_oli_base;
    class gm_ge_army_backpack_90_cover_win_base;
    class gm_ge_army_backpack_80_oli_base;
    class gm_ge_army_backpack_medic_80_base;
    class gm_gc_backpack_80_lmg_base;
    class vn_o_backpack_base;
    class gm_gc_backpack_r105m_base;
    class gm_ge_backpack_sem35_base;
    class gm_pl_army_backpack_at_80_base;
    class gm_gc_backpack_80_at_base;
    class gm_ge_backpack_satchel_80_base;
    class gm_pl_army_backpack_80_base;

// Backpack modifications:
    class gm_dk_army_backpack_73_oli: gm_dk_army_backpack_73_base { maximumLoad = MAXLOAD; };
    class gm_gc_army_backpack_80_assaultpack_empty_str: gm_gc_backpack_80_assaultpack_base { maximumLoad = MAXLOAD; };
    class gm_gc_army_backpack_80_assaultpack_lmg_empty_str: gm_gc_backpack_80_assaultpack_lmg_base { maximumLoad = MAXLOAD; };
    class gm_ge_army_backpack_90_flk: gm_ge_army_backpack_90_flk_base { maximumLoad = MAXLOAD; };
    class gm_ge_army_backpack_90_trp: gm_ge_army_backpack_90_trp_base { maximumLoad = MAXLOAD; };
    class gm_ge_army_backpack_90_blk: gm_ge_army_backpack_90_blk_base { maximumLoad = MAXLOAD; };
    class gm_ge_army_backpack_90_oli: gm_ge_army_backpack_90_oli_base { maximumLoad = MAXLOAD; };
    class gm_ge_army_backpack_90_cover_win: gm_ge_army_backpack_90_cover_win_base { maximumLoad = MAXLOAD; };
    class gm_ge_army_backpack_80_oli: gm_ge_army_backpack_80_oli_base { maximumLoad = MAXLOAD; };
    class gm_ge_army_backpack_medic_80_oli: gm_ge_army_backpack_medic_80_base { maximumLoad = MAXLOAD; };
    class gm_gc_army_backpack_80_lmg_empty_str: gm_gc_backpack_80_lmg_base { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_sgm_low_01: vn_o_backpack_base { maximumLoad = MAXLOAD; };
    class gm_gc_backpack_r105m_brn: gm_gc_backpack_r105m_base { maximumLoad = MAXLOAD; };
    class gm_ge_backpack_sem35_oli: gm_ge_backpack_sem35_base { maximumLoad = MAXLOAD; };
    class gm_pl_army_backpack_at_80_empty_gry: gm_pl_army_backpack_at_80_base { maximumLoad = MAXLOAD; };
    class gm_gc_army_backpack_80_at_empty_str: gm_gc_backpack_80_at_base { maximumLoad = MAXLOAD; };
    class gm_ge_backpack_satchel_80_blk: gm_ge_backpack_satchel_80_base { maximumLoad = MAXLOAD; };
    class gm_ge_backpack_satchel_80_san: gm_ge_backpack_satchel_80_base { maximumLoad = MAXLOAD; };
    class gm_pl_army_backpack_80_oli: gm_pl_army_backpack_80_base { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_sgm_high_01: vn_o_pack_static_sgm_low_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_sgm_low_02: vn_o_pack_static_sgm_low_01 { maximumLoad = MAXLOAD; };
};