#pragma once
#include "CoreMinimal.h"
#include "ESpriteShapeType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SpriteGeometryShape.generated.h"

USTRUCT(BlueprintType)
struct PAPER2D_API FSpriteGeometryShape {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ESpriteShapeType ShapeType;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector2D> Vertices;
    
    UPROPERTY(VisibleAnywhere)
    FVector2D BoxSize;
    
    UPROPERTY(VisibleAnywhere)
    FVector2D BoxPosition;
    
    UPROPERTY(VisibleAnywhere)
    float Rotation;
    
    UPROPERTY(VisibleAnywhere)
    bool bNegativeWinding;
    
    FSpriteGeometryShape();
};

