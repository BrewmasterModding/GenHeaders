#pragma once
#include "CoreMinimal.h"
#include "EBMKeySalesFactors.generated.h"

UENUM(BlueprintType)
enum class EBMKeySalesFactors : uint8 {
    None,
    PlayerReputation,
    Novelty,
    BeerStyleMatch,
    BeerQuality,
};

