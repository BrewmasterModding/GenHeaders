#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "BMRecipeData.h"
#include "BMUserGeneratedRecipeSave.generated.h"

UCLASS()
class BREWMASTERMAIN_API UBMUserGeneratedRecipeSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FBMRecipeData SavedRecipeData;
    
    UBMUserGeneratedRecipeSave();
};

