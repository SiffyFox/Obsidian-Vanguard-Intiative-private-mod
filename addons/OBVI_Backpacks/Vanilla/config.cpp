#include "script_component.hpp"
#include "../maxload.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "Obsidian Vanguard Intiative - Vanilla Backpack Weights";
        author = "Obsidian Vanguard Intiative";
        requiredVersion = 2.12;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "ObsidianVanguardIntiative Private Mod",
        };
    };
};

class CfgVehicles {
    // Forward declarations — parents that are NOT modified by this config
    class B_AssaultPack_Base;
    class B_Bergen_Base_F;
    class B_Carryall_Base;
    class B_CivilianBackpack_01_Base_F;
    class B_FieldPack_Base;
    class B_Kitbag_Base;
    class B_LegStrapBag_base_F;
    class B_Messenger_Base_F;
    class B_TacticalPack_Base;
    class B_RadioBag_01_base_F;
    class B_ViperHarness_base_F;
    class B_ViperLightHarness_base_F;

    // AssaultPack family
    class B_AssaultPack_blk: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_cbr: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_dgtl: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_eaf_F: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_rgr: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_ocamo: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_khk: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_mcamo: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_Kerry: B_AssaultPack_mcamo { maximumLoad = MAXLOAD; };
    class B_AssaultPack_sgg: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_tna_F: B_AssaultPack_Base { maximumLoad = MAXLOAD; };
    class B_AssaultPack_wdl_F: B_AssaultPack_Base { maximumLoad = MAXLOAD; };

    // Bergen family
    class B_Bergen_dgtl_F: B_Bergen_Base_F { maximumLoad = MAXLOAD; };
    class B_Bergen_hex_F: B_Bergen_Base_F { maximumLoad = MAXLOAD; };
    class B_Bergen_mcamo_F: B_Bergen_Base_F { maximumLoad = MAXLOAD; };
    class B_Bergen_tna_F: B_Bergen_Base_F { maximumLoad = MAXLOAD; };

    // Carryall family
    class B_Carryall_blk: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Carryall_cbr: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Respawn_TentA_F: B_Carryall_cbr { maximumLoad = MAXLOAD; };
    class B_Carryall_eaf_F: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Carryall_ghex_F: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Carryall_green_F: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Carryall_ocamo: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Carryall_khk: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Carryall_mcamo: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Carryall_taiga_F: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Carryall_oucamo: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Carryall_oli: B_Carryall_Base { maximumLoad = MAXLOAD; };
    class B_Respawn_TentDome_F: B_Carryall_oli { maximumLoad = MAXLOAD; };
    class B_Carryall_wdl_F: B_Carryall_Base { maximumLoad = MAXLOAD; };

    // CivilianBackpack family
    class B_CivilianBackpack_01_Everyday_Astra_F: B_CivilianBackpack_01_Base_F { maximumLoad = MAXLOAD; };
    class B_CivilianBackpack_01_Everyday_Black_F: B_CivilianBackpack_01_Base_F { maximumLoad = MAXLOAD; };
    class B_CivilianBackpack_01_Everyday_Vrana_F: B_CivilianBackpack_01_Base_F { maximumLoad = MAXLOAD; };
    class B_CivilianBackpack_01_Everyday_IDAP_F: B_CivilianBackpack_01_Base_F { maximumLoad = MAXLOAD; };
    class B_CivilianBackpack_01_Sport_Blue_F: B_CivilianBackpack_01_Base_F { maximumLoad = MAXLOAD; };
    class B_CivilianBackpack_01_Sport_Green_F: B_CivilianBackpack_01_Base_F { maximumLoad = MAXLOAD; };
    class B_CivilianBackpack_01_Sport_Red_F: B_CivilianBackpack_01_Base_F { maximumLoad = MAXLOAD; };

