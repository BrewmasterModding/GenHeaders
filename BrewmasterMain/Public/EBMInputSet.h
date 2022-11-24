#pragma once
#include "CoreMinimal.h"
#include "EBMInputSet.generated.h"

UENUM(BlueprintType)
enum class EBMInputSet : uint8 {
    HUD_World,
    FullScreenUI,
    CustomSequence,
    HUD_BuildMode,
};

