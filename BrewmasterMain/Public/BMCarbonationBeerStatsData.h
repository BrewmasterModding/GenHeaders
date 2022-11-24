#pragma once
#include "CoreMinimal.h"
#include "BMCarbonationBeerStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCarbonationBeerStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float LowValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float HighValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName MaximumLocalizationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName MinimumLocalizationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName DefaultLocalizationKey;
    
    FBMCarbonationBeerStatsData();
};

