#include "BMGrainEffectControl.h"

class ABMBaseIngredientPacket;
class ABMDynamicContainer;

void UBMGrainEffectControl::UpdateBrewShaderPropertiesPacket(ABMBaseIngredientPacket* Packet) {
}

bool UBMGrainEffectControl::UpdateBrewShaderProperties(FBMSingleVolumeState State, ABMDynamicContainer* Container) {
    return false;
}

void UBMGrainEffectControl::SetParticleProperties(ABMDynamicContainer* Container, ABMBaseIngredientPacket* Packet, bool InEditor) {
}

float UBMGrainEffectControl::GetCodeValuePacket(EBMGrainEffectPropertyType PropertyType, ABMBaseIngredientPacket* Packet) {
    return 0.0f;
}

float UBMGrainEffectControl::GetCodeValue(EBMGrainEffectPropertyType PropertyType) {
    return 0.0f;
}

UBMGrainEffectControl::UBMGrainEffectControl() {
}

