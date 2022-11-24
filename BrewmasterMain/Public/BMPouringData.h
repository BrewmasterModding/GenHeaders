#pragma once
#include "CoreMinimal.h"
#include "BMPouringData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPouringData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumLiquidZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistanceFromCenter;
    
    FBMPouringData();
};

