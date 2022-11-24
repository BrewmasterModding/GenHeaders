#include "BMSteamShaderStuct.h"

FBMSteamShaderStuct::FBMSteamShaderStuct() {
    this->Property = EBMSteamShaderPropertyType::SteamOpacity;
    this->bIsOverrideCodeProperty = false;
    this->OverrideCodePropertyValue = 0.00f;
}

