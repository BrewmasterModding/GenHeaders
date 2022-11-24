#pragma once
#include "CoreMinimal.h"
#include "EBMCatalogueSeasonsEnum.generated.h"

UENUM(BlueprintType)
enum class EBMCatalogueSeasonsEnum : uint8 {
    ANY,
    Spring,
    Summer,
    Autumn,
    Winter,
};

