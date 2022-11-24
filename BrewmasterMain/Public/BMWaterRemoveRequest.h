#pragma once
#include "CoreMinimal.h"
#include "BMWaterPacket.h"
#include "BMWaterRemoveRequest.generated.h"

class ABMDynamicContainer;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMWaterRemoveRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    ABMDynamicContainer* ContainerToRemoveFrom;
    
    UPROPERTY()
    FBMWaterPacket WaterToRemove;
    
    FBMWaterRemoveRequest();
};

