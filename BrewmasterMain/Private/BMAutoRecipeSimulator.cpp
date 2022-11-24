#include "BMAutoRecipeSimulator.h"

void ABMAutoRecipeSimulator::SetMinimumInterval(float Interval) {
}

void ABMAutoRecipeSimulator::SetHoursPerSecondMultiplier(float Multiplier) {
}

void ABMAutoRecipeSimulator::SaveCurrentBeerStatsToRecipe() {
}

FBMBeerProperties ABMAutoRecipeSimulator::GetSimulatedBeerProperties() {
    return FBMBeerProperties{};
}

bool ABMAutoRecipeSimulator::GetIsSimulationComplete() {
    return false;
}

FBMRecipeInstruction ABMAutoRecipeSimulator::GetCurrentRecipeInstruction() {
    return FBMRecipeInstruction{};
}

float ABMAutoRecipeSimulator::GetContainerLiquidVolume() {
    return 0.0f;
}

ABMAutoRecipeSimulator::ABMAutoRecipeSimulator() {
    this->bIsSimulating = false;
    this->CurrentAutoInstructionIndex = 0;
    this->AutoBrewSim = NULL;
    this->SimController = NULL;
    this->DefaultContainer = NULL;
    this->Equipment_DT = NULL;
    this->Recipe_DT = NULL;
    this->MinimumInstructionInterval = 0.50f;
    this->HoursPerSecondMultiplier = 0.05f;
    this->ContainerLiquidVolume = 0.00f;
}

