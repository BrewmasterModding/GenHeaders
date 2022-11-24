#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMScreenHUD.generated.h"

class UBMHUDInvalidActionNotification;
class UBMHUDActionPrompt;
class UBMHUDFullInfomationWidget;
class UBMStopWatchWidget;
class UBMHUDPinnedRecipe;
class UBMHUDContextualInfomationWidget;
class UBMHUDNotificationList;
class UBMHUDInventoryBar;
class UBMHUDContextualInfo;
class UBMHUDInteractionPromptSystem;
class UBMFinishedBeerStatPanel;
class UBMHUDActivityTracker;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMScreenHUD : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMScreenHUD();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateContextualInfoVisibilityInBuildMode(bool bIsBuildModeOn, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPinnedRecipeVisibility(bool Hide, bool OverrideDebugMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInventoryBarVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHUDVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentActivityVisibility(bool Hide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBuildModeActionPromptVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDFullInfomationWidget* GetXRayFullInformationWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDActionPrompt* GetToggleBuildModeActionPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMStopWatchWidget* GetStopWatchWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDPinnedRecipe* GetPinnedRecipeWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDNotificationList* GetNotificationList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDContextualInfomationWidget* GetItemInformationWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDInvalidActionNotification* GetInvalidActionWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDInventoryBar* GetHUDInventoryBar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDContextualInfo* GetHUDContextualInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDInteractionPromptSystem* GetHUDActionPromptSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMStopWatchWidget* GetFullStopWatchMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMFinishedBeerStatPanel* GetFinishedBeerPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMHUDActivityTracker* GetActivityTracker();
    
};

