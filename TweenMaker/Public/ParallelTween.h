#pragma once
#include "CoreMinimal.h"
#include "ParallelTween.generated.h"

class UBaseTween;

USTRUCT(BlueprintType)
struct FParallelTween {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UBaseTween*> ParallelTweens;
    
    TWEENMAKER_API FParallelTween();
};

