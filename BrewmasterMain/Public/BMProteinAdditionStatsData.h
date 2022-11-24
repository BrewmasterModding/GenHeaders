#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.h"
#include "BMProteinAdditionStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMProteinAdditionStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMBeerStatRangeData> ValueRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName DefaultLocalizationKey;
    
    FBMProteinAdditionStatsData();
};

