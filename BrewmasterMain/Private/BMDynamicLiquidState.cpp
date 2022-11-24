#include "BMDynamicLiquidState.h"

FBMDynamicLiquidState::FBMDynamicLiquidState() {
    this->Temperature = 0.00f;
    this->Mass = 0.00f;
    this->SpecificGravity = 0.00f;
    this->OriginalGravity = 0.00f;
    this->bUpdateOriginalGravity = false;
    this->IsoAlphaAcids_g = 0.00f;
    this->AlcoholByVolume_0to1 = 0.00f;
    this->TotalLiquidVolume_ml = 0.00f;
    this->CO2ProducedMass = 0.00f;
    this->CO2VolumeProduced = 0.00f;
    this->EvaporationRate = 0.00f;
    this->Agitation = 0.00f;
    this->Particulates = 0.00f;
}

