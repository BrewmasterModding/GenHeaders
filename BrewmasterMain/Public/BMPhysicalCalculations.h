#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameplayStatics -FallbackName=GameplayStatics
#include "BMSugarEnzymeStructData.h"
#include "BMHeatExchangeData.h"
#include "BMCO2Data.h"
#include "BMPhysicalCalculations.generated.h"

UCLASS()
class UBMPhysicalCalculations : public UGameplayStatics {
    GENERATED_BODY()
public:
    UBMPhysicalCalculations();
    UFUNCTION(BlueprintPure)
    static float GetMaltActivity(float CurrentTemperature, FBMSugarEnzymeStructData SugarData, float EnzymeIntegrity);
    
    UFUNCTION(BlueprintPure)
    static float ConvertCO2VolumesToMasses(float CO2Volumes, float liquidAmount);
    
    UFUNCTION(BlueprintPure)
    static float ConvertCO2MassToVolumes(float CO2Mass, float liquidAmount);
    
    UFUNCTION(BlueprintPure)
    static float CalcHeatExchange(float DeltaTime, FBMHeatExchangeData HeatExchanger, float CurrentTemperature, float Mass, float ScalingFactor, float SpecificHeatCapacity);
    
    UFUNCTION(BlueprintPure)
    static float CalcCarbonationExchange(float DeltaTime, FBMCO2Data CO2Data, float CurrentCarbonation, float Mass, float ScalingFactor, float SpecificCarbonationCapacity);
    
};

