#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.h"
#include "BMHoppyBitterMaltySweetStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMHoppyBitterMaltySweetStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMBeerStatRangeData> ValueRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName DefaultLocalizationKey;
    
    FBMHoppyBitterMaltySweetStatsData();
};

