#pragma once
#include "CoreMinimal.h"
#include "BMWaterPacket.h"
#include "BMWaterAddRequest.generated.h"

class ABMDynamicContainer;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMWaterAddRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    ABMDynamicContainer* ContainerToAddTo;
    
    UPROPERTY()
    FBMWaterPacket WaterToAdd;
    
    FBMWaterAddRequest();
};

