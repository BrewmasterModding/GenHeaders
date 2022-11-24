#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EFlavourNotes.h"
#include "BMContainerBrewSimFixedProperties.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMContainerBrewSimFixedProperties : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 ContainerSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float VolumeCapacity_ml;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float ContainerOnlyWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float InsulationFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bPourable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bSealable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float PressureLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bStirrable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bCanAttachAndPlaceInItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bHeatTolerant;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bCanBePlacedOnHeatMat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float EvaporationRateMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float InsulationWithLidFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bHasTap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float Wattage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    TMap<EFlavourNotes, float> ConditioningFlavourStrength;
    
    FBMContainerBrewSimFixedProperties();
};

