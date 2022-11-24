#pragma once
#include "CoreMinimal.h"
#include "EBMSeasonsEnum.generated.h"

UENUM(BlueprintType)
enum class EBMSeasonsEnum : uint8 {
    Spring,
    Summer,
    Autumn,
    Winter,
    OFF,
};

