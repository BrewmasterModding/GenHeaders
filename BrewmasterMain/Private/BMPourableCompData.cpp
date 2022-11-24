#include "BMPourableCompData.h"

FBMPourableCompData::FBMPourableCompData() {
    this->IncreaseTime = 0.00f;
    this->DecreaseTime = 0.00f;
    this->PouringMaxHeight = 0.00f;
    this->PouringMaxHeightCurve = NULL;
    this->PouringAreaRotationChange = 0.00f;
    this->LiquidTransferScaler = 0.00f;
    this->ThrottlePourArea = 0.00f;
    this->ThrottleAbovePercent = 0.00f;
    this->MiniumPourSpeed = 0.00f;
    this->PouringRotationOffset = 0.00f;
    this->AdditionalYawOffset = 0.00f;
    this->LockToAxis = false;
}

