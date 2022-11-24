#pragma once
#include "CoreMinimal.h"
#include "EBMZOrder.generated.h"

UENUM()
enum class EBMZOrder {
    BaseLevel,
    HUDBuildMode,
    Screens,
    HUD,
    OverlayBackground,
    Overlays,
    Menus,
    ToolTips,
    TopLevel,
};

