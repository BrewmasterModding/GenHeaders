#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMContextualTipConditionsList.h"
#include "BMContextualTipConditionsByClass.generated.h"

class ABMBaseActor;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMContextualTipConditionsByClass {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    TMap<TSubclassOf<ABMBaseActor>, FBMContextualTipConditionsList> Conditions;
    
    FBMContextualTipConditionsByClass();
};

