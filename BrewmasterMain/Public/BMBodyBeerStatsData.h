#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.h"
#include "BMBodyBeerStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBodyBeerStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float ProteinMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float CarbonationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float PercentDissolvedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float PercentSugarsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMBeerStatRangeData> ValueRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName DefaultLocalizationKey;
    
    FBMBodyBeerStatsData();
};

