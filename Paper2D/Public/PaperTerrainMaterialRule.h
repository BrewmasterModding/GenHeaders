#pragma once
#include "CoreMinimal.h"
#include "PaperTerrainMaterialRule.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FPaperTerrainMaterialRule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPaperSprite* StartCap;
    
    UPROPERTY(EditAnywhere)
    TArray<UPaperSprite*> Body;
    
    UPROPERTY(EditAnywhere)
    UPaperSprite* EndCap;
    
    UPROPERTY(EditAnywhere)
    float MinimumAngle;
    
    UPROPERTY(EditAnywhere)
    float MaximumAngle;
    
    UPROPERTY(EditAnywhere)
    bool bEnableCollision;
    
    UPROPERTY(EditAnywhere)
    float CollisionOffset;
    
    UPROPERTY(EditAnywhere)
    int32 DrawOrder;
    
    PAPER2D_API FPaperTerrainMaterialRule();
};

