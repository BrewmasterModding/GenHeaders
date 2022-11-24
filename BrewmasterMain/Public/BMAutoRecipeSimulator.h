#pragma once
#include "CoreMinimal.h"
#include "BMRecipeInstruction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMAutoRecipeInstruction.h"
#include "BMBeerProperties.h"
#include "BMAutoRecipeSimulator.generated.h"

class UDataTable;
class ABMAutoBrewSim;
class ABMDynamicContainer;
class ABMSimulationControl;

UCLASS()
class BREWMASTERMAIN_API ABMAutoRecipeSimulator : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bIsSimulating;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentAutoInstructionIndex;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FBMAutoRecipeInstruction> AutoInstructions;
    
protected:
    UPROPERTY()
    ABMAutoBrewSim* AutoBrewSim;
    
    UPROPERTY()
    ABMSimulationControl* SimController;
    
    UPROPERTY()
    ABMDynamicContainer* DefaultContainer;
    
    UPROPERTY()
    UDataTable* Equipment_DT;
    
    UPROPERTY()
    UDataTable* Recipe_DT;
    
    UPROPERTY()
    float MinimumInstructionInterval;
    
    UPROPERTY()
    float HoursPerSecondMultiplier;
    
    UPROPERTY()
    float ContainerLiquidVolume;
    
public:
    ABMAutoRecipeSimulator();
    UFUNCTION(BlueprintCallable)
    void SetMinimumInterval(float Interval);
    
    UFUNCTION(BlueprintCallable)
    void SetHoursPerSecondMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentBeerStatsToRecipe();
    
    UFUNCTION(BlueprintCallable)
    FBMBeerProperties GetSimulatedBeerProperties();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSimulationComplete();
    
    UFUNCTION(BlueprintCallable)
    FBMRecipeInstruction GetCurrentRecipeInstruction();
    
    UFUNCTION(BlueprintCallable)
    float GetContainerLiquidVolume();
    
};

