#include "BMCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "BMPlayerInventoryInteractionComp.h"
#include "BMObjectDistanceSort.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent

class AActor;
class UBMCarryableComponent;
class USceneComponent;
class UBMInteractionComponent;

void ABMCharacter::UpdateXRayWidget(AActor* Interactee, TArray<FBMInWorldInteraction> PossibleInteraction) {
}

void ABMCharacter::UpdateXRayMode() {
}

void ABMCharacter::UpdateIteractiveCameraAngle(bool StateChanged) {
}

void ABMCharacter::UpdateActorsInCursor(TArray<FBMHitCounter>& ActorsInCursor, FHitResult HitResult) {
}

void ABMCharacter::UnFadeAllDitherFadeActors() {
}

void ABMCharacter::ToggleUpXRayMode() {
}

void ABMCharacter::ToggleDownXRayMode() {
}

void ABMCharacter::StartActorsToDitherFade(TArray<AActor*> ActorsToFade) {
}

bool ABMCharacter::ShouldKeepHighlight(UBMInteractionComponent* InteractionComp) {
    return false;
}

void ABMCharacter::SetActiveSequenceInteraction(UBMInteractionComponent* NewInteractionComp) {
}

void ABMCharacter::RemoveAllActorsControllingOwnHighlight() {
}

void ABMCharacter::RemoveActorControllingOwnHighlight(AActor* AddingActor) {
}


bool ABMCharacter::HandleInWorldInput(EBMInput InputID, int32 PressedKeyID) {
    return false;
}

USceneComponent* ABMCharacter::GetScalingPoint() {
    return NULL;
}

FString ABMCharacter::GetInteractionString_Debug(FBMInWorldInteraction Interaction) {
    return TEXT("");
}

AActor* ABMCharacter::GetCurrentActiveItem() {
    return NULL;
}

void ABMCharacter::FindAllActorsToDitherFade(TArray<AActor*>& ActorsToFade, float DistToObj, FVector CameraPos, FVector FocusPoint) {
}

void ABMCharacter::CreateInteractionCamera() {
}

void ABMCharacter::ChangeCamera(AActor* CameraChangingFrom, AActor* CameraChangingTo) {
}

void ABMCharacter::CarryComponentUpdate(UBMCarryableComponent* CarryableComponent, AActor* Interactee) {
}

bool ABMCharacter::CanPlayerMoveOrAdjustView() {
    return false;
}

bool ABMCharacter::CanCameraLookInSequence() {
    return false;
}

void ABMCharacter::AmountToYaw(float AmountToAdd) {
}

void ABMCharacter::AmountToPitch(float AmountToAdd) {
}

void ABMCharacter::AddControllerCursorInput(FVector2D InVector, bool bIsGamepad) {
}

void ABMCharacter::AddActorControllingOwnHighlight(AActor* AddingActor) {
}

ABMCharacter::ABMCharacter() {
    this->ActiveSequenceInteractionComp = NULL;
    this->CurrentXRayMode = EBMXrayInformationMode::ContextualMode;
    this->bIsContextMenuVisible = false;
    this->InteractionCamera = NULL;
    this->CameraClass = NULL;
    this->InteractionLength = 500;
    this->CarrySockets = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarrySockets"));
    this->PlayerInventoryComp = CreateDefaultSubobject<UBMPlayerInventoryInteractionComp>(TEXT("PlayerInventoryComp"));
    this->ObjectDistanceSortComp = CreateDefaultSubobject<UBMObjectDistanceSort>(TEXT("ObjectDistanceSortComp"));
    this->bShouldParentAttachmentHighlight = true;
    this->MaxAngleDifferenceForCameraBlend = 90.00f;
    this->GamepadCursorSensitivity = 1.00f;
    this->FadeTime = 2.00f;
    this->FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->WatchMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WatchMesh"));
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->bGamepadSticksSwapped = false;
    this->UseCarryTestA = false;
    this->UseCarryTestB = false;
    this->ScalingPoint = NULL;
    this->AllowPutDownWhileStowed = false;
    this->AudioAssetList = NULL;
    this->FootstepAudioComponent = NULL;
}

