#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PaperTerrainMaterialRule.h"
#include "PaperTerrainMaterial.generated.h"

class UPaperSprite;

UCLASS()
class PAPER2D_API UPaperTerrainMaterial : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPaperTerrainMaterialRule> Rules;
    
    UPROPERTY(EditAnywhere)
    UPaperSprite* InteriorFill;
    
    UPaperTerrainMaterial();
};

