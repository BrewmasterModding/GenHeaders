#include "BMTapItemData.h"

FBMTapItemData::FBMTapItemData() {
    this->bIsVariableFlow = false;
    this->bIsConnectable = false;
    this->bIsAlwaysOpen = false;
    this->OpeningSize = 0.00f;
    this->bIsLauter = false;
    this->bIsReversible = false;
    this->TapDirection = EBMTapFlowDirection::IntakeOnly;
    this->MaxFlowRate = 0.00f;
    this->bShouldIgnoreYeastMultiplier = false;
    this->YeastMultiplier = 0.00f;
    this->bShouldIgnoreParticulatesMultiplier = false;
    this->ParticulatesMultiplier = 0.00f;
}

