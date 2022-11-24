#include "BMBeerShaderControl.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;
class ABMDynamicContainer;
class UMaterialInstance;

bool UBMBeerShaderControl::UpdateBrewShaderProperties(FBMBeerProperties& BeerPropertiesToUse, UMaterialInterface* MaterialToUse, UMaterialInstanceDynamic* DynamicMaterial, ABMDynamicContainer* Container) {
    return false;
}

void UBMBeerShaderControl::SetShaderProperties(ABMDynamicContainer* Container, bool InEditor) {
}

float UBMBeerShaderControl::GetCodeValue(EBMBeerShaderPropertyType PropertyType) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMBeerShaderControl::AssignDefaultMaterial(UMaterialInstance* DefaultMaterial) {
    return NULL;
}

UBMBeerShaderControl::UBMBeerShaderControl() {
    this->VolumeCodeMinValue = 0.00f;
    this->VolumeCodeMaxValue = 1.00f;
    this->ViscosityCodeMinValue = 0.00f;
    this->ViscosityCodeMaxValue = 5.00f;
    this->ClarityCodeMinValue = 0.00f;
    this->ClarityCodeMaxValue = 100.00f;
    this->HeadSizeCodeMinValue = 0.00f;
    this->HeadSizeCodeMaxValue = 100.00f;
    this->BubblesCodeMinValue = 0.00f;
    this->BubblesCodeMaxValue = 5.00f;
    this->HeadAndBubblesCodeMinValue = 0.00f;
    this->HeadAndBubblesCodeMaxValue = 20.00f;
    this->C02ReleaseCodeMinValue = 0.00f;
    this->C02ReleaseCodeMaxValue = 100.00f;
    this->AdditionalVisualTweaksCodeMinValue = 0.00f;
    this->AdditionalVisualTweaksCodeMaxValue = 100.00f;
}

