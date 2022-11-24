#pragma once
#include "CoreMinimal.h"
#include "BMOriginalMaterialsOfActor.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMOriginalMaterialsOfActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UMaterialInterface*> OriginalMaterials;
    
    FBMOriginalMaterialsOfActor();
};

