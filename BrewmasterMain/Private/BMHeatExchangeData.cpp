#include "BMHeatExchangeData.h"

FBMHeatExchangeData::FBMHeatExchangeData() {
    this->bActive = false;
    this->TargetTemperature = 0.00f;
    this->Wattage = 0.00f;
    this->HeatExchangeType = EHeatExchangeType::HeatAndCool;
    this->bIsExternal = false;
    this->bIsHeatMat = false;
    this->MinimumContainerSize = ESizeBand::NONE;
}

