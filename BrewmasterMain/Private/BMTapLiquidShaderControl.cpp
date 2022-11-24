#include "BMTapLiquidShaderControl.h"

class UMaterial;
class ABMBaseTap;
class UMaterialInstanceDynamic;

void UBMTapLiquidShaderControl::SetShaderProperties(ABMBaseTap* Tap, bool InEditor) {
}

float UBMTapLiquidShaderControl::GetCodeValue(EBMTapLiquidShaderPropertyType PropertyType) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMTapLiquidShaderControl::AssignDefaultMaterial(UMaterial* DefaultMaterial) {
    return NULL;
}

UBMTapLiquidShaderControl::UBMTapLiquidShaderControl() {
    this->OpacityMin = 0.00f;
    this->OpacityMax = 2.00f;
}

