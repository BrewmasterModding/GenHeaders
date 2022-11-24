#pragma once
#include "CoreMinimal.h"
#include "BMWaterPacket.h"
#include "BMContainerBrewSimFixedProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BMIngredientPacket.h"
#include "OnContainerChangedDelegate.h"
#include "BMSingleVolumeState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BMBrewSimDebugWidget.generated.h"

class ABMDynamicContainer;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBrewSimDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMContainerBrewSimFixedProperties DebugContainerProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMWaterPacket DebugAddWaterProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMIngredientPacket DebugAddIngredientProperties;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ABMDynamicContainer* FocusContainerRef;
    
    UPROPERTY(BlueprintAssignable)
    FOnContainerChanged OnFocusContainerChanged;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<ABMDynamicContainer*> ContainersInSimulation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString FocusContainerDebugString;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FBMSingleVolumeState FocusContainerCurrentState;
    
    UPROPERTY()
    bool bSetupDone;
    
    UPROPERTY()
    TArray<ABMDynamicContainer*> GhostContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTimeToGraph;
    
public:
    UBMBrewSimDebugWidget();
protected:
    UFUNCTION()
    void UpdateDataFromBrewsim();
    
    UFUNCTION(BlueprintCallable)
    void ToggleEvaporation(bool bIsEvaporationEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetupBrewSimDebugWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeSkip(bool IsActive, float Hours, float Days, float TimeToComplete);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeAcceleration(bool IsActive, float TimeSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusContainer(ABMDynamicContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTimeStepVariation(bool inStepVariationEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAdjustableStepFrameRate(bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshDataDisplay();
    
    UFUNCTION(BlueprintCallable)
    void DebugTransferLiquid(ABMDynamicContainer* FromContainer, ABMDynamicContainer* ToContainer, float TransferAmount, float FilterSize);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetTemperature(float NewTemperature);
    
    UFUNCTION(BlueprintCallable)
    void DebugRemoveIngredient(ABMDynamicContainer* Container, bool bDissolved, FName Name, float Mass);
    
    UFUNCTION(BlueprintCallable)
    ABMDynamicContainer* DebugCreateContainerFromData(FDataTableRowHandle ContainerData);
    
    UFUNCTION(BlueprintCallable)
    void DebugAddWater();
    
    UFUNCTION(BlueprintCallable)
    void DebugAddIngredient();
    
    UFUNCTION(BlueprintNativeEvent)
    bool AddContainerOption(ABMDynamicContainer* Container);
    
};

