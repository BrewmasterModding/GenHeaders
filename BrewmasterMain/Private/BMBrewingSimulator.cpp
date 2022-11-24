#include "BMBrewingSimulator.h"

class ABMDynamicContainer;
class ABMThermalCoupling;

FBMBrewingState ABMBrewingSimulator::StepSimulation(float SimulationDeltaTime, float SimulationCurrentTime) {
    return FBMBrewingState{};
}

FBMBrewingState ABMBrewingSimulator::RemoveAllIngredientsRequest(ABMDynamicContainer* FromContainer) {
    return FBMBrewingState{};
}

void ABMBrewingSimulator::RemoveAllContainerIngredients(FBMBrewingState& State, ABMDynamicContainer* FromContainer) {
}

void ABMBrewingSimulator::HandleRequests(FBMBrewingState& State) {
}

void ABMBrewingSimulator::HandleRemoveRequests() {
}

void ABMBrewingSimulator::EnableEvaporation(bool IsEnabled) {
}

FBMBrewingState ABMBrewingSimulator::AddTranferLiquidRequest(EBMLiquidTransferType Type, ABMDynamicContainer* FromContainer, float TotalVolumeToTransfer, ABMDynamicContainer* ToContainer, float FilterSize, ABMThermalCoupling* ThermalCoupling, bool IgnoreYeastMultiplier, float YeastMultiplier, bool IgnoreParticulates, float ParticulateMultipler) {
    return FBMBrewingState{};
}

ABMBrewingSimulator::ABMBrewingSimulator() {
    this->TimeNow = 0.00f;
    this->FixedData = NULL;
    this->bIsEvaporationEnabled = true;
}

