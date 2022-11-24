#include "BMTriggeredContaminationConditions.h"

FBMTriggeredContaminationConditions::FBMTriggeredContaminationConditions() {
    this->ContaminationType = EBMTriggeredContaminationType::NONE;
    this->MaxValue = 0.00f;
    this->RateOfChange = 0.00f;
}

