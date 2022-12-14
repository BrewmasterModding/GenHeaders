#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ProcMeshTangent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ProcMeshVertex.generated.h"

USTRUCT(BlueprintType)
struct FProcMeshVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FProcMeshTangent Tangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV3;
    
    PROCEDURALMESHCOMPONENT_API FProcMeshVertex();
};

