#pragma once
#include "CoreMinimal.h"
#include "EHighlightType.generated.h"

UENUM()
enum class EHighlightType {
    NoHighlight,
    StandardInteractable,
    SubcomponentInteractable,
    SubComponentParentInteractable = 0x4,
    StopWatchInteractable = 0x8,
    InvalidInteraction = 0x10,
};

