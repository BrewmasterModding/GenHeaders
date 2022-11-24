#include "BMConditionsDataTypes.h"

FBMConditionsDataTypes::FBMConditionsDataTypes() {
    this->StatValue = 0.00f;
    this->FlavourNote = EFlavourNotes::NONE;
    this->FlavourCategory = EFlavourCategory::NONE;
    this->IngredientCategory = EBMIngredientCategory::NONE;
    this->IngredientSubCategory = EBMIngredientSubCategory::NONE;
    this->IngredientType = EIngredientType::Generic;
    this->EquipmentCategory = EBMEquipmentCategory::NONE;
    this->EquipmentSubCategory = EBMEquipmentSubCategory::NONE;
    this->Size = ESizeBand::NONE;
    this->BeerCategory = EBMBeerCategory::NONE;
    this->Difficulty = EBMRecipeDifficulty::Easy;
    this->SponsorBrewery = EBMSponsor::HomeHearth;
    this->BreweryReputation = EBMReputation::Unknown;
    this->MasteryLevel = EBMMastery::Novice;
    this->ItemClass = NULL;
    this->UIScreenClass = NULL;
    this->FurnitureCategory = EBMFurnitureCategory::NONE;
    this->FurnitureSubCategory = EBMFurnitureSubcategory::NONE;
}

