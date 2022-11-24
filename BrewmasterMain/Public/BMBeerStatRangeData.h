#pragma once
#include "CoreMinimal.h"
#include "BMBeerStatRangeData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBeerStatRangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float StartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float EndValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName LocalizationKey;
    
    FBMBeerStatRangeData();
};

