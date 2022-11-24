#include "BMPhysicalCalculations.h"

float UBMPhysicalCalculations::GetMaltActivity(float CurrentTemperature, FBMSugarEnzymeStructData SugarData, float EnzymeIntegrity) {
    return 0.0f;
}

float UBMPhysicalCalculations::ConvertCO2VolumesToMasses(float CO2Volumes, float liquidAmount) {
    return 0.0f;
}

float UBMPhysicalCalculations::ConvertCO2MassToVolumes(float CO2Mass, float liquidAmount) {
    return 0.0f;
}

float UBMPhysicalCalculations::CalcHeatExchange(float DeltaTime, FBMHeatExchangeData HeatExchanger, float CurrentTemperature, float Mass, float ScalingFactor, float SpecificHeatCapacity) {
    return 0.0f;
}

float UBMPhysicalCalculations::CalcCarbonationExchange(float DeltaTime, FBMCO2Data CO2Data, float CurrentCarbonation, float Mass, float ScalingFactor, float SpecificCarbonationCapacity) {
    return 0.0f;
}

UBMPhysicalCalculations::UBMPhysicalCalculations() {
}

