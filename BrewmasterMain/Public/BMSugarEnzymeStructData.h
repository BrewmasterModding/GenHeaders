#pragma once
#include "CoreMinimal.h"
#include "BMSugarEnzymeStructData.generated.h"

USTRUCT(BlueprintType)
struct FBMSugarEnzymeStructData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName SugarTypeCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float OptimalTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float OptimalConversionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float RateSpread;
    
    BREWMASTERMAIN_API FBMSugarEnzymeStructData();
};

