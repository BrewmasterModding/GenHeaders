#include "BMHighlightComponent.h"

class UBMCarryableComponent;
class AActor;

void UBMHighlightComponent::ShowTubeConnection() {
}

void UBMHighlightComponent::HideTubeConnection() {
}

void UBMHighlightComponent::CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee) {
}

UBMHighlightComponent::UBMHighlightComponent() {
    this->TreatAsBaseParentActor = false;
    this->Tap = NULL;
    this->bIsTap = false;
    this->Container = NULL;
    this->bIsContainer = false;
    this->bIsTube = false;
    this->bIsShowingTubeConnection = false;
    this->HighlightTime = 0.00f;
}

