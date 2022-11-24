#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMIngredientTransferRequestNonDissolved.h"
#include "BMSaveableActorInterface.h"
#include "BMChangeLiquidTemperatureRequest.h"
#include "BMBrewingState.h"
#include "BMIngredientBagChange.h"
#include "BMWaterRemoveRequest.h"
#include "BMWaterAddRequest.h"
#include "BMTransferDissolvedIngredient.h"
#include "BMLiquidPropertiesTransfer.h"
#include "BMDebugSetTemperatureRequest.h"
#include "EBMLiquidTransferType.h"
#include "BMBrewingSimulator.generated.h"

class ABMFixedData;
class ABMDynamicContainer;
class ABMBaseIngredientBag;
class ABMTube;
class ABMBaseHeatExchanger;
class ABMBaseTap;
class ABMBaseLid;
class ABMThermalCoupling;

UCLASS()
class BREWMASTERMAIN_API ABMBrewingSimulator : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    FBMBrewingState CurrentSimulationState;
    
    UPROPERTY(SaveGame)
    float TimeNow;
    
    UPROPERTY()
    FBMBrewingState WorkingSimulationState;
    
    UPROPERTY()
    ABMFixedData* FixedData;
    
    UPROPERTY()
    bool bIsEvaporationEnabled;
    
    UPROPERTY()
    TArray<ABMDynamicContainer*> NewContainerRequests;
    
    UPROPERTY()
    TArray<ABMBaseIngredientBag*> NewIngredientBags;
    
    UPROPERTY()
    TArray<FBMIngredientBagChange> IngredientBagAttachmentChanges;
    
    UPROPERTY()
    TArray<FBMWaterAddRequest> WaterAddRequests;
    
    UPROPERTY()
    TArray<FBMChangeLiquidTemperatureRequest> ChangeLiquidTemperatureRequests;
    
    UPROPERTY()
    TArray<FBMWaterRemoveRequest> WaterRemoveRequests;
    
    UPROPERTY()
    TArray<FBMIngredientTransferRequestNonDissolved> IngredientAddRequests;
    
    UPROPERTY()
    TArray<FBMIngredientTransferRequestNonDissolved> IngredientRemoveRequests;
    
    UPROPERTY()
    TArray<FBMTransferDissolvedIngredient> DissolvedIngredientsAddRequests;
    
    UPROPERTY()
    TArray<FBMLiquidPropertiesTransfer> LiquidPropertyRequests;
    
    UPROPERTY()
    TArray<FBMTransferDissolvedIngredient> DissolvedIngredientsRemoveRequests;
    
    UPROPERTY()
    TArray<FBMDebugSetTemperatureRequest> DebugSetTempRequests;
    
    UPROPERTY()
    TArray<ABMBaseHeatExchanger*> UpdatedHeatExchangers;
    
    UPROPERTY()
    TArray<ABMBaseTap*> Taps;
    
    UPROPERTY()
    TArray<ABMBaseLid*> Lids;
    
    UPROPERTY()
    TArray<ABMTube*> CurrentTubes;
    
    UPROPERTY()
    TArray<ABMDynamicContainer*> RemoveContainerRequests;
    
    UPROPERTY()
    TArray<ABMBaseIngredientBag*> RemoveIngredientBags;
    
    UPROPERTY()
    TArray<ABMBaseHeatExchanger*> RemoveHeatExchangers;
    
    UPROPERTY()
    TArray<ABMBaseTap*> RemoveTaps;
    
    UPROPERTY()
    TArray<ABMBaseLid*> RemoveLids;
    
    UPROPERTY()
    TArray<ABMTube*> RemoveTubes;
    
public:
    ABMBrewingSimulator();
private:
    UFUNCTION()
    FBMBrewingState StepSimulation(float SimulationDeltaTime, float SimulationCurrentTime);
    
    UFUNCTION()
    FBMBrewingState RemoveAllIngredientsRequest(ABMDynamicContainer* FromContainer);
    
    UFUNCTION()
    void RemoveAllContainerIngredients(FBMBrewingState& State, ABMDynamicContainer* FromContainer);
    
    UFUNCTION()
    void HandleRequests(FBMBrewingState& State);
    
    UFUNCTION()
    void HandleRemoveRequests();
    
public:
    UFUNCTION()
    void EnableEvaporation(bool IsEnabled);
    
private:
    UFUNCTION()
    FBMBrewingState AddTranferLiquidRequest(EBMLiquidTransferType Type, ABMDynamicContainer* FromContainer, float TotalVolumeToTransfer, ABMDynamicContainer* ToContainer, float FilterSize, ABMThermalCoupling* ThermalCoupling, bool IgnoreYeastMultiplier, float YeastMultiplier, bool IgnoreParticulates, float ParticulateMultipler);
    
    
    // Fix for true pure virtual functions not being implemented
};

