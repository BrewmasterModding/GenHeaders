#include "BMInherentContaminationConditions.h"

FBMInherentContaminationConditions::FBMInherentContaminationConditions() {
    this->ContaminationType = EBMInherentContaminationType::NONE;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->MaxValueRatioToLiquidVolume = 0.00f;
    this->RateOfChange = 0.00f;
}

