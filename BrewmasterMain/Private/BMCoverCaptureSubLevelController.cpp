#include "BMCoverCaptureSubLevelController.h"

class ACineCameraActor;

void ABMCoverCaptureSubLevelController::HideTestObjectsInScene() {
}

EBMBrewersQuarterlyCoverSeason ABMCoverCaptureSubLevelController::GetSubLevelSeason() {
    return EBMBrewersQuarterlyCoverSeason::Spring;
}

ACineCameraActor* ABMCoverCaptureSubLevelController::GetScreenshotCamera() {
    return NULL;
}

TArray<FTransform> ABMCoverCaptureSubLevelController::GetAllSubLevelBeerGlassPositions() {
    return TArray<FTransform>();
}

TArray<FTransform> ABMCoverCaptureSubLevelController::GetAllSubLevelBeerBottlePositions() {
    return TArray<FTransform>();
}

ABMCoverCaptureSubLevelController::ABMCoverCaptureSubLevelController() {
    this->Season = EBMBrewersQuarterlyCoverSeason::Spring;
    this->VariantName = TEXT("Base");
    this->ScreenshotCamera = NULL;
}

