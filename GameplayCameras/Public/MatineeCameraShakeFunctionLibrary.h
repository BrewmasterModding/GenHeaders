#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MatineeCameraShakeFunctionLibrary.generated.h"

class UMatineeCameraShake;
class UCameraShakeBase;

UCLASS(BlueprintType)
class GAMEPLAYCAMERAS_API UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMatineeCameraShakeFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static UMatineeCameraShake* Conv_MatineeCameraShake(UCameraShakeBase* CameraShake);
    
};

