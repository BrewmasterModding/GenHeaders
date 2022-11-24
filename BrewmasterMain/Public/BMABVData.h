#pragma once
#include "CoreMinimal.h"
#include "BMABVData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMABVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float HighValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float LowValue;
    
    FBMABVData();
};

