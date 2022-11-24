#pragma once
#include "CoreMinimal.h"
#include "BMRemovedItemsHeld.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMRemovedItemsHeld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ItemName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AActor*> Actor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 QuantityHeld;
    
    FBMRemovedItemsHeld();
};

