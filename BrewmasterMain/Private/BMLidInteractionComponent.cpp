#include "BMLidInteractionComponent.h"

class AActor;

void UBMLidInteractionComponent::SetLidOpen(AActor* ActorCalledDocking) {
}

void UBMLidInteractionComponent::SetLidClosed(AActor* ActorCalledDocking) {
}

void UBMLidInteractionComponent::MorpherAnimationComplete() {
}

bool UBMLidInteractionComponent::GetLidAnimating() {
    return false;
}

UBMLidInteractionComponent::UBMLidInteractionComponent() {
    this->LidStartsOpen = false;
    this->OpenBeforePour = false;
    this->OpenInHand = false;
    this->Reclose = false;
    this->MorpherAnimation = NULL;
    this->DockingComponent = NULL;
    this->Lid = NULL;
    this->AudioAssetList = NULL;
}

