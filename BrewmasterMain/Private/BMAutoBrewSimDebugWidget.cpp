#include "BMAutoBrewSimDebugWidget.h"

void UBMAutoBrewSimDebugWidget::UpdateDataFromBrewsim() {
}

void UBMAutoBrewSimDebugWidget::SetupBrewSimDebugWidget() {
}

void UBMAutoBrewSimDebugWidget::SetTimeAcceleration(bool IsActive, float TimeSpeed) {
}

void UBMAutoBrewSimDebugWidget::ResetFixedData() {
}

void UBMAutoBrewSimDebugWidget::ResetDebuging() {
}


void UBMAutoBrewSimDebugWidget::CreateAutoBrewSim() {
}

UBMAutoBrewSimDebugWidget::UBMAutoBrewSimDebugWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->AutoBrewSim = NULL;
    this->bSetupDone = false;
}

