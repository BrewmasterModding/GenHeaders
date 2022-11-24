#include "BMDynamicContainer.h"
#include "BMSubmitBeerInteraction.h"

class ABMTube;
class UBMPouringMeshComponent;
class ABMCO2Tank;
class UProceduralMeshComponent;
class UBMPourableComponent;
class UBMObjectTransfer;
class UStaticMeshComponent;
class USkeletalMeshComponent;
class ABMBaseTap;
class UBMCarryableComponent;
class UBMAnalogueControlComponent;
class AActor;

void ABMDynamicContainer::UpdateGrainOverflowingVisualData() {
}

void ABMDynamicContainer::UpdateFromBrewSim() {
}

void ABMDynamicContainer::UpdateFoamVisualData(float Height) {
}

void ABMDynamicContainer::SetupUpdates() {
}

void ABMDynamicContainer::SetTubeConnection(ABMTube* Tube) {
}

void ABMDynamicContainer::SetSwayStiffness(float NewSwayValue) {
}

void ABMDynamicContainer::SetLiquidVolumeByPercent(float Percent, float Temperature) {
}

void ABMDynamicContainer::SetLiquidVolume(float Mass, float Temperature) {
}

void ABMDynamicContainer::SetKegStandVisibility(bool bIsVisible) {
}

void ABMDynamicContainer::SetIsLidOpen(bool LidState) {
}

void ABMDynamicContainer::SetIngredientVolume(float Mass, float Temperature, FName IngredientName) {
}

void ABMDynamicContainer::SetContainerSealability(bool sealed) {
}

void ABMDynamicContainer::SetAirlockBubbling(float Speed, float Opacity) {
}

void ABMDynamicContainer::RemoveUpdatesFromBrewSim() {
}

void ABMDynamicContainer::PopLidOpen() {
}

void ABMDynamicContainer::OnTubeDisconnected(ABMTube* Tube) {
}

void ABMDynamicContainer::OnAttachedEquipmentChanged() {
}

void ABMDynamicContainer::MergeYeastList(const TArray<FName>& inYeastTypes) {
}

void ABMDynamicContainer::MergeItemList(TArray<FName> Items) {
}

bool ABMDynamicContainer::IsThisTubeConnected(ABMTube* TubeToTest) {
    return false;
}

void ABMDynamicContainer::IsHeadPresent(bool isPresent) {
}

bool ABMDynamicContainer::IsAirlockAttached() {
    return false;
}

void ABMDynamicContainer::InstantlyCloseLid() {
}

void ABMDynamicContainer::IncrementBlend(FName GrainBlendScalar) {
}


TArray<FName> ABMDynamicContainer::GetYeastList() {
    return TArray<FName>();
}

float ABMDynamicContainer::GetTotalNonDissolvedMass() {
    return 0.0f;
}

float ABMDynamicContainer::GetTotalContentsVolume() {
    return 0.0f;
}

float ABMDynamicContainer::GetShaderLiquidOpacity() {
    return 0.0f;
}

FLinearColor ABMDynamicContainer::GetShaderLiquidColour() {
    return FLinearColor{};
}

UBMPouringMeshComponent* ABMDynamicContainer::GetPouringMeshComponent() {
    return NULL;
}

UBMPourableComponent* ABMDynamicContainer::GetPourComponent() {
    return NULL;
}

UBMPourableComponent* ABMDynamicContainer::GetPourableComponent() {
    return NULL;
}

float ABMDynamicContainer::GetOverallVolumeInContainer() {
    return 0.0f;
}

UBMObjectTransfer* ABMDynamicContainer::GetObjectTransferComponent() {
    return NULL;
}

float ABMDynamicContainer::GetLiquidVolumePercent() {
    return 0.0f;
}

FVector ABMDynamicContainer::GetLiquidSurfacePosition(float liquidFilledPercent) {
    return FVector{};
}

UProceduralMeshComponent* ABMDynamicContainer::GetLiquidProcMesh() {
    return NULL;
}

UStaticMeshComponent* ABMDynamicContainer::GetLiquidContainer() {
    return NULL;
}

USkeletalMeshComponent* ABMDynamicContainer::GetKegStandMesh_Implementation() {
    return NULL;
}

TArray<FName> ABMDynamicContainer::GetItemList() {
    return TArray<FName>();
}

bool ABMDynamicContainer::GetIsHeadPresent() {
    return false;
}

bool ABMDynamicContainer::GetIsContainerSealed() {
    return false;
}

float ABMDynamicContainer::GetHighestFoamVolume() {
    return 0.0f;
}

float ABMDynamicContainer::GetHeadSizeValue() {
    return 0.0f;
}

FString ABMDynamicContainer::GetHeadSizeDescription() {
    return TEXT("");
}

float ABMDynamicContainer::GetGrainVolumePercent(bool bIncludeAirgaps) {
    return 0.0f;
}

UBMPouringMeshComponent* ABMDynamicContainer::GetGrainPouringMeshComponent() {
    return NULL;
}

float ABMDynamicContainer::GetCurrentLiquidVolume() {
    return 0.0f;
}

