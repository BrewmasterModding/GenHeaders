#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BMReflectionCaptureSetting.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMReflectionCaptureSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform ReflectionPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    FBMReflectionCaptureSetting();
};

