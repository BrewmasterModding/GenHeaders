#include "BMLaceBrewingShaderControl.h"

class ABMDynamicContainer;
class UMaterialInstance;
class UMaterialInstanceDynamic;

bool UBMLaceBrewingShaderControl::UpdateBrewShaderProperties(FBMSingleVolumeState State, ABMDynamicContainer* Container) {
    return false;
}

void UBMLaceBrewingShaderControl::SetShaderProperties(ABMDynamicContainer* Container, bool InEditor) {
}

void UBMLaceBrewingShaderControl::IncrementOpacity() {
}

float UBMLaceBrewingShaderControl::GetCodeValue(EBMLaceBrewingShaderPropertyType PropertyType) {
    return 0.0f;
}

void UBMLaceBrewingShaderControl::DeincrementOpacity() {
}

UMaterialInstanceDynamic* UBMLaceBrewingShaderControl::AssignDefaultMaterial(UMaterialInstance* DefaultMaterial) {
    return NULL;
}

UBMLaceBrewingShaderControl::UBMLaceBrewingShaderControl() {
    this->CrustyDryLaceMinValue = 0.00f;
    this->CrustyDryLaceMaxValue = 20.00f;
    this->LaceTopHeightMaskMultiplier = 8.00f;
    this->FermentationLaceVisualsMinValue = 0.00f;
    this->FermentationLaceVisualsMaxValue = 1.00f;
    this->PouringVisualTweaksMin = 1.00f;
    this->PouringVisualTweaksMax = 1.00f;
    this->OpacityFadeInTime = 2.00f;
    this->OpacityFadeOutTime = 2.00f;
    this->OpacityHeadHeightHeadOffsetMinimum = 0.00f;
}

