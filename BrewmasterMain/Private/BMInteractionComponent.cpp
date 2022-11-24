#include "BMInteractionComponent.h"

class AActor;

void UBMInteractionComponent::SetRadius(float Raduis) {
}

EBMInteractionType UBMInteractionComponent::GetInteractionType() {
    return EBMInteractionType::NONE;
}

void UBMInteractionComponent::GetFocusView(FVector& CameraForwards, FRotator& CameraRotation, FBoxSphereBounds& RequiredInView, TArray<AActor*>& FocusObjects) {
}

UBMInteractionComponent::UBMInteractionComponent() {
    this->bInteractableInWorld = true;
    this->bInteractableInHand = false;
    this->bHasInteractionSequence = false;
    this->bCanCameraMoveInSequence = false;
    this->ExcludeAttachedActorsForFade = true;
    this->CameraMaxRotationTolerence = 45.00f;
    this->Radius = 0.00f;
    this->ChangeOriginalCameraPosition = false;
    this->YawOffsetPosition = 0.00f;
    this->IsGhostInteraction = false;
    this->LinkedRepeatableAction = TEXT("NULL");
    this->LinkedActionButtonID = -1;
    this->InteractionType = EBMInteractionType::NONE;
}

