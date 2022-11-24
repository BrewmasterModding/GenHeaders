#include "BMBoilingBubbleEffectControl.h"

class ABMDynamicContainer;

void UBMBoilingBubbleEffectControl::SetParticleProperties(ABMDynamicContainer* Container, bool InEditor) {
}

void UBMBoilingBubbleEffectControl::SetManualCodeProperties(ABMDynamicContainer* Container) {
}

float UBMBoilingBubbleEffectControl::GetCodeValue(EBMBoilingBubblesEffectPropertyType PropertyType) {
    return 0.0f;
}

UBMBoilingBubbleEffectControl::UBMBoilingBubbleEffectControl() {
    this->BubblesCodeMinValue = 0.00f;
    this->BubblesCodeMaxValue = 5.00f;
    this->TemperatureCodeMinValue = 0.00f;
    this->TemperatureCodeMaxValue = 100.00f;
}

