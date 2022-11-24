#pragma once
#include "CoreMinimal.h"
#include "ESizeBand.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EBMRecipeInstructionVariable.h"
#include "BMMeasurementStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMMeasurementStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBMMeasurementStatics();
    UFUNCTION(BlueprintPure)
    static int32 GetStatDecimalPlaces(const FString& Stat, float Value);
    
    UFUNCTION(BlueprintPure)
    static FString GetRecipeValueRawString(EBMRecipeInstructionVariable RecipeVariable, bool bisLiquid);
    
    UFUNCTION(BlueprintPure)
    static FString GetRecipeInstructionMeasurement(EBMRecipeInstructionVariable VariableType, const FString& AmountString);
    
    UFUNCTION(BlueprintPure)
    static float GetRecipeConversionValue(EBMRecipeInstructionVariable RecipeVariable, float Value, bool bToMetric);
    
    UFUNCTION(BlueprintPure)
    static FString GetFloatAsStringWithPrecision(float TheFloat, int32 Precision, bool IncludeLeadingZero, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static float GetBatchMultiplierFromSize(ESizeBand Size);
    
    UFUNCTION(BlueprintPure)
    static float DoVolumeConversion(float Millilitres);
    
    UFUNCTION(BlueprintPure)
    static float DoTemperatureRateConversion(float Celsius);
    
    UFUNCTION(BlueprintPure)
    static float DoTemperatureConversion(float Celsius);
    
    UFUNCTION(BlueprintPure)
    static float DoPressureConversion(float Volumes);
    
    UFUNCTION(BlueprintPure)
    static float DoMassConversion(float Grams);
    
    UFUNCTION(BlueprintPure)
    static float DoLengthConversion(float CentiMeters);
    
    UFUNCTION(BlueprintPure)
    static float DoColourConversion(float SRMs);
    
    UFUNCTION(BlueprintPure)
    static float DoBitternessConversion(float IBUs);
    
    UFUNCTION(BlueprintPure)
    static FString CreateYardsString(float Yards, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateWattageString(float Watts, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateTimeString(float Hours);
    
    UFUNCTION(BlueprintPure)
    static FString CreateTemperatureString(float Celsius, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateSRMsString(float SRMs, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateSpecificGravityString(float Value, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateSecondsString(int32 Seconds);
    
    UFUNCTION(BlueprintPure)
    static FString CreateSeasonString(UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FString CreateQuartsString(float Quarts, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreatePressureString(float Volumes, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreatePoundsString(float Pounds, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreatePercentageString(float Percent, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateOuncesString(float Ounces, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateMinutesString(int32 Minutes);
    
    UFUNCTION(BlueprintPure)
    static FString CreateMillilitresString(float Millilitres, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateMetresString(float Metres, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateLitresString(float Litres, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateLengthString(float CentiMeters, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateKilogramsString(float Kilograms, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateInchesString(float Inches, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateIBUsString(float IBUs, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateHoursString(int32 Hours);
    
    UFUNCTION(BlueprintPure)
    static FString CreateGramsString(float Grams, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateGallonsString(float Gallons, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateFlowRateString(float Value, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateFarenheitString(float Farenheit, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateDaysString(int32 Days);
    
    UFUNCTION(BlueprintPure)
    static FString CreateCurrentMonthString(UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FString CreateCurrentDayString(UObject* World);
    
    UFUNCTION(BlueprintPure)
    static FString CreateColourString(float SRMs, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateCentiMetersString(float CentiMeters, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateCelsiusString(float Celsius, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateC02VolumesString(float Volumes, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION(BlueprintPure)
    static FString CreateBitternessString(float IBUs, int32 Decimals, bool RemoveDecimalTrailingZeros);
    
    UFUNCTION()
    static void ClearCachedStrings();
    
};

