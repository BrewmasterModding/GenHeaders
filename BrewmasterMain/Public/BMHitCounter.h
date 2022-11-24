#pragma once
#include "CoreMinimal.h"
#include "BMHitCounter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMHitCounter {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* HitActor;
    
    FBMHitCounter();
};

