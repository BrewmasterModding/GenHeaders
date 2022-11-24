#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMSaveableActorInterface.h"
#include "BMBrewingState.h"
#include "EBMLiquidTransferType.h"
#include "BMWaterPacket.h"
#include "BMSimulationControl.generated.h"

class ABMBaseIngredientBag;
class ABMSimulationDataOut;
class ABMBrewingSimulator;
class ABMTimeController;
class ABMBaseActor;
class ABMDynamicContainer;
class ABMThermalCoupling;

UCLASS()
class BREWMASTERMAIN_API ABMSimulationControl : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ABMBrewingSimulator* BrewingSimulator;
    
    UPROPERTY()
    ABMSimulationDataOut* BrewingSimulatorDataModule;
    
    UPROPERTY()
    bool bSimulationRunning;
    
    UPROPERTY()
    float TimeOfLastStep;
    
    UPROPERTY()
    float SimulationDeltaTime;
    
    UPROPERTY()
    ABMTimeController* TimeController;
    
    UPROPERTY()
    bool bTimeAcceleration;
    
    UPROPERTY()
    float TimeAccelerationSpeed;
    
    UPROPERTY()
    float TotalDeltaTimePast;
    
    UPROPERTY()
    bool bTimeSkipping;
    
    UPROPERTY(SaveGame)
    double TimeNow;
    
    UPROPERTY()
    FBMBrewingState CurrentState;
    
public:
    UPROPERTY(EditAnywhere)
    bool bAdjustStepByFrameRate;
    
    ABMSimulationControl();
    UFUNCTION()
    void UnRegisterWithBrewingSimulator(ABMBaseActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void TransferLiquid(EBMLiquidTransferType LiquidTransferType, ABMDynamicContainer* FromContainer, ABMDynamicContainer* ToContainer, float AmountToTransfer, float FilterSize, ABMThermalCoupling* ThermalCoupling, bool IgnoreYeastMultiplier, float YeastMultiplier, bool IgnoreParticulates, float ParticulateMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void StopBrewingSimulation();
    
protected:
    UFUNCTION()
    void StartBrewingSimulation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTimeSkipEnabled(bool IsActive, float Days, float Hours, float Time, bool UseFameRate);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeController(ABMTimeController* TimeControllerRef);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeAccelerationEnabled(bool IsActive, float Speed);
    
    UFUNCTION()
    void SetTemperatureOfLiquidInContainer(ABMDynamicContainer* Container, float NewTemperature);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetStepTimeVariationEnabled(bool bNewEnabled);
    
public:
    UFUNCTION()
    void SetIngredientBagAttachment(ABMBaseIngredientBag* IngredientBag, ABMDynamicContainer* Container, bool bNewAttachState);
    
    UFUNCTION(BlueprintCallable)
    void RequestBrewingSimulationStart();
    
protected:
    UFUNCTION()
    void RemoveIngredientFromContainer(ABMDynamicContainer* Container, bool bDissolved, FName Name, float Mass);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAllIngredientsInContainer(ABMDynamicContainer* FromContainer);
    
    UFUNCTION()
    void RegisterWithBrewingSimulator(ABMBaseActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterContainer(ABMDynamicContainer* Container);
    
private:
    UFUNCTION()
    void NextSimulationStep();
    
public:
    UFUNCTION(BlueprintPure)
    float GetTimeNow();
    
    UFUNCTION(BlueprintCallable)
    ABMTimeController* GetTimeController();
    
    UFUNCTION(BlueprintPure)
    bool GetTimeCompressionActive();
    
    UFUNCTION(BlueprintPure)
    ABMSimulationDataOut* GetDataModule();
    
protected:
    UFUNCTION()
    void EnableDebugEvaporation(bool shouldEvaporate);
    
public:
    UFUNCTION(BlueprintCallable)
    void CleanWorkshopEquipment(bool bExcludeInventory, bool bReturnToStorage);
    
    UFUNCTION()
    void ChangeTemperatureOfLiquidInContainer(int32 ContainerID, float TemperatureDelta);
    
    UFUNCTION(BlueprintCallable)
    void AddLiquidToContainer(ABMDynamicContainer* Container, FBMWaterPacket WaterToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddIngredientToContainer(ABMDynamicContainer* Container, FName Name, float Mass, float Temperature, EBMLiquidTransferType LiquidTransferType, int32 FromIngredientID);
    
    UFUNCTION(BlueprintCallable)
    void AddDissolvedIngredientToContainer(ABMDynamicContainer* Container, FName Name, float Mass);
    
    
    // Fix for true pure virtual functions not being implemented
};

