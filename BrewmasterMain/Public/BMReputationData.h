#pragma once
#include "CoreMinimal.h"
#include "EBMReputation.h"
#include "BMReputationData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMReputationData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName Brewery;
    
    UPROPERTY(SaveGame)
    float PointsForNextLevel;
    
    UPROPERTY(SaveGame)
    float CurrentReputationPoints;
    
    UPROPERTY(SaveGame)
    EBMReputation CurrentReputation;
    
    FBMReputationData();
};

