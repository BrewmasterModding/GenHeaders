#include "BMBeerBubblesEffectControl.h"

class ABMDynamicContainer;

void UBMBeerBubblesEffectControl::SetParticleProperties(ABMDynamicContainer* Container, bool InEditor) {
}

float UBMBeerBubblesEffectControl::GetCodeValue(EBMBeerBubblesEffectPropertyType PropertyType) {
    return 0.0f;
}

UBMBeerBubblesEffectControl::UBMBeerBubblesEffectControl() {
    this->BubblesMinCodeValue = 0.00f;
    this->BubblesMaxCodeValue = 5.00f;
    this->ClarityMinCodeValue = 0.00f;
    this->ClarityMaxCodeValue = 100.00f;
    this->HeadSizeMinCodeValue = 0.00f;
    this->HeadSizeMaxCodeValue = 100.00f;
}

