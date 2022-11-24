#pragma once
#include "CoreMinimal.h"
#include "ETextLineEffect.generated.h"

UENUM()
enum class ETextLineEffect : uint8 {
    None,
    UnderlineVisibleCharacters,
    UnderlineVisibleLines,
    UnderlineWholeTextBlock,
    UnderlineEmptySpace,
    HighlightVisibleCharacters,
    HighlightVisibleLines,
    DebugVisualizeLineHeights,
};

