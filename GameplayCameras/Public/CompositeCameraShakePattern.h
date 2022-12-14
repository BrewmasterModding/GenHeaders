#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakePattern -FallbackName=CameraShakePattern
#include "CompositeCameraShakePattern.generated.h"

UCLASS(EditInlineNew)
class GAMEPLAYCAMERAS_API UCompositeCameraShakePattern : public UCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UCameraShakePattern*> ChildPatterns;
    
    UCompositeCameraShakePattern();
};

