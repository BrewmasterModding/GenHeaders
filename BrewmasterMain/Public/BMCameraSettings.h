#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFilmbackSettings -FallbackName=CameraFilmbackSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraLensSettings -FallbackName=CameraLensSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraLookatTrackingSettings -FallbackName=CameraLookatTrackingSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFocusSettings -FallbackName=CameraFocusSettings
#include "BMCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCameraSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform CameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraLookatTrackingSettings LookatTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraFilmbackSettings FilmbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraLensSettings LensSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraFocusSettings FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Apeture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ConstraintAspectRatio;
    
    FBMCameraSettings();
};

