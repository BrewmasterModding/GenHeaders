#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.h"
#include "BMInsulationStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMInsulationStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMBeerStatRangeData> ValueRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName DefaultLocalizationKey;
    
    FBMInsulationStatsData();
};

