#include "BMSteamShaderControl.h"

class ABMDynamicContainer;
class UMaterial;
class UMaterialInstanceDynamic;

void UBMSteamShaderControl::SetShaderProperties(ABMDynamicContainer* Container, bool InEditor) {
}

void UBMSteamShaderControl::SetDefaultValues() {
}

float UBMSteamShaderControl::GetCodeValue(EBMSteamShaderPropertyType PropertyType) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMSteamShaderControl::AssignDefaultMaterial(UMaterial* DefaultMaterial) {
    return NULL;
}

UBMSteamShaderControl::UBMSteamShaderControl() {
    this->SteamOpacityMin = 0.00f;
    this->SteamOpacityMax = 2.00f;
}

