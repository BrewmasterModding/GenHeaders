#pragma once
#include "CoreMinimal.h"
#include "BMRecipeUcgData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRecipeUcgData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    bool IsPlayerMadeRecipe;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    bool IsPublished;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    bool HasUnpublishedChanges;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    uint64 FileId;
    
    FBMRecipeUcgData();
};

