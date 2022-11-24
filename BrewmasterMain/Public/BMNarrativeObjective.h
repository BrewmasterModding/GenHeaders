#pragma once
#include "CoreMinimal.h"
#include "BMNarrativeConditonMet.h"
#include "BMNarrativeObjective.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMNarrativeObjective {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FName, FBMNarrativeConditonMet> ObjectiveCompletion;
    
    FBMNarrativeObjective();
};

