#include "BMTransferDissolvedIngredient.h"

FBMTransferDissolvedIngredient::FBMTransferDissolvedIngredient() {
    this->Container = NULL;
    this->Mass = 0.00f;
    this->IngredientType = EIngredientType::Generic;
    this->bFermentable = false;
}

