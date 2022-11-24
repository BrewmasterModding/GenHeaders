#include "BMFermentationYeastEffectControl.h"

class ABMDynamicContainer;

void UBMFermentationYeastEffectControl::SetParticleProperties(ABMDynamicContainer* Container, bool InEditor) {
}

void UBMFermentationYeastEffectControl::SetManualCodeProperties(ABMDynamicContainer* Container) {
}

float UBMFermentationYeastEffectControl::GetCodeValue(EBMFermentationYeastRaftEffectsPropertyType PropertyType) {
    return 0.0f;
}

UBMFermentationYeastEffectControl::UBMFermentationYeastEffectControl() {
    this->YeastActivityMinValue = 0.00f;
    this->YeastActivityMaxValue = 1.00f;
    this->bIsUp = false;
}

