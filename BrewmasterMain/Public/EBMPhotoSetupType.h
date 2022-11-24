#pragma once
#include "CoreMinimal.h"
#include "EBMPhotoSetupType.generated.h"

UENUM()
enum class EBMPhotoSetupType : uint8 {
    NONE,
    BeerPositions,
    BeerTypes,
    PropPositions,
    PropTypes,
    PostProcessing,
    CameraSettings,
    BeerGlassType,
    BeerBottleType,
    BackgroundSettings,
    TableSettings,
    SceneLightSet,
    HDRISetting,
};

