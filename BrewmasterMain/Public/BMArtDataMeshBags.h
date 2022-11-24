#pragma once
#include "CoreMinimal.h"
#include "BMMorphTargetVisuals.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMIngredientContainerSize.h"
#include "BMArtDataMeshBags.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtDataMeshBags : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    EBMIngredientContainerSize BagSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TMap<FName, float> SizeMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TMap<FName, float> SittingBagSizeMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    TArray<FBMMorphTargetVisuals> MorphTargetsVisuals;
    
    FBMArtDataMeshBags();
};

