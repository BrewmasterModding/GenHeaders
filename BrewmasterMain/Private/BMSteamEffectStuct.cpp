#include "BMSteamEffectStuct.h"

FBMSteamEffectStuct::FBMSteamEffectStuct() {
    this->Property = EBMSteamEffectPropertyType::SteamAmountAndLifetime;
    this->bIsOverrideCodeProperty = false;
    this->OverrideCodePropertyValue = 0.00f;
}