float ABMDynamicContainer::GetCurrentGrainVolume() {
    return 0.0f;
}

float ABMDynamicContainer::GetContainerVolumeCapacity() {
    return 0.0f;
}

FBMContainerBrewSimFixedProperties ABMDynamicContainer::GetContainerProperties() {
    return FBMContainerBrewSimFixedProperties{};
}

float ABMDynamicContainer::GetContainerLiquidPercent() {
    return 0.0f;
}

void ABMDynamicContainer::GetConnectedTubes(TArray<ABMTube*>& Tubes, bool bIncludeTapConnections) {
}

ABMCO2Tank* ABMDynamicContainer::GetCO2Tank() {
    return NULL;
}

float ABMDynamicContainer::GetClarityValue() {
    return 0.0f;
}

FString ABMDynamicContainer::GetClarityDescription() {
    return TEXT("");
}

ABMBaseTap* ABMDynamicContainer::GetChildTapConnectedToTube() {
    return NULL;
}

UBMCarryableComponent* ABMDynamicContainer::GetCarryComponent() {
    return NULL;
}

float ABMDynamicContainer::GetBubblesValue() {
    return 0.0f;
}

FString ABMDynamicContainer::GetBubblesDescription() {
    return TEXT("");
}

float ABMDynamicContainer::GetBodyValue() {
    return 0.0f;
}

FString ABMDynamicContainer::GetBodyDescription() {
    return TEXT("");
}

FString ABMDynamicContainer::GetBatchSizeDescription() {
    return TEXT("");
}

UBMAnalogueControlComponent* ABMDynamicContainer::GetAnalogueControlComponent() {
    return NULL;
}

void ABMDynamicContainer::FadeOutLace() {
}

void ABMDynamicContainer::FadeInLace() {
}

void ABMDynamicContainer::FadeGrainOverflowingVisualData() {
}

void ABMDynamicContainer::DisconnectTubes() {
}

void ABMDynamicContainer::ContainerPutDown() {
}

void ABMDynamicContainer::ContainerPickedUp() {
}

void ABMDynamicContainer::CheckForPackagedData() {
}

bool ABMDynamicContainer::CheckForIngredientsAvalibleForTubeTransfer() {
    return false;
}

bool ABMDynamicContainer::CanPlaceObjectIn(AActor* ActorToBePlaced, TMap<EBMInput, FName>& InvalidInputActions) {
    return false;
}

bool ABMDynamicContainer::CanBeAttachedTo(AActor* ActorToBeAttached) {
    return false;
}

bool ABMDynamicContainer::CanAnotherTubeConnectDirectly() {
    return false;
}

float ABMDynamicContainer::CalculateVolumeFromPercentage(float Value) {
    return 0.0f;
}

bool ABMDynamicContainer::CalculateAndGetTransferableContents(float MaxSize) {
    return false;
}

bool ABMDynamicContainer::AreAnyTubesConnected() {
    return false;
}

void ABMDynamicContainer::ApplyUpdates() {
}

float ABMDynamicContainer::AirlockPressureRelease(float Carbonation, float Threshold) {
    return 0.0f;
}

void ABMDynamicContainer::AddYeastAsUsedOnBeer(FName Yeast) {
}

void ABMDynamicContainer::AddLiquidVolume(float Mass, float Temperature) {
}

void ABMDynamicContainer::AddItemAsUsedOnBeer(FName Item) {
}

void ABMDynamicContainer::AddIngredientVolume(float Mass, float Temperature, FName IngredientName) {
}

