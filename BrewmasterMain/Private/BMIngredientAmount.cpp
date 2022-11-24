#include "BMIngredientAmount.h"

FBMIngredientAmount::FBMIngredientAmount() {
    this->Mass = 0.00f;
    this->Temperature = 0.00f;
    this->IngredientType = EIngredientType::Generic;
    this->MaxMass = 0.00f;
    this->FromIngredientID = 0;
}

