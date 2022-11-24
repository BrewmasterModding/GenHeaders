#pragma once
#include "CoreMinimal.h"
#include "BMInstanceList.h"
#include "BMIngredientIDList.h"
#include "BMDynamicLiquidState.h"
#include "BMContaminationData.h"
#include "BMYeastIngredientData_Colonies.h"
#include "BMHeatExchangeData.h"
#include "BMBrewingState.generated.h"

class ABMBaseLid;
class ABMTube;
class ABMDynamicContainer;
class ABMBaseIngredientBag;
class ABMBaseHeatExchanger;
class ABMBaseTap;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBrewingState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, ABMDynamicContainer*> ContainerInstances;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, ABMBaseIngredientBag*> IngredientBagContainers;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<int32> LiquidInstances;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, FName> IngredientInstances;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, ABMBaseHeatExchanger*> HeatExchangers;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, ABMBaseTap*> Taps;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, ABMTube*> Tubes;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, ABMBaseLid*> Lids;
    
    UPROPERTY(SaveGame)
    int32 ContainerCount;
    
    UPROPERTY(SaveGame)
    int32 LiquidCount;
    
    UPROPERTY(SaveGame)
    int32 IngredientCount;
    
    UPROPERTY(SaveGame)
    int32 HeatExchangerCount;
    
    UPROPERTY(SaveGame)
    int32 YeastColoniesCount;
    
    UPROPERTY(SaveGame)
    int32 TapsCount;
    
    UPROPERTY(SaveGame)
    int32 TubesCount;
    
    UPROPERTY(SaveGame)
    int32 LidsCount;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, int32> LiquidInContainer;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, FBMIngredientIDList> IngredientsInContainer;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, FBMIngredientIDList> IngredientsInLiquid;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, int32> HeatExchangerAttachments;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, int32> TapAttachment;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, int32> TubeAttachment;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, int32> LidAttachment;
    
    UPROPERTY(SaveGame)
    TMap<int32, FBMInstanceList> IngredientBagAttachment;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, FBMDynamicLiquidState> LiquidProperties;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> IngredientTemperatures;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> IngredientDissolution;
    
    UPROPERTY(SaveGame)
    TMap<int32, double> IngredientMass;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> IngredientAlphaAcidUtilization;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, FBMContaminationData> IngredientContamination;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, FBMContaminationData> LiquidContamination;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> DeltaAlphaAcidUtilization;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> IngredientOriginalMass;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> StarchMassInMalt;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> EnzymeIntegrityValue;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, FBMYeastIngredientData_Colonies> YeastColonies;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> IngredientTimeInLiquid;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, FBMHeatExchangeData> HeatExchangersData;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> DeadYeastPopulation;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TMap<int32, float> DeadYeastWhileActive;
    
public:
    FBMBrewingState();
};

