#include "BMRampMeshShaderControl.h"

class ABMDynamicContainer;
class UMaterial;
class UMaterialInstanceDynamic;

bool UBMRampMeshShaderControl::UpdateBrewShaderProperties(FBMSingleVolumeState State, ABMDynamicContainer* Container) {
    return false;
}

void UBMRampMeshShaderControl::SetShaderProperties(ABMDynamicContainer* Container, bool InEditor) {
}

void UBMRampMeshShaderControl::SetDefaultValues() {
}

float UBMRampMeshShaderControl::GetCodeValue(EBMRampMeshShaderPropertyType PropertyType) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMRampMeshShaderControl::AssignDefaultMaterial(UMaterial* DefaultMaterial) {
    return NULL;
}

UBMRampMeshShaderControl::UBMRampMeshShaderControl() {
    this->OpacityMin = 0.00f;
    this->OpacityMax = 2.00f;
    this->HeadAndBubblesMin = 0.00f;
    this->HeadAndBubblesMax = 1.00f;
    this->AdditionalVisualTweaksMin = 0.00f;
    this->AdditionalVisualTweaksMax = 1.00f;
}

