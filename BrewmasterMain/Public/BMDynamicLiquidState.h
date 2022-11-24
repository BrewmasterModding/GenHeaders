#pragma once
#include "CoreMinimal.h"
#include "EFlavourNotes.h"
#include "EFlavourCategory.h"
#include "BMContaminationData.h"
#include "BMHopsFlavourInstance.h"
#include "BMDynamicLiquidState.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMDynamicLiquidState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float Temperature;
    
    UPROPERTY(SaveGame)
    double Mass;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float SpecificGravity;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float OriginalGravity;
    
    UPROPERTY()
    bool bUpdateOriginalGravity;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float IsoAlphaAcids_g;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float AlcoholByVolume_0to1;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    float TotalLiquidVolume_ml;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<EFlavourCategory, float> LiquidFlavor;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<EFlavourNotes, float> LiquidFlavorNotes;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FBMHopsFlavourInstance> LiquidFlavor_HOPS;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> HopAdditionTimes;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FBMContaminationData ContaminationData;
    
    UPROPERTY(SaveGame)
    double CO2ProducedMass;
    
    UPROPERTY(SaveGame)
    double CO2VolumeProduced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float EvaporationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Agitation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Particulates;
    
    FBMDynamicLiquidState();
};

