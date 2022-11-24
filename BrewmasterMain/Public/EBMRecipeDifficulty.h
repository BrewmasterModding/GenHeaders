#pragma once
#include "CoreMinimal.h"
#include "EBMRecipeDifficulty.generated.h"

UENUM(BlueprintType)
enum class EBMRecipeDifficulty : uint8 {
    Easy,
    Medium,
    Hard,
    Brewtal,
};

