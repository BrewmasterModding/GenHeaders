#include "BMOverflowingShaderControl.h"

class ABMDynamicContainer;
class UMaterial;
class UMaterialInstanceDynamic;

void UBMOverflowingShaderControl::SetShaderProperties(ABMDynamicContainer* Container, bool InEditor) {
}

float UBMOverflowingShaderControl::GetCodeValue(EBMOverflowingShaderPropertyType PropertyType) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMOverflowingShaderControl::AssignDefaultMaterial(UMaterial* DefaultMaterial) {
    return NULL;
}

UBMOverflowingShaderControl::UBMOverflowingShaderControl() {
    this->IsBarrel = false;
}

