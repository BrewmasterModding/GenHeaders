#include "BMFixedData.h"

class UCurveFloat;

float ABMFixedData::GetYeastPopulationPerGram() {
    return 0.0f;
}

FBMYeastIngredientData ABMFixedData::GetYeastData(FName IngredientName) {
    return FBMYeastIngredientData{};
}

UCurveFloat* ABMFixedData::GetYeastActivityTaperUpRateCurve() {
    return NULL;
}

UCurveFloat* ABMFixedData::GetYeastActivityTaperOffRateCurve() {
    return NULL;
}

TArray<int32> ABMFixedData::GetTimeSkipOptions() {
    return TArray<int32>();
}

float ABMFixedData::GetTemperatureScalingFactor() {
    return 0.0f;
}

float ABMFixedData::GetSubFlavourMultiplier(EIngredientSubTypeOther IngredientType, bool bIsNote) {
    return 0.0f;
}

int32 ABMFixedData::GetStartingNumberOfSeasons() {
    return 0;
}

float ABMFixedData::GetSpecificGravityOfEthanolWaterMix(const float FractionalMassEthanol) {
    return 0.0f;
}

float ABMFixedData::GetSetWaterEvaporationRate() {
    return 0.0f;
}

FBMHeatExchangeData ABMFixedData::GetRoomHeatExchange() {
    return FBMHeatExchangeData{};
}

FBMProteinAdditionStatsData ABMFixedData::GetProteinAdditionStatsData() {
    return FBMProteinAdditionStatsData{};
}

TArray<EFlavourNotes> ABMFixedData::GetNegativeFlavours() {
    return TArray<EFlavourNotes>();
}

float ABMFixedData::GetNegativeFlavourContaminationMultiplier() {
    return 0.0f;
}

float ABMFixedData::GetMaxRateOfChangeInYeastActivity() {
    return 0.0f;
}

FBMMaltIngredientData ABMFixedData::GetMaltData(FName IngredientName) {
    return FBMMaltIngredientData{};
}

FBMInsulationStatsData ABMFixedData::GetInsulationStatsData() {
    return FBMInsulationStatsData{};
}

FBMGenericIngredientData ABMFixedData::GetIngredientData(FName UniqueName) {
    return FBMGenericIngredientData{};
}

FBMHopsIngredientData ABMFixedData::GetHopsData(FName IngredientName) {
    return FBMHopsIngredientData{};
}

float ABMFixedData::GetHoppyAndBitterDataStrengthAmount() {
    return 0.0f;
}

float ABMFixedData::GetHoppyAndBitterDataIBUAmount() {
    return 0.0f;
}

FString ABMFixedData::GetFlavourString(const EFlavourCategory Category) {
    return TEXT("");
}

float ABMFixedData::GetFlavourMultiplier(EIngredientType IngredientType, bool bIsNote) {
    return 0.0f;
}

UCurveFloat* ABMFixedData::GetEvaporationRateCurve() {
    return NULL;
}

bool ABMFixedData::GetEnableFurnitureSwapMode() {
    return false;
}

TArray<EBMFurnitureSubcategory> ABMFixedData::GetDisableRotationForFurnitureTypes() {
    return TArray<EBMFurnitureSubcategory>();
}

float ABMFixedData::GetDenaturingRate() {
    return 0.0f;
}

int32 ABMFixedData::GetDaysInAMonth() {
    return 0;
}

FBMCoolingStatsData ABMFixedData::GetCoolingStatsData() {
    return FBMCoolingStatsData{};
}

float ABMFixedData::GetContaminationMultiplier() {
    return 0.0f;
}

float ABMFixedData::GetCO2PercentLostPerMintue() {
    return 0.0f;
}

FBMBeerStatsData ABMFixedData::GetBeerStatConstants() {
    return FBMBeerStatsData{};
}

FBMArtDataYeastPacketIngredients ABMFixedData::GetArtYeastData(FName IngredientName) {
    return FBMArtDataYeastPacketIngredients{};
}

FBMArtDataSteepableGrainIngredients ABMFixedData::GetArtSteepableGrainData(FName IngredientName) {
    return FBMArtDataSteepableGrainIngredients{};
}

