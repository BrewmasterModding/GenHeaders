#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseFloatParameterSource.h"
#include "GizmoFloatParameterChange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoAxisTranslationParameterSource.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoTransformSource;
class IGizmoTransformSource;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY()
    float Parameter;
    
    UPROPERTY()
    FGizmoFloatParameterChange LastChange;
    
    UPROPERTY()
    FVector CurTranslationAxis;
    
    UPROPERTY()
    FVector CurTranslationOrigin;
    
    UPROPERTY()
    FTransform InitialTransform;
    
    UGizmoAxisTranslationParameterSource();
};

