#include "BMGenericIngredientData.h"

FBMGenericIngredientData::FBMGenericIngredientData() {
    this->PhysicalType = EIngredientPhysicalType::Liquid;
    this->IngredientType = EIngredientType::Generic;
    this->IngredientSubTypeOther = EIngredientSubTypeOther::NONE;
    this->StorageLocation = EBMInventoryStorageLocation::NONE;
    this->IngredientCategory = EBMIngredientCategory::NONE;
    this->IngredientSubCategory = EBMIngredientSubCategory::NONE;
    this->Density = 0.00f;
    this->PhysicalSize = 0.00f;
    this->SpecificHeatCapacity = 0.00f;
    this->DissolvingRateMin = 0.00f;
    this->DissolvingRateMax = 0.00f;
    this->DissolvingRateMassLimit = 0.00f;
    this->SolubilityFraction = 0.00f;
    this->SaturationLimit = 0.00f;
    this->ColourInfluence = 0.00f;
    this->PotentialSpecificGravity = 0.00f;
    this->SpecificGravityMultiplier = 0.00f;
    this->BitternessInfluence = 0.00f;
    this->ProteinAddition = 0.00f;
    this->FractionFermentable = 0.00f;
    this->bCompensateFermentability = false;
    this->bIsFruit = false;
    this->bIsSpice = false;
    this->bOpaqueAndHasLid = false;
    this->Particulates = 0.00f;
}

