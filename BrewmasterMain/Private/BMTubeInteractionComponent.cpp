#include "BMTubeInteractionComponent.h"

class AActor;

void UBMTubeInteractionComponent::RotateInteractee(AActor* Interactee, bool bRotateClockwise) {
}

UBMTubeInteractionComponent::UBMTubeInteractionComponent() {
    this->RotatingObject = NULL;
    this->ActorDestorying = false;
    this->IncreaseTime = 0.20f;
    this->DecreaseTime = 0.20f;
    this->bInteractionSequenceStarted = false;
    this->AudioAssetList = NULL;
}

