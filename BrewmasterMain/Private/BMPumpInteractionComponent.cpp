#include "BMPumpInteractionComponent.h"

UBMPumpInteractionComponent::UBMPumpInteractionComponent() {
    this->bIsReversible = false;
    this->bIsVariableFlow = false;
    this->bIsStandAlonePump = true;
    this->MaximumContainerConnectedSize = ESizeBand::NONE;
    this->MaxFlowRate = 0.50f;
    this->CurrentFlowRate = 0.50f;
}

