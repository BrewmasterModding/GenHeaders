#pragma once
#include "CoreMinimal.h"
#include "EIngredientType.h"
#include "BMIngredientIDs.h"
#include "BMIngredientIDList.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientIDList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, FName> InstanceIDs;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, bool> IngredientFermentability;
    
    UPROPERTY(SaveGame)
    TMap<EIngredientType, FBMIngredientIDs> IngredientByType;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<int32> MaltSugarsInLiquid;
    
    FBMIngredientIDList();
};

