#include "BMMeasurementStatics.h"

class UObject;

int32 UBMMeasurementStatics::GetStatDecimalPlaces(const FString& Stat, float Value) {
    return 0;
}

FString UBMMeasurementStatics::GetRecipeValueRawString(EBMRecipeInstructionVariable RecipeVariable, bool bisLiquid) {
    return TEXT("");
}

FString UBMMeasurementStatics::GetRecipeInstructionMeasurement(EBMRecipeInstructionVariable VariableType, const FString& AmountString) {
    return TEXT("");
}

float UBMMeasurementStatics::GetRecipeConversionValue(EBMRecipeInstructionVariable RecipeVariable, float Value, bool bToMetric) {
    return 0.0f;
}

FString UBMMeasurementStatics::GetFloatAsStringWithPrecision(float TheFloat, int32 Precision, bool IncludeLeadingZero, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

float UBMMeasurementStatics::GetBatchMultiplierFromSize(ESizeBand Size) {
    return 0.0f;
}

float UBMMeasurementStatics::DoVolumeConversion(float Millilitres) {
    return 0.0f;
}

float UBMMeasurementStatics::DoTemperatureRateConversion(float Celsius) {
    return 0.0f;
}

float UBMMeasurementStatics::DoTemperatureConversion(float Celsius) {
    return 0.0f;
}

float UBMMeasurementStatics::DoPressureConversion(float Volumes) {
    return 0.0f;
}

float UBMMeasurementStatics::DoMassConversion(float Grams) {
    return 0.0f;
}

float UBMMeasurementStatics::DoLengthConversion(float CentiMeters) {
    return 0.0f;
}

float UBMMeasurementStatics::DoColourConversion(float SRMs) {
    return 0.0f;
}

float UBMMeasurementStatics::DoBitternessConversion(float IBUs) {
    return 0.0f;
}

FString UBMMeasurementStatics::CreateYardsString(float Yards, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateWattageString(float Watts, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateTimeString(float Hours) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateTemperatureString(float Celsius, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateSRMsString(float SRMs, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateSpecificGravityString(float Value, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateSecondsString(int32 Seconds) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateSeasonString(UObject* World) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateQuartsString(float Quarts, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreatePressureString(float Volumes, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreatePoundsString(float Pounds, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreatePercentageString(float Percent, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateOuncesString(float Ounces, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateMinutesString(int32 Minutes) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateMillilitresString(float Millilitres, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateMetresString(float Metres, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateLitresString(float Litres, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateLengthString(float CentiMeters, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateKilogramsString(float Kilograms, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateInchesString(float Inches, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateIBUsString(float IBUs, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateHoursString(int32 Hours) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateGramsString(float Grams, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateGallonsString(float Gallons, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateFlowRateString(float Value, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateFarenheitString(float Farenheit, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateDaysString(int32 Days) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateCurrentMonthString(UObject* World) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateCurrentDayString(UObject* World) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateColourString(float SRMs, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateCentiMetersString(float CentiMeters, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateCelsiusString(float Celsius, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateC02VolumesString(float Volumes, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

FString UBMMeasurementStatics::CreateBitternessString(float IBUs, int32 Decimals, bool RemoveDecimalTrailingZeros) {
    return TEXT("");
}

void UBMMeasurementStatics::ClearCachedStrings() {
}

UBMMeasurementStatics::UBMMeasurementStatics() {
}

