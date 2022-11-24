#include "BMTube.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "BMObjectTransfer.h"

class UTweenContainer;
class UMeshComponent;
class ABMBaseTap;
class AActor;
class ABMDynamicContainer;

void ABMTube::TweenHideTubeConnectionPreview() {
}

bool ABMTube::TryInterruptActiveTween(bool bCompleteTween) {
    return false;
}

void ABMTube::StopTransfer() {
}

void ABMTube::ShowTubeConnectionPreview() {
}

void ABMTube::SetupTubeConnectionPreview(FVector StartPos, FVector EndPos) {
}

void ABMTube::SetUpConnectionBetweenTaps() {
}

void ABMTube::PlayEmptyingAnimation() {
}

void ABMTube::OnTubeConnectionFinished(UTweenContainer* TweenContainer) {
}

void ABMTube::HideTubeConnection() {
}

UMeshComponent* ABMTube::GetTubePreviewMesh() {
    return NULL;
}

ABMDynamicContainer* ABMTube::GetOtherConnectedContainer(ABMBaseTap* TapRequesting) {
    return NULL;
}

bool ABMTube::GetIsConnected() {
    return false;
}

bool ABMTube::GetFlowDirection() {
    return false;
}

void ABMTube::DetachTubes(bool bShouldDeleteTube, bool bLeaveExtraInventorySpace, bool bIgnorePickUp) {
}

void ABMTube::DetachTubeFromActor(AActor* ConnectionPoint, bool Delete, bool bLeaveExtraInventorySpace) {
}

void ABMTube::CalculateSectionAnimation(int32 CurrentIndex) {
}

FVector ABMTube::CalculateAndSetTangent(FVector Normal) {
    return FVector{};
}

bool ABMTube::AttemptToReachFloorFromStartPoint(FVector StartPos, FVector EndPos) {
    return false;
}

bool ABMTube::AttemptToReachFloorFromEndPoint(FVector StartPos, FVector EndPos) {
    return false;
}

ABMTube::ABMTube() {
    this->DefaultMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->TubePreviewMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PreviewMesh"));
    this->TubeOutsideMesh = NULL;
    this->TubeInsideMesh = NULL;
    this->TubeLiquidMesh = NULL;
    this->LiquidMat = NULL;
    this->TubeMat = NULL;
    this->TubeStartMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StartPos"));
    this->TubeEndMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndPos"));
    this->TubeConnectionPreview = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TubeConnectionPreview"));
    this->Spline = NULL;
    this->SplineSegments = 0;
    this->ObjectTransferSystem = CreateDefaultSubobject<UBMObjectTransfer>(TEXT("ObjectTransfer"));
    this->bIsPoint1TapConnection = false;
    this->bIsPoint2TapConnection = false;
    this->bIsStaticTube = false;
    this->RemovedLastPoint = false;
    this->bIsConnected = false;
    this->ConnectedPump = NULL;
    this->ConnectedThermalCoupling = NULL;
    this->AudioAssetList = NULL;
    this->ActorConnectedpoint1 = NULL;
    this->ActorConnectedpoint2 = NULL;
    this->Tap1 = NULL;
    this->Tap2 = NULL;
    this->MaxRangeDistance = 200.00f;
    this->Container1 = NULL;
    this->Container2 = NULL;
    this->LiquidMask1Name = TEXT("FadeMask_1");
    this->LiquidMask2Name = TEXT("FadeMask_2");
    this->RimConnectionTapClass = NULL;
    this->LiquidFlowTime = 0.10f;
    this->SplineAnimationCurrentDistance = 0.00f;
    this->CurrentSplineIndex = 0;
    this->AnimationTime = 0.00f;
    this->CurrentAnimationTime = 0.00f;
    this->AnimationRate = 0.00f;
    this->FillingTube = false;
    this->EmptyingTube = false;
    this->bisTubeFilled = false;
    this->LiquidShaderValue = 0.00f;
    this->CurrentRateValue = 0.00f;
    this->FlowingFromContainer = NULL;
    this->FlowingToContainer = NULL;
    this->ActiveTweenContainer = NULL;
    this->bShouldBeDeletedOverride = false;
}

