#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMArtDataBottledIngredients.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtDataBottledIngredients : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> IngredientMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TSoftObjectPtr<UMaterialInstance> LabelSmallMaterial;
    
    FBMArtDataBottledIngredients();
};

