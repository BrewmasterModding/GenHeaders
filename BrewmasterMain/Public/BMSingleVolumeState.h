#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMBeerProperties.h"
#include "EIngredientPhysicalType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMSingleVolumeState.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMSingleVolumeState : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMBeerProperties BeerProperties;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FBMBeerProperties PreviousBeerState;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float PreviousTime;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float SimTime;
    
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    float TotalMaltColourUnits;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<int32, float> EnzymeIntegrities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<int32, float> StarchPercentages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float TotalStarchMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float TotalStarchVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float TotalGrainVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float StarchPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float TotalEvaporationAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float TotalDissolvedSugarMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float EvaporationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<int32, EIngredientPhysicalType> NonDissolvedIngredientsPhysicalTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<int32, float> NonDissolvedIngredientsGranuleSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float ABVRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float ProteinRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float CarbonationRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float ContaminationRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float IBURateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float ColourRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float SpecificGravityRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float TemperatureRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float AlphaAcidsRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float YeastColoniesRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<int32, float> NonDissolvedIngredientsMassRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<int32, float> DissolvedIngredientsMassRateOfChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector LiquidReceivedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float HeightOfLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float MaximumHeightOfLiquid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float DifferenceOfPouringAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float GrainToLiquidVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FColor MeanGrainColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FColor GrainColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FVector GrainMoundLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float StirringSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float YeastActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float PreviousYeastActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float YeastPopulationThreshold;
    
    FBMSingleVolumeState();
};

