#include "BMSimulationControl.h"

class ABMBaseActor;
class ABMDynamicContainer;
class ABMThermalCoupling;
class ABMTimeController;
class ABMSimulationDataOut;
class ABMBaseIngredientBag;

void ABMSimulationControl::UnRegisterWithBrewingSimulator(ABMBaseActor* InActor) {
}

void ABMSimulationControl::TransferLiquid(EBMLiquidTransferType LiquidTransferType, ABMDynamicContainer* FromContainer, ABMDynamicContainer* ToContainer, float AmountToTransfer, float FilterSize, ABMThermalCoupling* ThermalCoupling, bool IgnoreYeastMultiplier, float YeastMultiplier, bool IgnoreParticulates, float ParticulateMultiplier) {
}

void ABMSimulationControl::StopBrewingSimulation() {
}

void ABMSimulationControl::StartBrewingSimulation() {
}

void ABMSimulationControl::SetTimeSkipEnabled(bool IsActive, float Days, float Hours, float Time, bool UseFameRate) {
}

void ABMSimulationControl::SetTimeController(ABMTimeController* TimeControllerRef) {
}

void ABMSimulationControl::SetTimeAccelerationEnabled(bool IsActive, float Speed) {
}

void ABMSimulationControl::SetTemperatureOfLiquidInContainer(ABMDynamicContainer* Container, float NewTemperature) {
}

void ABMSimulationControl::SetStepTimeVariationEnabled(bool bNewEnabled) {
}

void ABMSimulationControl::SetIngredientBagAttachment(ABMBaseIngredientBag* IngredientBag, ABMDynamicContainer* Container, bool bNewAttachState) {
}

void ABMSimulationControl::RequestBrewingSimulationStart() {
}

void ABMSimulationControl::RemoveIngredientFromContainer(ABMDynamicContainer* Container, bool bDissolved, FName Name, float Mass) {
}

void ABMSimulationControl::RemoveAllIngredientsInContainer(ABMDynamicContainer* FromContainer) {
}

void ABMSimulationControl::RegisterWithBrewingSimulator(ABMBaseActor* InActor) {
}

void ABMSimulationControl::RegisterContainer(ABMDynamicContainer* Container) {
}

void ABMSimulationControl::NextSimulationStep() {
}

float ABMSimulationControl::GetTimeNow() {
    return 0.0f;
}

ABMTimeController* ABMSimulationControl::GetTimeController() {
    return NULL;
}

bool ABMSimulationControl::GetTimeCompressionActive() {
    return false;
}

ABMSimulationDataOut* ABMSimulationControl::GetDataModule() {
    return NULL;
}

void ABMSimulationControl::EnableDebugEvaporation(bool shouldEvaporate) {
}

void ABMSimulationControl::CleanWorkshopEquipment(bool bExcludeInventory, bool bReturnToStorage) {
}

void ABMSimulationControl::ChangeTemperatureOfLiquidInContainer(int32 ContainerID, float TemperatureDelta) {
}

void ABMSimulationControl::AddLiquidToContainer(ABMDynamicContainer* Container, FBMWaterPacket WaterToAdd) {
}

void ABMSimulationControl::AddIngredientToContainer(ABMDynamicContainer* Container, FName Name, float Mass, float Temperature, EBMLiquidTransferType LiquidTransferType, int32 FromIngredientID) {
}

void ABMSimulationControl::AddDissolvedIngredientToContainer(ABMDynamicContainer* Container, FName Name, float Mass) {
}

ABMSimulationControl::ABMSimulationControl() {
    this->BrewingSimulator = NULL;
    this->BrewingSimulatorDataModule = NULL;
    this->bSimulationRunning = false;
    this->TimeOfLastStep = 0.00f;
    this->SimulationDeltaTime = 0.00f;
    this->TimeController = NULL;
    this->bTimeAcceleration = false;
    this->TimeAccelerationSpeed = 1.00f;
    this->TotalDeltaTimePast = 0.00f;
    this->bTimeSkipping = false;
    this->TimeNow = 0.00f;
    this->bAdjustStepByFrameRate = false;
}

