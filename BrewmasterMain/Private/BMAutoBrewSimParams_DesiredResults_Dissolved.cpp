#include "BMAutoBrewSimParams_DesiredResults_Dissolved.h"

FBMAutoBrewSimParams_DesiredResults_Dissolved::FBMAutoBrewSimParams_DesiredResults_Dissolved() {
    this->IngredientType = EIngredientType::Generic;
    this->Target = 0.00f;
    this->TargetType = ECalibrationTargetType::ECal_None;
    this->ToleranceValue = 0.00f;
    this->ErrorValueMultipler = 0.00f;
}

