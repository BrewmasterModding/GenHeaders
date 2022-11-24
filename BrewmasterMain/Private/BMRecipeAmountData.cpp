#include "BMRecipeAmountData.h"

FBMRecipeAmountData::FBMRecipeAmountData() {
    this->Context = EBMRecipeInstructionVariable::IngredientType;
    this->IngredientCategory = EBMIngredientCategory::NONE;
    this->Instruction = EBMRecipeInstructionType::AddIngredientsToContainer;
    this->StartingValue = 0.00f;
    this->MinimumValue = 0.00f;
    this->MaximumValue = 0.00f;
    this->IncrementValue = 0.00f;
}

