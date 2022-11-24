#pragma once
#include "CoreMinimal.h"
#include "GizmoActor.h"
#include "TransformGizmoActor.generated.h"

class UPrimitiveComponent;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API ATransformGizmoActor : public AGizmoActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPrimitiveComponent* TranslateX;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* TranslateY;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* TranslateZ;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* TranslateYZ;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* TranslateXZ;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* TranslateXY;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* RotateX;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* RotateY;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* RotateZ;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* UniformScale;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* AxisScaleX;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* AxisScaleY;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* AxisScaleZ;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* PlaneScaleYZ;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* PlaneScaleXZ;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* PlaneScaleXY;
    
    ATransformGizmoActor();
};

