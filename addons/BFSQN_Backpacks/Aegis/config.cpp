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
            "A3_Aegis_Data_F_Aegis"
        };
        skipWhenMissingDependencies=1
    };
};

class CfgVehicles {
// Forward declarations needed:
    class B_AssaultPackSpec_Base;
    class B_Kitbag_Base;
    class B_RadioBag_01_base_F;
    class B_AssaultPack_Base;
    class B_Bergen_Base_F;
    class B_Carryall_Base;
    class B_FieldPack_Base;
    class B_TacticalPack_Base;
    class B_ViperHarness_base_F;
    class B_ViperLightHarness_base_F;

// Backpack modifications:
    class Aegis_B_AssaultPackSpec_des_lxWS: B_AssaultPackSpec_Base { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_blk_F: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_cbr_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_dhex_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_eaf_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_ghex_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_grn_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_khk_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_mcu_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_mcamo_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_tna_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_wdl_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_oli_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_RUtaiga_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_uhex_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_RadioBag_01_des_lxWS: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_aaf_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_hex_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
    class B_AssaultPackSpec_blk: B_AssaultPackSpec_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPackSpec_cbr: B_AssaultPackSpec_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_oicamo: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_ghex_F: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPackSpec_rgr: B_AssaultPackSpec_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPackSpec_mcamo: B_AssaultPackSpec_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_taiga_F: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_tan: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_Enh_tna_F: B_AssaultPackSpec_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPackSpec_wdl_F: B_AssaultPackSpec_Base { maximumLoad = MAXLOAD; };
    class B_Bergen_eaf_F: B_Bergen_Base_F { maximumLoad = MAXLOAD; };
    class B_Bergen_ghex_F: B_Bergen_Base_F { maximumLoad = MAXLOAD; };
    class B_Bergen_taiga_F: B_Bergen_Base_F { maximumLoad = MAXLOAD; };
    class B_Bergen_wdl_F: B_Bergen_Base_F { maximumLoad = MAXLOAD; };
    class B_Carryall_oicamo: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Carryall_tna_F: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_FieldPack_oicamo: B_FieldPack_Base { maximumLoad = MAXLOAD; };
    class B_Kitbag_blk: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class B_Kitbag_dgtl: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class B_Kitbag_eaf_F: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class B_Kitbag_khk: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class B_Kitbag_tna_F: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class B_Kitbag_wdl_F: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_coyote_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_green_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_sage_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_oicamo_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_arid_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_taiga_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_TacticalPack_oicamo: B_TacticalPack_Base { maximumLoad = MAXLOAD; };
    class B_TacticalPack_eaf_F: B_TacticalPack_Base { maximumLoad = MAXLOAD; };
    class B_TacticalPack_khk: B_TacticalPack_Base { maximumLoad = MAXLOAD; };
    class B_TacticalPack_sgg: B_TacticalPack_Base { maximumLoad = MAXLOAD; };
    class B_TacticalPack_tna_F: B_TacticalPack_Base { maximumLoad = MAXLOAD; };
    class B_ViperHarness_oicamo_F: B_ViperHarness_base_F { maximumLoad = MAXLOAD; };
    class B_ViperLightHarness_oicamo_F: B_ViperLightHarness_base_F { maximumLoad = MAXLOAD; };
    class Aegis_B_patrolBackpack_RUarid_F: Aegis_B_patrolBackpack_blk_F { maximumLoad = MAXLOAD; };
};