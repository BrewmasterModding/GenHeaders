#pragma once
#include "CoreMinimal.h"
#include "EBMMeshBagStates.generated.h"

UENUM(BlueprintType)
enum class EBMMeshBagStates : uint8 {
    InPlayerHand,
    InsideContainer,
    sitting,
};

