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
            "vn_data_f"
        };
        skipWhenMissingDependencies=1
    };
};

class CfgVehicles {
// Forward declarations needed:
    class vn_b_backpack_base;
    class vn_bpack_static_base;
    class vn_o_backpack_base;
    class vn_c_backpack_base;

// Backpack modifications:
    class vn_b_pack_pfield_01: vn_b_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_pfield_02: vn_b_pack_pfield_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_p08_01: vn_b_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_p08_02: vn_b_pack_p08_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_p44_01: vn_b_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_p44_02: vn_b_pack_p44_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_p44_03: vn_b_pack_p44_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m2_high_01: vn_b_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m2_low_01: vn_b_pack_static_m2_high_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m2_01: vn_b_pack_static_m2_high_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m29_01: vn_b_pack_static_m2_high_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m60_high_01: vn_b_pack_static_m2_high_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m60_low_01: vn_b_pack_static_m2_high_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_mk18: vn_b_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_lw_01: vn_b_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_lw_03: vn_b_pack_lw_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_base_01: vn_bpack_static_base { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_m1910_low_01: vn_o_backpack_base { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_type56rr_01: vn_o_backpack_base { maximumLoad = MAXLOAD; };
    class vn_o_pack_01: vn_o_backpack_base { maximumLoad = MAXLOAD; };
    class vn_o_pack_02: vn_o_pack_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_t884_01: vn_o_pack_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_01: vn_b_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_trp_01: vn_b_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_trp_04: vn_b_pack_trp_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_trp_02: vn_b_pack_trp_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_m41_01: vn_b_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_m41_05: vn_b_pack_m41_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_m41_02: vn_b_pack_m41_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_trp_03: vn_b_pack_trp_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_05: vn_b_pack_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_base_01: vn_bpack_static_base { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_sgm_low_01: vn_o_backpack_base { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_m1910_high_01: vn_o_pack_static_m1910_low_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_dp28_01: vn_o_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_trp_04_02: vn_b_pack_trp_04 { maximumLoad = MAXLOAD; };
    class vn_b_pack_lw_06: vn_b_pack_lw_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_lw_07: vn_b_pack_lw_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m2_scoped_high_01: vn_b_backpack_base { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_tow: vn_b_pack_static_m2_high_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_p08_03: vn_b_pack_p08_01 { maximumLoad = MAXLOAD; };
    class vn_c_pack_01: vn_c_backpack_base { maximumLoad = MAXLOAD; };
    class vn_c_pack_02: vn_c_pack_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_lw_04: vn_b_pack_lw_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m1919a4_high_01: vn_b_pack_static_m2_high_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m1919a4_low_01: vn_b_pack_static_m2_high_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m1919a6_01: vn_b_pack_static_m2_high_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_m2_scoped_low_01: vn_b_pack_static_m2_scoped_high_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_m5_01: vn_b_pack_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_lw_05: vn_b_pack_lw_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_lw_02: vn_b_pack_lw_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_prc77_01: vn_b_pack_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_trp_03_02: vn_b_pack_trp_03 { maximumLoad = MAXLOAD; };
    class vn_b_pack_trp_01_02: vn_b_pack_trp_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_trp_02_02: vn_b_pack_trp_02 { maximumLoad = MAXLOAD; };
    class vn_b_pack_arvn_01: vn_b_pack_m41_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_arvn_02: vn_b_pack_arvn_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_arvn_04: vn_b_pack_arvn_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_05_02: vn_b_pack_05 { maximumLoad = MAXLOAD; };
    class vn_b_pack_01_02: vn_b_pack_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_04: vn_o_pack_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_dshkm_high_02: vn_o_pack_static_dp28_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_dshkm_low_01: vn_o_pack_static_dp28_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_dshkm_high_01: vn_o_pack_static_dp28_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_dshkm_low_02: vn_o_pack_static_dp28_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_m1910_low_02: vn_o_pack_static_m1910_low_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_mg42_low: vn_o_pack_static_sgm_low_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_pk_high_01: vn_o_pack_static_dp28_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_pk_low_01: vn_o_pack_static_dp28_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_06: vn_o_pack_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_07: vn_o_pack_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_03: vn_o_pack_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_05: vn_o_pack_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_sgm_high_01: vn_o_pack_static_sgm_low_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_sgm_low_02: vn_o_pack_static_sgm_low_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_type53_01: vn_o_pack_static_dp28_01 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_type63_01: vn_o_pack_static_dp28_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_02: vn_b_pack_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_03: vn_b_pack_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_04: vn_b_pack_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_m41_03: vn_b_pack_m41_02 { maximumLoad = MAXLOAD; };
    class vn_b_pack_m41_04: vn_b_pack_m41_02 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_rpd_01: vn_o_pack_static_dp28_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_04_02: vn_b_pack_04 { maximumLoad = MAXLOAD; };
    class vn_b_pack_arvn_03: vn_b_pack_arvn_01 { maximumLoad = MAXLOAD; };
    class vn_b_pack_static_ammo_01: vn_b_pack_lw_05 { maximumLoad = MAXLOAD; };
    class vn_b_pack_02_02: vn_b_pack_02 { maximumLoad = MAXLOAD; };
    class vn_b_pack_03_02: vn_b_pack_03 { maximumLoad = MAXLOAD; };
    class vn_o_pack_static_mg42_high: vn_o_pack_static_mg42_low { maximumLoad = MAXLOAD; };
};