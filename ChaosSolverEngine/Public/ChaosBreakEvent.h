#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosBreakEvent.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct CHAOSSOLVERENGINE_API FChaosBreakEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly)
    FVector AngularVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    float Mass;
    
    FChaosBreakEvent();
};

