#include "BMDockingAnimationComponent.h"

class UAnimationAsset;
class AActor;
class USceneComponent;

void UBMDockingAnimationComponent::UndockObject() {
}

void UBMDockingAnimationComponent::UnDockingReaction() {
}

void UBMDockingAnimationComponent::UndockingAnimationComplete() {
}

void UBMDockingAnimationComponent::SetDockingState(EDockingState NewDockingState) {
}

void UBMDockingAnimationComponent::RemoveDockedChild(AActor* Child) {
}

void UBMDockingAnimationComponent::PlayDetachAnimation() {
}

void UBMDockingAnimationComponent::PlayAttachAnimation() {
}

void UBMDockingAnimationComponent::PlayAnimation(USceneComponent* AnimatingObject, UAnimationAsset* AnimationToPlay, bool IsLooping) {
}

void UBMDockingAnimationComponent::MovementComplete() {
}

bool UBMDockingAnimationComponent::IsAttachmentPointFree(FBMAttachPointID AttachmentPoint) {
    return false;
}

void UBMDockingAnimationComponent::DockToObjectSocket(FBMAttachPointID DockPointID, EBMTransferType transferType) {
}

void UBMDockingAnimationComponent::DockingReaction() {
}

void UBMDockingAnimationComponent::DockingAnimationComplete() {
}

void UBMDockingAnimationComponent::DetachComplete() {
}

void UBMDockingAnimationComponent::AddDockedChild(AActor* Child) {
}

UBMDockingAnimationComponent::UBMDockingAnimationComponent() {
    this->RootObjectBoneName = TEXT("ObjectRoot");
    this->DefaultSocketName = TEXT("ObjectRootSocket");
    this->bUseThisObjectSocket = true;
    this->ObjectTransferSystem = NULL;
    this->ObjectDockedTo = NULL;
    this->DockingState = EDockingState::Undocked;
    this->DockingAnimation = NULL;
    this->UndockingAnimation = NULL;
    this->DockingResponseAnimation = NULL;
    this->UndockingResponseAnimation = NULL;
    this->NumberOfClipPoints = 0;
    this->ClipPointsRadius = 0.00f;
}

