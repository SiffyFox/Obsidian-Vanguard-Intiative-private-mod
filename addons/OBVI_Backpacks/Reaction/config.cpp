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
            "RF_Data"
        };
        skipWhenMissingDependencies=1;
    };
};

class CfgVehicles {
// Forward declarations needed:
    class B_DuffleBag_Base;

// Backpack modifications:
    class B_DuffleBag_Black_NoLogo_RF: B_DuffleBag_Base { maximumLoad = MAXLOAD; };
    class B_DuffleBag_Sand_NoLogo_RF: B_DuffleBag_Base { maximumLoad = MAXLOAD; };
    class B_DuffleBag_MTP_RF: B_DuffleBag_Base { maximumLoad = MAXLOAD; };
    class B_DuffleBag_Olive_NoLogo_RF: B_DuffleBag_Base { maximumLoad = MAXLOAD; };
    class B_DuffleBag_Black_RF: B_DuffleBag_Base { maximumLoad = MAXLOAD; };
    class B_DuffleBag_Blue_RF: B_DuffleBag_Base { maximumLoad = MAXLOAD; };
    class B_DuffleBag_Sand_RF: B_DuffleBag_Base { maximumLoad = MAXLOAD; };
    class B_DuffleBag_Olive_RF: B_DuffleBag_Base { maximumLoad = MAXLOAD; };
    class B_DuffleBag_Red_RF: B_DuffleBag_Base { maximumLoad = MAXLOAD; };
    class B_DuffleBag_VRANA_RF: B_DuffleBag_Base { maximumLoad = MAXLOAD; };
};