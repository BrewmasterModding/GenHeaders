#pragma once
#include "CoreMinimal.h"
#include "BMHopsFlavourInstance.h"
#include "BMContaminationData.h"
#include "EFlavourCategory.h"
#include "EFlavourNotes.h"
#include "BMLiquidPropertiesTransfer.generated.h"

class ABMDynamicContainer;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLiquidPropertiesTransfer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FName> UsedYeasts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FName> UsedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMContaminationData LiquidContamination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMContaminationData IngredientContamination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Particlulates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float IsoAcids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float Carbonation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FBMHopsFlavourInstance> HopsFlavours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EFlavourNotes, float> FlavourNotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EFlavourCategory, float> Flavours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    ABMDynamicContainer* ToContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    ABMDynamicContainer* FromContainer;
    
    FBMLiquidPropertiesTransfer();
};

