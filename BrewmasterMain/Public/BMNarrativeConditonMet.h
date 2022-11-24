#pragma once
#include "CoreMinimal.h"
#include "BMNarrativeConditonMet.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMNarrativeConditonMet {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<int32, bool> ConditonMet;
    
    FBMNarrativeConditonMet();
};

