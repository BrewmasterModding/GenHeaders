#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMSaveableActorInterface.h"
#include "BMBrewingState.h"
#include "OnUpdatedDelegateDelegate.h"
#include "BMSimulationDataOut.generated.h"

class ABMFixedData;
class ABMDynamicContainer;

UCLASS()
class BREWMASTERMAIN_API ABMSimulationDataOut : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FBMBrewingState CurrentSimulationState;
    
    UPROPERTY()
    ABMFixedData* FixedData;
    
    UPROPERTY(SaveGame)
    float fCurrentSimTime;
    
public:
    UPROPERTY()
    FOnUpdatedDelegate OnBrewSimDataUpdated;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ABMDynamicContainer* ContainerToLogStateFor;
    
public:
    ABMSimulationDataOut();
protected:
    UFUNCTION()
    void UpdateStateData(const FBMBrewingState& NewState, float SimulationTimeStamp);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetContainerToSave(ABMDynamicContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    ABMFixedData* GetFixedDataManager();
    
    UFUNCTION(BlueprintCallable)
    FBMBrewingState GetBrewingState();
    
    
    // Fix for true pure virtual functions not being implemented
};

