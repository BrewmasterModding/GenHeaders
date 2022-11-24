#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.h"
#include "BMClarityBeerStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMClarityBeerStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float ProteinMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float ContaminationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float PercentDissolvedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float PercentSugarsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMBeerStatRangeData> ValueRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName DefaultLocalizationKey;
    
    FBMClarityBeerStatsData();
};