    // FieldPack family
    class B_FieldPack_blk: B_FieldPack_Base { maximumLoad = MAXLOAD; };
    class B_Respawn_Sleeping_bag_blue_F: B_FieldPack_blk { maximumLoad = MAXLOAD; };
    class B_FieldPack_cbr: B_FieldPack_Base { maximumLoad = MAXLOAD; };
    class B_FieldPack_ghex_F: B_FieldPack_Base { maximumLoad = MAXLOAD; };
    class B_FieldPack_green_F: B_FieldPack_Base { maximumLoad = MAXLOAD; };
    class B_FieldPack_ocamo: B_FieldPack_Base { maximumLoad = MAXLOAD; };
    class B_FieldPack_khk: B_FieldPack_Base { maximumLoad = MAXLOAD; };
    class B_Respawn_Sleeping_bag_brown_F: B_FieldPack_khk { maximumLoad = MAXLOAD; };
    class B_FieldPack_oli: B_FieldPack_Base { maximumLoad = MAXLOAD; };
    class B_Respawn_Sleeping_bag_F: B_FieldPack_oli { maximumLoad = MAXLOAD; };
    class B_FieldPack_taiga_F: B_FieldPack_Base { maximumLoad = MAXLOAD; };
    class B_FieldPack_oucamo: B_FieldPack_Base { maximumLoad = MAXLOAD; };

    // Kitbag family
    class B_Kitbag_cbr: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class B_Kitbag_rgr: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class B_Kitbag_mcamo: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class B_Patrol_Respawn_bag_F: B_Kitbag_mcamo { maximumLoad = MAXLOAD; };
    class B_Kitbag_sgg: B_Kitbag_Base { maximumLoad = MAXLOAD; };
    class B_Kitbag_tan: B_Kitbag_Base { maximumLoad = MAXLOAD; };

    // LegStrapBag family
    class B_LegStrapBag_black_F: B_LegStrapBag_base_F { maximumLoad = MAXLOAD; };
    class B_LegStrapBag_coyote_F: B_LegStrapBag_base_F { maximumLoad = MAXLOAD; };
    class B_LegStrapBag_olive_F: B_LegStrapBag_base_F { maximumLoad = MAXLOAD; };

    // Messenger family
    class B_Messenger_Black_F: B_Messenger_Base_F { maximumLoad = MAXLOAD; };
    class B_Messenger_Coyote_F: B_Messenger_Base_F { maximumLoad = MAXLOAD; };
    class B_Messenger_Gray_F: B_Messenger_Base_F { maximumLoad = MAXLOAD; };
    class B_Messenger_Olive_F: B_Messenger_Base_F { maximumLoad = MAXLOAD; };
    class B_Messenger_IDAP_F: B_Messenger_Base_F { maximumLoad = MAXLOAD; };

    // TacticalPack family
    class B_TacticalPack_blk: B_TacticalPack_Base { maximumLoad = MAXLOAD; };
    class B_TacticalPack_rgr: B_TacticalPack_Base { maximumLoad = MAXLOAD; };
    class B_TacticalPack_ocamo: B_TacticalPack_Base { maximumLoad = MAXLOAD; };
    class B_TacticalPack_mcamo: B_TacticalPack_Base { maximumLoad = MAXLOAD; };
    class B_TacticalPack_oli: B_TacticalPack_Base { maximumLoad = MAXLOAD; };

    // RadioBag family
    class B_RadioBag_01_digi_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_eaf_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_ghex_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_hex_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_mtp_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_tropic_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_oucamo_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_wdl_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };
    class B_RadioBag_01_black_F: B_RadioBag_01_base_F { maximumLoad = MAXLOAD; };

    // ViperHarness family
    class B_ViperHarness_blk_F: B_ViperHarness_base_F { maximumLoad = MAXLOAD; };
    class B_ViperHarness_ghex_F: B_ViperHarness_base_F { maximumLoad = MAXLOAD; };
    class B_ViperHarness_hex_F: B_ViperHarness_base_F { maximumLoad = MAXLOAD; };
    class B_ViperHarness_khk_F: B_ViperHarness_base_F { maximumLoad = MAXLOAD; };
    class B_ViperHarness_oli_F: B_ViperHarness_base_F { maximumLoad = MAXLOAD; };

    // ViperLightHarness family
    class B_ViperLightHarness_blk_F: B_ViperLightHarness_base_F { maximumLoad = MAXLOAD; };
    class B_ViperLightHarness_ghex_F: B_ViperLightHarness_base_F { maximumLoad = MAXLOAD; };
    class B_ViperLightHarness_hex_F: B_ViperLightHarness_base_F { maximumLoad = MAXLOAD; };
    class B_ViperLightHarness_khk_F: B_ViperLightHarness_base_F { maximumLoad = MAXLOAD; };
    class B_ViperLightHarness_oli_F: B_ViperLightHarness_base_F { maximumLoad = MAXLOAD; };
};