ABMDynamicContainer::ABMDynamicContainer() {
    this->MinimumLiquidZOffset = 0.00f;
    this->bSimulatorUpdatesBound = false;
    this->LowLiquidCapSections = 6;
    this->MediumLiquidCapSections = 9;
    this->HighLiquidCapSections = 12;
    this->LiquidCapSections = 5;
    this->MaxSwayCurve = NULL;
    this->SwayStiffness = 5.00f;
    this->SwayDampingFactor = 0.50f;
    this->GrainAirGapPercent = 0.00f;
    this->GrainBlendTime = 5.00f;
    this->MaxGrainBlendValue = 150.00f;
    this->bDoesContainerHaveTransferrableContents = false;
    this->bIsSealed = false;
    this->bIsLidOn = true;
    this->bShowCO2Tank = false;
    this->ShouldSpawnLiquidRegardlessOfLid = false;
    this->ShouldOverwriteLiquidPercent = false;
    this->OverwriteLiquidPercent = 0.00f;
    this->KeepWaterAtOverwriteLiquidPercent = false;
    this->ShouldOverwriteIngredientPercent = false;
    this->OverwriteIngredientMass = 0.00f;
    this->KeepGrainAtOverwriteGrainPercent = false;
    this->UseContainerSizeDataTable = false;
    this->TransitionToOverflowSpeed = 1.00f;
    this->OverflowLiquidLossRate = 1.00f;
    this->BlackAlphaVertices = 1;
    this->OverflowingFallSpeed = 1500.00f;
    this->RemoveOverflowLiquidSpeed = 30.00f;
    this->OverflowCapPercent = 0.01f;
    this->SplashEffectParticleSystem = NULL;
    this->SplashEffectTranslucencySortPriority = 0;
    this->LiquidDiskEffectParticleSystem = NULL;
    this->LiquidDiskEffectTranslucencySortPriority = 0;
    this->LiquidDiskEffectFadeInTime = 2.00f;
    this->LiquidDiskEffectFadeOutTime = 4.00f;
    this->StartingOverflowBaseOpacity = 0.50f;
    this->OverflowBaseOpacityRampUpSpeed = 1.00f;
    this->OverflowBaseOpacityRampDownSpeed = 1.00f;
    this->OverflowBaseOpacityRampDownStartVolume = 1.00f;
    this->GrainOverflowEffectTranslucencySortPriority = 0;
    this->OverflowingGrainMainRateScaleLowerBound = 0.40f;
    this->OverflowingGrainMainRateScaleUpperBound = 0.90f;
    this->OverflowingGrainLateRateScaleLowerBound = 0.90f;
    this->OverflowingGrainLateRateScaleUpperBound = 1.00f;
    this->OverflowingGrainWetGrainBlendLowerBound = 0.20f;
    this->OverflowingGrainWetGrainBlendUpperBound = 0.50f;
    this->LiquidDiskFX = NULL;
    this->FoamVolumePercent = 0.00f;
    this->SyrupMaterial = NULL;
    this->PowderMaterial = NULL;
    this->SyrupMaterialDynamic = NULL;
    this->PowderMaterialDynamic = NULL;
    this->AgitationPouringMultiplier = 3.00f;
    this->AgitationTapsTubeMultiplier = 2.00f;
    this->LidInteractionComponent = NULL;
    this->AudioAssetList = NULL;
    this->PouringSoundAudioComponent = NULL;
    this->InitialImpactAudioComponent = NULL;
    this->EndingImpactAudioComponent = NULL;
    this->SimmeringAudioComponent = NULL;
    this->BoilingAudioComponent = NULL;
    this->BoilingLidClosedAudioComponent = NULL;
    this->OverflowingAudioComponent = NULL;
    this->CurrentPourTarget = NULL;
    this->GrainVolumeHeight = 0.00f;
    this->LiquidVolumeHeight = 0.00f;
    this->LiquidVolumePercent = 0.00f;
    this->GrainVolumePercent = 0.00f;
    this->VolumeOfGrainIncludingAirgaps = 0.00f;
    this->GrainVolumeIgnoringGaps = 0.00f;
    this->GrainAirGapFraction = 0.30f;
    this->GrainOverflowFadeOutRate = 0.34f;
    this->bshouldUpdateShaders = true;
    this->UpdateShadersOnBeginPlay = true;
    this->ShaderParametersBP = NULL;
    this->BrewingShader = NULL;
    this->OverflowShader = NULL;
    this->PouringEffects = NULL;
    this->LaceShader = NULL;
    this->GrainShader = NULL;
    this->GrainPouringEffectShader = NULL;
    this->YeastEffectUpShader = NULL;
    this->YeastEffectDownShader = NULL;
    this->BoilingBubblesShader = NULL;
    this->SteamShader = NULL;
    this->YeastShader = NULL;
    this->CurrentMat = NULL;
    this->YeastRaftsUpParticles = NULL;
    this->YeastRaftsDownParticles = NULL;
    this->BoilingBubblesParticles = NULL;
    this->SteamParticles = NULL;
    this->GrainOverflowEffectParticles = NULL;
    this->EffectsInsideLiquidSpawnLocation = NULL;
    this->OverflowingGrainSpawnLocation = NULL;
    this->YeastRaftsUpParticlesTranslucencySortPriority = 0;
    this->YeastRaftsDownParticlesTranslucencySortPriority = 0;
    this->BoilingBubblesParticlesTranslucencySortPriority = 0;
    this->SteamParticlesTranslucencySortPriority = 0;
    this->YeastRaftsUpParticleComponent = NULL;
    this->YeastRaftsDownParticleComponent = NULL;
    this->BoilingBubblesParticleComponent = NULL;
    this->SteamParticleComponent = NULL;
    this->GrainOverflowingComponent = NULL;
    this->MaxDistanceFromCenter = 10.00f;
    this->IgnoreSizeDataMaxDistanceFromCenter = false;
    this->IgnoreSizeDataOverflowingGrainSpawnLocation = false;
    this->AttachedLid = NULL;
    this->AttachedCO2Tank = NULL;
    this->ThermometerDial = NULL;
    this->CanGoInSink = true;
    this->bCanPourInto = true;
    this->bAllowSwaying = true;
    this->OnlyAllowIngredientsPourable = false;
    this->bCanPourMaltExtractInto = true;
    this->WaitingForPackagedData = false;
    this->SubmitBeerInteraction = CreateDefaultSubobject<UBMSubmitBeerInteraction>(TEXT("Submit Beer Interaction"));
    this->bHasKegStand = false;
    this->MeshSliceThresholdPercentage = 0.00f;
    this->MaxNumberOfDirectTubeConnections = 0;
}

