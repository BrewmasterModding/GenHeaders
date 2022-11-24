#pragma once
#include "CoreMinimal.h"
#include "EYeastType.generated.h"

UENUM(BlueprintType)
enum class EYeastType : uint8 {
    NONE,
    Ale,
    Lager,
    Blend,
};

