#include "BMBaseTap.h"

class ABMTube;
class ABMDynamicContainer;
class UMaterial;
class USplineComponent;

void ABMBaseTap::WaterTapOnTweenComplete() {
}

void ABMBaseTap::TurnOffWaterFlowing() {
}

void ABMBaseTap::TransferLiquid(ABMDynamicContainer* OtherContainer) {
}

void ABMBaseTap::SetShouldLevelOut(bool bShouldLevel) {
}

void ABMBaseTap::SetPercentageOpen(float Percent) {
}

void ABMBaseTap::SetIsIntake(bool intake) {
}

void ABMBaseTap::SetContainer(ABMDynamicContainer* NewContainer) {
}

void ABMBaseTap::SetAllowTransfer(bool TransferAllowed) {
}

void ABMBaseTap::OnTubeDisconnected(ABMTube* DisconectedTube) {
}

void ABMBaseTap::LiquidTransferUpdate() {
}

bool ABMBaseTap::IsTubeConnected() {
    return false;
}

bool ABMBaseTap::IsTransferrableIngredientsInContainer() {
    return false;
}

bool ABMBaseTap::IsTapActive() {
    return false;
}

void ABMBaseTap::InitalizeInvisibleTap() {
}

bool ABMBaseTap::GetTapOpen() {
    return false;
}

float ABMBaseTap::GetMaxFlowRate() {
    return 0.0f;
}

float ABMBaseTap::GetLiquidSurfaceHeight() {
    return 0.0f;
}

UMaterial* ABMBaseTap::GetLiquidFlowMaterial() {
    return NULL;
}

float ABMBaseTap::GetContainerZPosition() {
    return 0.0f;
}

ABMDynamicContainer* ABMBaseTap::GetContainer() {
    return NULL;
}

USplineComponent* ABMBaseTap::GetConnectionSpline() {
    return NULL;
}

FVector ABMBaseTap::GetAttachmentLocation() {
    return FVector{};
}

ABMDynamicContainer* ABMBaseTap::FindContainerStreamHits() {
    return NULL;
}

void ABMBaseTap::DetachTube(bool bShouldDeleteTube, bool bLeaveExtraInventorySpace, bool bIgnorePickUp) {
}

bool ABMBaseTap::CheckAbleToBeAttached() {
    return false;
}

bool ABMBaseTap::CanWithDrawLiquid() {
    return false;
}

float ABMBaseTap::CalculateAndGetCurrentFlowRate() {
    return 0.0f;
}

void ABMBaseTap::AttachTube(ABMTube* Tube) {
}

ABMBaseTap::ABMBaseTap() {
    this->TapConnectionSpline = NULL;
    this->FlowingSpline = NULL;
    this->FlowingLiquidSplineMesh = NULL;
    this->TapLiquidMesh = NULL;
    this->LiquidMaterial = NULL;
    this->LiquidMaterial_DefaultLit = NULL;
    this->LiquidDynamicMaterial = NULL;
    this->ShouldLiquidStreamFlow = false;
    this->ShaderParametersBP = NULL;
    this->TapLiquidShader = NULL;
    this->AudioAssetList = NULL;
    this->TapLiquidAudioComponent = NULL;
    this->bStreamSegmentsIncreased = false;
    this->MaxFlowRate = 0.00f;
    this->CurrentFlowRate = 0.00f;
    this->bIsVariableFlow = false;
    this->bIsConnectable = false;
    this->bIsTubeAttached = false;
    this->bIsAlwaysOpen = false;
    this->OpeningSize = 0.50f;
    this->bIsLauter = false;
    this->TapFlowingDirection = EBMTapFlowDirection::IntakeOnly;
    this->bIsMainKitchenTap = false;
    this->bIsCurrentlyIntake = false;
    this->bIsOpen = false;
    this->LiquidTransferCallTime = 0.10f;
    this->PercentTapOpen = 0.00f;
    this->StartFlow = true;
    this->TimeForTapLiquidStart = 1.00f;
    this->TimeForTapLiquidEnd = 1.00f;
    this->AnalogueControl = NULL;
    this->SetValueComp = NULL;
    this->ConnectedTube = NULL;
    this->Container = NULL;
    this->AllowTransfer = true;
    this->DelayTimeTurningWaterOff = true;
    this->bShouldLevelOut = true;
    this->HardSplashEffectParticleSystem = NULL;
    this->SoftSplashEffectParticleSystem = NULL;
    this->OvverrideMaterial = NULL;
    this->TweenContainer = NULL;
    this->bNoTween = false;
}

