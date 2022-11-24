#pragma once
#include "CoreMinimal.h"
#include "EIngredientType.h"
#include "BMIngredientAmount.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIngredientAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    EIngredientType IngredientType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float MaxMass;
    
    UPROPERTY()
    int32 FromIngredientID;
    
    FBMIngredientAmount();
};

