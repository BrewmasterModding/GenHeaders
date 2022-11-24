#include "BMSingleStatWidget.h"

void UBMSingleStatWidget::UpdateFromBeerState(const FBMSingleVolumeState& NewState) {
}






UBMSingleStatWidget::UBMSingleStatWidget() {
    this->bShowRateOfChange = false;
    this->StatTypeToDisplay = EBMBeerStatType::NONE;
    this->LiquidStatType = EBMLiquidStatType::NONE;
    this->IngredientStatType = EBMIngredientStatType::NONE;
    this->bDissolvedIngredient = false;
    this->Flavour = EFlavourCategory::NONE;
    this->FlavourNotes = EFlavourNotes::NONE;
    this->StatDisplayValue = 0.00f;
    this->bHasDoneFirstUpdate = false;
}

