#include "BMBolingBubblesShaderControl.h"

class ABMDynamicContainer;
class UMaterialInstance;
class UMaterialInstanceDynamic;

void UBMBolingBubblesShaderControl::SetShaderProperties(ABMDynamicContainer* Container, bool InEditor) {
}

float UBMBolingBubblesShaderControl::GetCodeValue(EBMBoilingBubblesShaderPropertyType PropertyType) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMBolingBubblesShaderControl::AssignDefaultMaterial(UMaterialInstance* DefaultMaterial) {
    return NULL;
}

UBMBolingBubblesShaderControl::UBMBolingBubblesShaderControl() {
}

