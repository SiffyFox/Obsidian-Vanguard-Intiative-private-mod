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
            "CSLA"
        };
        skipWhenMissingDependencies=1
    };
};

class CfgVehicles {
// Forward declarations needed:
    class CSLA_backpack;
    class CSLA_bpWeapon;
    class US85_backpack;
    class FIA_backpack;

// Backpack modifications:
    class FIA_bpPack: FIA_backpack { maximumLoad = MAXLOAD; };
    class FIA_bpSapper1: FIA_backpack { maximumLoad = MAXLOAD; };
    class FIA_bpLK52: FIA_bpPack { maximumLoad = MAXLOAD; };
    class FIA_bpLK57: FIA_bpPack { maximumLoad = MAXLOAD; };
    class FIA_bpMedi: FIA_backpack { maximumLoad = MAXLOAD; };
    class FIA_bpP27: FIA_backpack { maximumLoad = MAXLOAD; };
    class FIA_bpRPG7: FIA_backpack { maximumLoad = MAXLOAD; };
    class FIA_bpSvc1: FIA_backpack { maximumLoad = MAXLOAD; };
    class FIA_bpAlice: FIA_backpack { maximumLoad = MAXLOAD; };
    class CSLA_bpKnapsack: CSLA_backpack { maximumLoad = 50; };
    class CSLA_bpBx: CSLA_bpKnapsack { maximumLoad = MAXLOAD; };
    class CSLA_bpCorcJacket: CSLA_backpack { maximumLoad = MAXLOAD; };
    class CSLA_bp85Lrr: CSLA_backpack { maximumLoad = MAXLOAD; };
    class CSLA_bp85Spr: CSLA_bp85Lrr { maximumLoad = MAXLOAD; };
    class CSLA_bp85Medi: CSLA_bp85Lrr { maximumLoad = MAXLOAD; };
    class CSLA_bp85Rfl: CSLA_bp85Lrr { maximumLoad = MAXLOAD; };
    class CSLA_bp85Svc: CSLA_bp85Lrr { maximumLoad = MAXLOAD; };
    class CSLA_bp85Snp: CSLA_bp85Lrr { maximumLoad = MAXLOAD; };
    class CSLA_bp61: CSLA_backpack { maximumLoad = MAXLOAD; };
    class CSLA_bp61DSKM: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61Spr: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61M52: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61Medi: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61AGS17: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61OP63: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61RPG7: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61Sa58: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61Svc: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61T21: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61UK59: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp61VG70: CSLA_bp61 { maximumLoad = MAXLOAD; };
    class CSLA_bp85: CSLA_backpack { maximumLoad = MAXLOAD; };
    class CSLA_bp85AGS17: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85DSKM: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85Spr1: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85M52: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85Med1: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85OP63: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85RPG7: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85Sa58: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85Svc1: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85T21: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85UK59: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85VG70: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85RF10: CSLA_bp85Sa58 { maximumLoad = MAXLOAD; };
    class CSLA_bp60: CSLA_backpack { maximumLoad = MAXLOAD; };
    class CSLA_bp60DSKM: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp60IVZ: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp60Medi: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp60OP63: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp60PtMiBa3: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp60Sa58: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp60Sa61: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp60Svc: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp60UK59: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp60VG70: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bpWpR129: CSLA_bpWeapon { maximumLoad = MAXLOAD; };
    class CSLA_bpWpRF10: CSLA_bpWeapon { maximumLoad = MAXLOAD; };
    class CSLA_bpRPG7: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp85msn: CSLA_backpack { maximumLoad = MAXLOAD; };
    class CSLA_bp60AGS17: CSLA_bp60 { maximumLoad = MAXLOAD; };
    class CSLA_bp85R129: CSLA_bp85Lrr { maximumLoad = MAXLOAD; };
    class US85_bpAlice: US85_backpack { maximumLoad = MAXLOAD; };
    class US85_bpMedi: US85_backpack { maximumLoad = MAXLOAD; };
    class US85_bpPRC77: US85_backpack { maximumLoad = MAXLOAD; };
    class US85_bpSf: US85_bpAlice { maximumLoad = MAXLOAD; };
    class US85_bpSfLTD: US85_bpSf { maximumLoad = MAXLOAD; };
    class US85_bpSfAR: US85_bpSf { maximumLoad = MAXLOAD; };
    class US85_bpSfSpr: US85_bpSf { maximumLoad = MAXLOAD; };
    class US85_bpSfM16GL: US85_bpSf { maximumLoad = MAXLOAD; };
    class US85_bpSfM16: US85_bpSf { maximumLoad = MAXLOAD; };
    class US85_bpSfMdc: US85_bpSf { maximumLoad = MAXLOAD; };
    class US85_bpSfMG: US85_bpSf { maximumLoad = MAXLOAD; };
    class US85_bpSfLAW: US85_bpSfM16 { maximumLoad = MAXLOAD; };
    class US85_bpSfSvc: US85_bpSf { maximumLoad = MAXLOAD; };
    class US85_bpSfM21: US85_bpSf { maximumLoad = MAXLOAD; };
    class US85_bpAliceM60: US85_bpAlice { maximumLoad = MAXLOAD; };
    class CSLA_bp85Spr2: CSLA_bp85 { maximumLoad = MAXLOAD; };
    class CSLA_bp85msnLK57: CSLA_bp85msn { maximumLoad = MAXLOAD; };
    class CSLA_bp85msnOP63: CSLA_bp85msn { maximumLoad = MAXLOAD; };
    class CSLA_bp85msnSa24: CSLA_bp85msn { maximumLoad = MAXLOAD; };
    class CSLA_bp85msnSvc: CSLA_bp85msn { maximumLoad = MAXLOAD; };
    class CSLA_bp85msnUK59: CSLA_bp85msn { maximumLoad = MAXLOAD; };
    class CSLA_bp85msnLK52: CSLA_bp85msn { maximumLoad = MAXLOAD; };
    class US85_bpAliceM16GL: US85_bpAlice { maximumLoad = MAXLOAD; };
    class US85_bpAliceM16: US85_bpAlice { maximumLoad = MAXLOAD; };
    class US85_bpAliceM2: US85_bpAlice { maximumLoad = MAXLOAD; };
    class US85_bpAliceM21: US85_bpAlice { maximumLoad = MAXLOAD; };
    class US85_bpAliceM249: US85_bpAlice { maximumLoad = MAXLOAD; };
    class US85_bpAliceMk19: US85_bpAlice { maximumLoad = MAXLOAD; };
};