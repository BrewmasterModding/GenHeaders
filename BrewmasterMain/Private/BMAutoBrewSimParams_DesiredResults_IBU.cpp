#include "BMAutoBrewSimParams_DesiredResults_IBU.h"

FBMAutoBrewSimParams_DesiredResults_IBU::FBMAutoBrewSimParams_DesiredResults_IBU() {
    this->Target = 0.00f;
    this->TargetType = ECalibrationTargetType::ECal_None;
    this->ToleranceValue = 0.00f;
    this->ErrorValueMultipler = 0.00f;
}

