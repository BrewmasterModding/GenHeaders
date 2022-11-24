#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.h"
#include "BMHeadSizeBeerStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMHeadSizeBeerStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float ProteinMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float CarbonationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float IBUMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMBeerStatRangeData> ValueRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName DefaultLocalizationKey;
    
    FBMHeadSizeBeerStatsData();
};

