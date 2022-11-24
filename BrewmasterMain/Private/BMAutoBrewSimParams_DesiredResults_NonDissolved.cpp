#include "BMAutoBrewSimParams_DesiredResults_NonDissolved.h"

FBMAutoBrewSimParams_DesiredResults_NonDissolved::FBMAutoBrewSimParams_DesiredResults_NonDissolved() {
    this->IngredientType = EIngredientType::Generic;
    this->Target = 0.00f;
    this->TargetType = ECalibrationTargetType::ECal_None;
    this->ToleranceValue = 0.00f;
    this->ErrorValueMultipler = 0.00f;
}

