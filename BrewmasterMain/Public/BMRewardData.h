#pragma once
#include "CoreMinimal.h"
#include "BMRewardResource.h"
#include "BMRandomRewardItem.h"
#include "BMUniqueReward.h"
#include "BMRewardData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FBMRewardResource> ResourceRewards;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FBMRandomRewardItem> RandomItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FBMUniqueReward> UniqueItems;
    
    FBMRewardData();
};

