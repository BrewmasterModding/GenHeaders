#include "BMContainerBrewSimFixedProperties.h"

FBMContainerBrewSimFixedProperties::FBMContainerBrewSimFixedProperties() {
    this->ContainerSize = 0;
    this->VolumeCapacity_ml = 0.00f;
    this->ContainerOnlyWeight = 0.00f;
    this->InsulationFactor = 0.00f;
    this->bPourable = false;
    this->bSealable = false;
    this->PressureLimit = 0.00f;
    this->bStirrable = false;
    this->bCanAttachAndPlaceInItems = false;
    this->bHeatTolerant = false;
    this->bCanBePlacedOnHeatMat = false;
    this->EvaporationRateMultiplier = 0.00f;
    this->InsulationWithLidFactor = 0.00f;
    this->bHasTap = false;
    this->Wattage = 0.00f;
}

