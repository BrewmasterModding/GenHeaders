#include "BMTastingTableInteraction.h"

void UBMTastingTableInteraction::SaveGameCallBack() {
}

UBMTastingTableInteraction::UBMTastingTableInteraction() {
    this->SkipChecks = false;
    this->MaxAllowedBeerTemp = 25.00f;
    this->MinAllowedBeerTemp = 0.00f;
    this->MaxAllowedIBU = 100.00f;
    this->MinAllowedIBU = 10.00f;
    this->MaxAllowedABV = 15.00f;
    this->MinAllowedABV = 2.00f;
    this->MinAllowedBatchSize = 17000.00f;
}

