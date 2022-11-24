#pragma once
#include "CoreMinimal.h"
#include "EBMResource.h"
#include "BMRewardResource.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRewardResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    EBMResource ResourceType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 RewardValue;
    
    FBMRewardResource();
};

