#include "BMStirringEffectControl.h"

class ABMDynamicContainer;

void UBMStirringEffectControl::SetParticleProperties(ABMDynamicContainer* Container, bool InEditor) {
}

float UBMStirringEffectControl::GetCodeValue(EBMStirringEffectPropertyType PropertyType) {
    return 0.0f;
}

UBMStirringEffectControl::UBMStirringEffectControl() {
    this->GrainToLiquidVolumeMin = 0.00f;
    this->GrainToLiquidVolumeMax = 1.00f;
}

