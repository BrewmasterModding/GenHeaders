#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMAnimatedStrokeData.generated.h"

USTRUCT(BlueprintType)
struct FBMAnimatedStrokeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush Brush;
    
    BREWMASTERMAIN_API FBMAnimatedStrokeData();
};

