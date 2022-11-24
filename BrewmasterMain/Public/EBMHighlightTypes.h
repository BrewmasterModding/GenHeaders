#pragma once
#include "CoreMinimal.h"
#include "EBMHighlightTypes.generated.h"

UENUM()
enum class EBMHighlightTypes : uint8 {
    NoHighlight,
    TransparentContainer,
    OpaqueContainer,
    LiquidInOpaque,
    LiquidInTransparent,
};

