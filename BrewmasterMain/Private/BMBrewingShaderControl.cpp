#include "BMBrewingShaderControl.h"

class ABMDynamicContainer;
class ABMBaseIngredientPacket;
class UMaterial;
class UMaterialInstanceDynamic;

void UBMBrewingShaderControl::SetShaderProperties(ABMDynamicContainer* Container, ABMBaseIngredientPacket* Packet, bool InEditor) {
}

bool UBMBrewingShaderControl::HasFoamHeadAppeared() {
    return false;
}

float UBMBrewingShaderControl::GetMaxPercentForHeadRise() {
    return 0.0f;
}

float UBMBrewingShaderControl::GetCodeValuePacket(EBMBrewingShaderPropertyType PropertyType, ABMBaseIngredientPacket* Packet) {
    return 0.0f;
}

float UBMBrewingShaderControl::GetCodeValue(EBMBrewingShaderPropertyType PropertyType, ABMDynamicContainer* Container) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMBrewingShaderControl::AssignDefaultMaterial(UMaterial* DefaultMaterial) {
    return NULL;
}

UBMBrewingShaderControl::UBMBrewingShaderControl() {
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
    this->BoilingCodeValueMin = 0.00f;
    this->BoilingCodeValueMax = 100.00f;
    this->HeadAndBubblesCodeMinValue = 0.00f;
    this->HeadAndBubblesCodeMaxValue = 20.00f;
    this->BubblesFromRecievingPourCodeMinValue = 0.00f;
    this->BubblesFromRecievingPourCodeMaxValue = 1.00f;
    this->SedimentMinValue = 0.00f;
    this->SedimentMaxValue = 1.00f;
    this->SurfaceYeastRaftMinValue = 0.00f;
    this->SurfaceYeastRaftMaxValue = 1.00f;
    this->GrainSuspensionMinValue = 0.00f;
    this->GrainSuspensionMaxValue = 1.00f;
    this->PouringVisualTweaksMinValue = 1.00f;
    this->PouringVisualTweaksMaxValue = 1.00f;
    this->YeastPopulationMinValue = 0.00f;
    this->YeastPopulationMaxValue = 1.00f;
    this->YeastActivityMinValue = 0.00f;
    this->YeastActivityMaxValue = 1.00f;
    this->WortBoilCodeMinValue = 0.00f;
    this->WortBoilCodeMaxValue = 100.00f;
    this->WortBoilMultiplier = 100.00f;
    this->LingeringBubblesCodeMaxValue = 100.00f;
    this->LingeringBubblesCodeMinValue = 0.00f;
    this->ParticulatesCodeMaxValue = 100.00f;
    this->ParticulatesCodeMinValue = 0.00f;
    this->AgitationCodeMinValue = 0.00f;
    this->AgitationCodeMaxValue = 100.00f;
    this->LingeringBubblesCap = 20000.00f;
    this->LingeringBubblesProteinCap = 20000.00f;
    this->WortBoilProteinCap = 20000.00f;
    this->ThresholdForFoam = 0.00f;
    this->MaxHeadRaisePercent = 0.02f;
    this->MaxLiquidColourRateOfChange = 0.00f;
    this->MaxLiquidColourRateOfChangeFalloff = 0.50f;
}

