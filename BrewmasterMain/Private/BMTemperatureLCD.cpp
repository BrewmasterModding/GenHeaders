#include "BMTemperatureLCD.h"

FString UBMTemperatureLCD::UpdateTargetTemperature_Implementation(FBMHeatExchangeData HeatExchangeData) {
    return TEXT("");
}

FString UBMTemperatureLCD::UpdateCurrentTemperature_Implementation(float Temperature, bool bInValidLiquid) {
    return TEXT("");
}

void UBMTemperatureLCD::SetupUnitChangeBinding() {
}


void UBMTemperatureLCD::OnUnitsDisplayTypeChanged() {
}

UBMTemperatureLCD::UBMTemperatureLCD() {
    this->CurrentTemperatureValue = 0.00f;
    this->bMovingToTarget = false;
}

