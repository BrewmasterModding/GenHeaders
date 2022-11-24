#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.h"
#include "BMColourBeerStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMColourBeerStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMBeerStatRangeData ValueRange;
    
    FBMColourBeerStatsData();
};

