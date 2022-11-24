#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.h"
#include "BMBubblesBeerStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBubblesBeerStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMBeerStatRangeData> ValueRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName DefaultLocalizationKey;
    
    FBMBubblesBeerStatsData();
};

