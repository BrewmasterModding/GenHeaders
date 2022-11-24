#include "BMSingleVolumeState.h"

FBMSingleVolumeState::FBMSingleVolumeState() {
    this->PreviousTime = 0.00f;
    this->SimTime = 0.00f;
    this->TotalMaltColourUnits = 0.00f;
    this->TotalStarchMass = 0.00f;
    this->TotalStarchVolume = 0.00f;
    this->TotalGrainVolume = 0.00f;
    this->StarchPercentage = 0.00f;
    this->TotalEvaporationAmount = 0.00f;
    this->TotalDissolvedSugarMass = 0.00f;
    this->EvaporationRate = 0.00f;
    this->ABVRateOfChange = 0.00f;
    this->ProteinRateOfChange = 0.00f;
    this->CarbonationRateOfChange = 0.00f;
    this->ContaminationRateOfChange = 0.00f;
    this->IBURateOfChange = 0.00f;
    this->ColourRateOfChange = 0.00f;
    this->SpecificGravityRateOfChange = 0.00f;
    this->TemperatureRateOfChange = 0.00f;
    this->AlphaAcidsRateOfChange = 0.00f;
    this->YeastColoniesRateOfChange = 0.00f;
    this->HeightOfLiquid = 0.00f;
    this->MaximumHeightOfLiquid = 0.00f;
    this->DifferenceOfPouringAngle = 0.00f;
    this->GrainToLiquidVolume = 0.00f;
    this->StirringSpeed = 0.00f;
    this->YeastActivity = 0.00f;
    this->PreviousYeastActivity = 0.00f;
    this->YeastPopulationThreshold = 0.00f;
}

