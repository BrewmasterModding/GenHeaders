#include "BMCarryableComponent.h"

class AActor;

void UBMCarryableComponent::UpdateTargetYaw(float Yaw) {
}

void UBMCarryableComponent::UndockComplete(AActor* ActorUndocking) {
}

void UBMCarryableComponent::SetGhostIsStale(bool IsStale) {
}

void UBMCarryableComponent::PlayInteractionAudio(EBMAudioAction AudioAction, AActor* DockingContext) {
}

AActor* UBMCarryableComponent::GetGhostActor() {
    return NULL;
}

void UBMCarryableComponent::CompleteMovement() {
}

void UBMCarryableComponent::AdjustRotation(bool bRotateClockwise) {
}

UBMCarryableComponent::UBMCarryableComponent() {
    this->TransitioningInteractee = NULL;
    this->PlayerChar = NULL;
    this->RootComp = NULL;
    this->PlayerAttachment = NULL;
    this->ActorGhost = NULL;
    this->bSingleHanded = true;
    this->bCanRotate = true;
    this->CarryState = ECarryState::NotCarried;
    this->NonStaticHeightTolerence = 50;
    this->ColorAndOpacityParamName = TEXT("Color");
    this->bPreventPickupWhenContainerAttached = false;
    this->UseToggleCarryInputForDetach = false;
    this->PlacementPreviewMaterial = NULL;
    this->PutDownInputStartTime = 0.00f;
    this->bIsPutDownInputHeld = false;
    this->IncreaseTime = 0.01f;
    this->DecreaseTime = 0.01f;
    this->ReleaseDelay = 0.03f;
}

