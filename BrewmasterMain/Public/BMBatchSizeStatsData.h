#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.h"
#include "BMBatchSizeStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBatchSizeStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMBeerStatRangeData> ValueRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName DefaultLocalizationKey;
    
    FBMBatchSizeStatsData();
};

