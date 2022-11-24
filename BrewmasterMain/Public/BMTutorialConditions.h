#pragma once
#include "CoreMinimal.h"
#include "BMConditions.h"
#include "BMTutorialConditions.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTutorialConditions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FBMConditions> TriggerConditions;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<FBMConditions> CompleteConditions;
    
    FBMTutorialConditions();
};

