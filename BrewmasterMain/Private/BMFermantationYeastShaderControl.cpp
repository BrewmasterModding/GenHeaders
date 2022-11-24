#include "BMFermantationYeastShaderControl.h"

class ABMDynamicContainer;
class UMaterial;
class UMaterialInstanceDynamic;

void UBMFermantationYeastShaderControl::SetShaderProperties(ABMDynamicContainer* Container, bool InEditor) {
}

void UBMFermantationYeastShaderControl::SetDefaultValues() {
}

float UBMFermantationYeastShaderControl::GetCodeValue(EBMFermentationYeastRaftShaderPropertyType PropertyType) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMFermantationYeastShaderControl::AssignDefaultMaterial(UMaterial* DefaultMaterial) {
    return NULL;
}

UBMFermantationYeastShaderControl::UBMFermantationYeastShaderControl() {
}