FBMArtDataMaltExtractCanIngredients ABMFixedData::GetArtMaltData(FName IngredientName) {
    return FBMArtDataMaltExtractCanIngredients{};
}

FBMArtDataHopsMeshBagIngredients ABMFixedData::GetArtHopData(FName IngredientName) {
    return FBMArtDataHopsMeshBagIngredients{};
}

FBMArtDataHerbJarIngredients ABMFixedData::GetArtHerbData(FName IngredientName) {
    return FBMArtDataHerbJarIngredients{};
}

FBMArtDataGrainBagIngredients ABMFixedData::GetArtGrainData(FName IngredientName) {
    return FBMArtDataGrainBagIngredients{};
}

FBMArtDataBottledIngredients ABMFixedData::GetArtBottledData(FName IngredientName) {
    return FBMArtDataBottledIngredients{};
}

float ABMFixedData::GetAgitationDecreaseRate() {
    return 0.0f;
}

float ABMFixedData::GetAgitationCap() {
    return 0.0f;
}

ABMFixedData::ABMFixedData() {
    this->EnzymeDenaturingRate = 0.00f;
    this->StarchExtractionEfficiency = 0.79f;
    this->UtilisationRateConstant = 0.00f;
    this->UtilisationTimePlateauConstant = 4.15f;
    this->UtilisationGravityMultiplierConstant = 1.65f;
    this->UtilisationGravityBaseConstant = 0.00f;
    this->CO2PercentLostPerMintue = 0.50f;
    this->SetWaterEvaporationASecond = 1.00f;
    this->NumberOfDaysInAMonth = 28;
    this->StartingSeason = EBMSeasonsEnum::Spring;
    this->StartingNumberOfSeasons = 1;
    this->HoppyAndBitterIBUAmount = 0.00f;
    this->HoppyAndBitterStrengthToAdd = 0.00f;
    this->AgitationDecreaseRate = 0.00f;
    this->AgitationCap = 3000.00f;
    this->IngredientDataTable = NULL;
    this->HopsIngredientDataTable = NULL;
    this->MaltIngredientDataTable = NULL;
    this->YeastIngredientDataTable = NULL;
    this->TriggeredContaminationDataSource = NULL;
    this->InherentContaminationDataSource = NULL;
    this->ArtGrainDataTable = NULL;
    this->ArtYeastDataTable = NULL;
    this->ArtBottledDataTable = NULL;
    this->ArtHerbDataTable = NULL;
    this->ArtSteepableGrainDataTable = NULL;
    this->ArtHopDataTable = NULL;
    this->ArtMaltDataTable = NULL;
    this->HopsUtilizationFlavour = NULL;
    this->HopsFlavourAttenuationRate = NULL;
    this->HopsFlavourAttenuationSafeTime = 0.00f;
    this->HopsFlavourSafeTimeRandomisationRange = 0.00f;
    this->EvaporationRateCurve = NULL;
    this->YeastActivityTaperOffRateCurve = NULL;
    this->YeastActivityTaperUpRateCurve = NULL;
    this->MaxRateOfChangeInYeastActivity = 0.00f;
    this->RelativeDensityOfAlcoholByMassPercentage = NULL;
    this->GlobalTemperatureScalingFactor = 0.00f;
    this->bYeastActivityTaperDebugLogOn = false;
    this->bUsePPGCalculationForSG = false;
    this->MinMassForFruitStyleSpecializations = 1.00f;
    this->MinMassForFruitSpiceStyleSpecializations = 1.00f;
    this->MinMassForWoodAgedStyleSpecializations = 1.00f;
    this->MinMassForSpiceStyleSpecializations = 1.00f;
    this->ContaminationMultiplier = 1.00f;
    this->NegativeFlavourContaminationMultiplier = 1.00f;
    this->ContidioningCaskFlavourMult = 1.00f;
    this->YeastPopulationPerGram = 0.00f;
    this->bAlowSimulationStepTimeVariation = true;
    this->StartingSimulatorStepTimeWhenVaried = 0.10f;
    this->MaxSimulatorStepTime = 100.00f;
    this->SimulationTimeStretchFactor = 0.01f;
    this->TimeStretchCutoffMult = 100.00f;
    this->bEnableFurnitureSwapMode = true;
}

