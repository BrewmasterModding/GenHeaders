#include "BMSteamEffectControl.h"

class ABMDynamicContainer;

void UBMSteamEffectControl::SetParticleProperties(ABMDynamicContainer* Container, bool InEditor) {
}

void UBMSteamEffectControl::SetManualCodeProperties(ABMDynamicContainer* Container) {
}

float UBMSteamEffectControl::GetCodeValue(EBMSteamEffectPropertyType PropertyType, ABMDynamicContainer* Container) {
    return 0.0f;
}

UBMSteamEffectControl::UBMSteamEffectControl() {
    this->EvaporationRateMin = 1.00f;
    this->EvaporationRateMax = 1.00f;
    this->TemperatureCodeMinValue = 0.00f;
    this->TemperatureCodeMaxValue = 100.00f;
}

