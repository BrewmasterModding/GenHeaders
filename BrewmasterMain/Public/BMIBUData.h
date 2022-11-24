#pragma once
#include "CoreMinimal.h"
#include "BMIBUData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIBUData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float HighValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float LowValue;
    
    FBMIBUData();
};

