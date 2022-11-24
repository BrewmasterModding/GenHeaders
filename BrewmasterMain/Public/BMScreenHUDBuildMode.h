#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMBuildModeHudStatus.h"
#include "BMScreenHUDBuildMode.generated.h"

class UBMHUDInvalidActionNotification;
class UBMHUDActionPrompt;
class UBMStopWatchWidget;
class UBMFurnitureSwapInventoryBar;
class UBMHUDInteractionPromptSystem;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMScreenHUDBuildMode : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 SwapInventoryBarBuffer;
    
public:
    UBMScreenHUDBuildMode();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleSwapInventoryVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleStopWatchControlsVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleIsFurnitureCarriedHUDVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleBuildHUDVisibilty(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHUDVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnToBuildHUD(EBMBuildModeHudStatus BuildModeHudStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlacementSliderUpdated(bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMFurnitureSwapInventoryBar* GetSwapInventoryBar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMStopWatchWidget* GetStopWatchWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDActionPrompt* GetOpenStorageActionPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDInvalidActionNotification* GetInvalidActionWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDInteractionPromptSystem* GetHUDActionPromptSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDActionPrompt* GetExitBuildModeActionPrompt();
    
};

