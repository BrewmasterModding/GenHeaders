#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothCollisionPrim_Box.generated.h"

USTRUCT(BlueprintType)
struct FClothCollisionPrim_Box {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector LocalPosition;
    
    UPROPERTY()
    FQuat LocalRotation;
    
    UPROPERTY()
    FVector HalfExtents;
    
    UPROPERTY()
    int32 BoneIndex;
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_Box();
};

