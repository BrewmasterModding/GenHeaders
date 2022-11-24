#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ConstraintOffset.generated.h"

USTRUCT()
struct ANIMATIONCORE_API FConstraintOffset {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Translation;
    
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    FVector Scale;
    
    UPROPERTY()
    FTransform Parent;
    
    FConstraintOffset();
};

