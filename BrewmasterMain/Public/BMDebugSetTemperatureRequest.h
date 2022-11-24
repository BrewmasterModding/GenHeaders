#pragma once
#include "CoreMinimal.h"
#include "BMDebugSetTemperatureRequest.generated.h"

class ABMDynamicContainer;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMDebugSetTemperatureRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    ABMDynamicContainer* Container;
    
    UPROPERTY()
    float NewTemperature;
    
    FBMDebugSetTemperatureRequest();
};

