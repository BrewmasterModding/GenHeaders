#include "BMSimulationDataOut.h"

class ABMDynamicContainer;
class ABMFixedData;

void ABMSimulationDataOut::UpdateStateData(const FBMBrewingState& NewState, float SimulationTimeStamp) {
}

void ABMSimulationDataOut::SetContainerToSave(ABMDynamicContainer* Container) {
}

ABMFixedData* ABMSimulationDataOut::GetFixedDataManager() {
    return NULL;
}

FBMBrewingState ABMSimulationDataOut::GetBrewingState() {
    return FBMBrewingState{};
}

ABMSimulationDataOut::ABMSimulationDataOut() {
    this->FixedData = NULL;
    this->fCurrentSimTime = 0.00f;
    this->ContainerToLogStateFor = NULL;
}

