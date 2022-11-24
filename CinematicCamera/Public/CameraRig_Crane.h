#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CameraRig_Crane.generated.h"

class USceneComponent;

UCLASS()
class CINEMATICCAMERA_API ACameraRig_Crane : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CranePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CraneYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CraneArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bLockMountPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bLockMountYaw;
    
private:
    UPROPERTY(EditDefaultsOnly, Instanced)
    USceneComponent* TransformComponent;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USceneComponent* CraneYawControl;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USceneComponent* CranePitchControl;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    USceneComponent* CraneCameraMount;
    
public:
    ACameraRig_Crane();
};

