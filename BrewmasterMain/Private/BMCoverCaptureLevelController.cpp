#include "BMCoverCaptureLevelController.h"

class ABMBaseBeerGlass;
class ABMBaseBeerBottle;

void ABMCoverCaptureLevelController::UnloadActiveSubLevelBlocking() {
}

void ABMCoverCaptureLevelController::LoadSubLevelBlocking(const FString& LevelName) {
}

void ABMCoverCaptureLevelController::LoadNextSubLevel() {
}

void ABMCoverCaptureLevelController::Initialize() {
}

void ABMCoverCaptureLevelController::HideInactiveGlasses(const ABMBaseBeerGlass* CurrentActiveGlass) {
}

void ABMCoverCaptureLevelController::HideInactiveBottles(const ABMBaseBeerBottle* CurrentActiveBottle) {
}

void ABMCoverCaptureLevelController::HandleScreenshotTakenDelegate(int32 NextBeerStyleToCapture) {
}

void ABMCoverCaptureLevelController::HandleOnSubLevelUnloaded() {
}

void ABMCoverCaptureLevelController::HandleOnSubLevelLoaded() {
}

void ABMCoverCaptureLevelController::FinishLoadingAllAssets() {
}

void ABMCoverCaptureLevelController::CreateUniqueNameForLevel() {
}

FString ABMCoverCaptureLevelController::CreateScreenshotFileName(FName BeerStyleName) {
    return TEXT("");
}

void ABMCoverCaptureLevelController::CreateBeerGlassActors(TMap<EBMBeerGlassType, ABMBaseBeerGlass*>& InOutBeerGlassInstances, FBMBeerProperties DefaultBeerProperties) {
}

void ABMCoverCaptureLevelController::CreateBeerBottleActors(TMap<EBMBottleType, ABMBaseBeerBottle*>& InOutBeerBottleInstances, FBMBeerProperties DefaultBeerProperties) {
}

void ABMCoverCaptureLevelController::CaptureCoverVariantsInLevel(int32 BeerStyleIndexToCapture) {
}

void ABMCoverCaptureLevelController::CaptureAllCovers() {
}

ABMCoverCaptureLevelController::ABMCoverCaptureLevelController() {
    this->bShouldGenerateSpecificAssets = false;
    this->BeerStylesDataTable = NULL;
    this->PhotoshootSubLevelControllerClass = NULL;
    this->bIsInitialized = false;
    this->SceneCaptureComponentRGBA = NULL;
    this->ActiveSubLevel = NULL;
    this->ActiveSubLevelIndex = -1;
    this->ActiveSubLevelController = NULL;
    this->ActiveScreenshotCamera = NULL;
    this->CurrentWorld = NULL;
    this->PlayerController = NULL;
    this->CurrentGlass = NULL;
    this->CurrentBeerStyleToCaptureIndex = -1;
}

