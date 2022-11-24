#include "BMBrewSimDebugWidget.h"

class ABMDynamicContainer;

void UBMBrewSimDebugWidget::UpdateDataFromBrewsim() {
}

void UBMBrewSimDebugWidget::ToggleEvaporation(bool bIsEvaporationEnabled) {
}

void UBMBrewSimDebugWidget::SetupBrewSimDebugWidget() {
}

void UBMBrewSimDebugWidget::SetTimeSkip(bool IsActive, float Hours, float Days, float TimeToComplete) {
}

void UBMBrewSimDebugWidget::SetTimeAcceleration(bool IsActive, float TimeSpeed) {
}

void UBMBrewSimDebugWidget::SetFocusContainer(ABMDynamicContainer* Container) {
}

void UBMBrewSimDebugWidget::SetEnableTimeStepVariation(bool inStepVariationEnabled) {
}

void UBMBrewSimDebugWidget::SetAdjustableStepFrameRate(bool IsActive) {
}


void UBMBrewSimDebugWidget::DebugTransferLiquid(ABMDynamicContainer* FromContainer, ABMDynamicContainer* ToContainer, float TransferAmount, float FilterSize) {
}

void UBMBrewSimDebugWidget::DebugSetTemperature(float NewTemperature) {
}

void UBMBrewSimDebugWidget::DebugRemoveIngredient(ABMDynamicContainer* Container, bool bDissolved, FName Name, float Mass) {
}

ABMDynamicContainer* UBMBrewSimDebugWidget::DebugCreateContainerFromData(FDataTableRowHandle ContainerData) {
    return NULL;
}

void UBMBrewSimDebugWidget::DebugAddWater() {
}

void UBMBrewSimDebugWidget::DebugAddIngredient() {
}

bool UBMBrewSimDebugWidget::AddContainerOption_Implementation(ABMDynamicContainer* Container) {
    return false;
}

UBMBrewSimDebugWidget::UBMBrewSimDebugWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FocusContainerRef = NULL;
    this->bSetupDone = false;
    this->MaxTimeToGraph = 0.00f;
}

