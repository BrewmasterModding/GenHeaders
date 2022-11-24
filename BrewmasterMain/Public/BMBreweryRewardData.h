#pragma once
#include "CoreMinimal.h"
#include "EBMReputation.h"
#include "BMRewardData.h"
#include "BMBreweryRewardData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBreweryRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EBMReputation, FBMRewardData> ReputationToReward;
    
    FBMBreweryRewardData();
};

