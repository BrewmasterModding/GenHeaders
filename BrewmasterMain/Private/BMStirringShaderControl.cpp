#include "BMStirringShaderControl.h"

class ABMDynamicContainer;
class UMaterial;
class UMaterialInstanceDynamic;

void UBMStirringShaderControl::SetShaderProperties(ABMDynamicContainer* Container, bool InEditor) {
}

void UBMStirringShaderControl::SetDefaultValues() {
}

float UBMStirringShaderControl::GetCodeValue(EBMStirringShaderPropertyType PropertyType) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMStirringShaderControl::AssignDefaultMaterial(UMaterial* DefaultMaterial) {
    return NULL;
}

UBMStirringShaderControl::UBMStirringShaderControl() {
    this->AmountOfGrainAndAnimationSpeedMin = 0.00f;
    this->AmountOfGrainAndAnimationSpeedMax = 1.00f;
}

