#pragma once
#include "CoreMinimal.h"
#include "BMChangeLiquidTemperatureRequest.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMChangeLiquidTemperatureRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ContainerID;
    
    UPROPERTY()
    float TemperatureDelta;
    
    FBMChangeLiquidTemperatureRequest();
};

