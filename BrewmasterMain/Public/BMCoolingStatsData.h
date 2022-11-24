#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.h"
#include "BMCoolingStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCoolingStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMBeerStatRangeData> ValueRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName DefaultLocalizationKey;
    
    FBMCoolingStatsData();
};

