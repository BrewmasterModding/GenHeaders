#include "BMCO2Data.h"

FBMCO2Data::FBMCO2Data() {
    this->bActive = false;
    this->TargetCarbonation = 0.00f;
    this->Pressure = 0.00f;
    this->MinimumContainerSize = ESizeBand::NONE;
}

