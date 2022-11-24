#include "BMBeerPhotographyManager.h"
#include "Templates/SubclassOf.h"

class UCheckBox;
class UDataTable;
class AActor;

void ABMBeerPhotographyManager::SetPropCheckboxes(TArray<UCheckBox*> SeasonCheckboxes) {
}

void ABMBeerPhotographyManager::SaveCurrentTableSettings(TArray<FBMTableSettings> Settings) {
}

void ABMBeerPhotographyManager::SaveCurrentPropTypes(TArray<FBMStaticPropType> PropTypes) {
}

void ABMBeerPhotographyManager::SaveCurrentPropPositionSettings(TArray<FBMPropPositionSet> Settings) {
}

void ABMBeerPhotographyManager::SaveCurrentPostprocessingSettings(TArray<FBMPostProcessingSettings> Settings) {
}

void ABMBeerPhotographyManager::SaveCurrentLightingSettings(TArray<FBMPhotoLightingSettings> Settings) {
}

void ABMBeerPhotographyManager::SaveCurrentDatatable(TArray<FTableRowBase> Settings, TArray<FName> RowNames, UDataTable* DataTableToSaveTo) {
}

void ABMBeerPhotographyManager::SaveCurrentCameraSettings(TArray<FBMCameraSettings> CameraSettings) {
}

void ABMBeerPhotographyManager::SaveCurrentBackgroundSettings(TArray<FBMBackgroundSettings> Settings) {
}

EBMBeerGlassType ABMBeerPhotographyManager::GetGlassTypeForBeerCategory(EBMBeerCategory BeerCategory) {
    return EBMBeerGlassType::NONE;
}

TSubclassOf<AActor> ABMBeerPhotographyManager::GetGlassClassFromGlassCategoryType(EBMBeerGlassType GlassCategory) {
    return NULL;
}

EBMBottleType ABMBeerPhotographyManager::GetBottleTypeForBeerCategory(EBMBeerCategory BeerCategory) {
    return EBMBottleType::NONE;
}

TSubclassOf<AActor> ABMBeerPhotographyManager::GetBottleClassFromBottleCategoryType(EBMBottleType BottleCategory) {
    return NULL;
}

void ABMBeerPhotographyManager::AddSelectedActorToStaticProps(FBMStaticPropType NewPropType) {
}

ABMBeerPhotographyManager::ABMBeerPhotographyManager() {
    this->GlassActor = NULL;
    this->ScenePostProcessVolume = NULL;
    this->TableActor = NULL;
    this->BackdropActor = NULL;
    this->BeerStylesDataTable = NULL;
    this->BeerPositions_DT = NULL;
    this->CameraSettings_DT = NULL;
    this->PropPosition_DT = NULL;
    this->PropType_DT = NULL;
    this->PostProcessing_DT = NULL;
    this->Background_DT = NULL;
    this->TableSettings_DT = NULL;
    this->LightingSettings_DT = NULL;
    this->HDRISettings_DT = NULL;
    this->StaticPropSet_DT = NULL;
    this->MetaGameDataClass = NULL;
}

