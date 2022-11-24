#include "BMGrainShaderControl.h"

class ABMBaseIngredientPacket;
class ABMDynamicContainer;
class UMaterial;
class UMaterialInstanceDynamic;

void UBMGrainShaderControl::UpdateBrewShaderPropertiesPacket(ABMBaseIngredientPacket* Packet) {
}

bool UBMGrainShaderControl::UpdateBrewShaderProperties(FBMSingleVolumeState State, ABMDynamicContainer* Container) {
    return false;
}

void UBMGrainShaderControl::SetShaderProperties(ABMDynamicContainer* Container, ABMBaseIngredientPacket* Packet, bool InEditor) {
}

float UBMGrainShaderControl::GetCodeValuePacket(EBMGrainShaderPropertyType PropertyType, ABMBaseIngredientPacket* Packet) {
    return 0.0f;
}

float UBMGrainShaderControl::GetCodeValue(EBMGrainShaderPropertyType PropertyType, ABMDynamicContainer* Container) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMGrainShaderControl::AssignDefaultMaterial(UMaterial* DefaultMaterial) {
    return NULL;
}

UBMGrainShaderControl::UBMGrainShaderControl() {
    this->VolumeMin = 1.00f;
    this->VolumeMax = 1.00f;
    this->GrainColourAdditionalWetnessTintMin = 0.00f;
    this->GrainColourAdditionalWetnessTintMax = 1.00f;
    this->PouringMoundGenerationMin = 0.00f;
    this->PouringMoundGenerationMax = 1.00f;
    this->PouringMoundRemovalMin = 0.00f;
    this->PouringMoundRemovalMax = 1.00f;
    this->PouringVisualTweaksMin = 0.00f;
    this->PouringVisualTweaksMax = 1.00f;
}

