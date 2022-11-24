#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EBMXrayInformationMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BMNotificationAnimationTimings.h"
#include "BMNotificationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "BMOverlayData.h"
#include "BMScreenData.h"
#include "BM_UI_ID.h"
#include "EBMNotificationType.h"
#include "BMInWorldInteraction.h"
#include "EBMBuildModeHudStatus.h"
#include "BMHUD.generated.h"

class UTexture2D;
class UBMScreenHUD;
class UBMHUDInteractionPromptSystem;
class UBMObjectiveMarker;
class UBMCursorWidget;
class UBMHUDInventoryBar;
class UBMHUDContextualInfomationWidget;
class UBMHUDFullInfomationWidget;
class UBMFurnitureSwapInventoryBar;
class UBMStopWatchWidget;
class UUserWidget;
class UBMScreenHUDBuildMode;
class UBMHUDActionPrompt;
class UBMAudioAssetListBase;
class AActor;
class ABMPlayerController;
class ABMCharacter;
class USoundBase;
class UBMHUDPinnedRecipe;
class UBMHUDInvalidActionNotification;
class UBMHUDContextualInfo;

UCLASS(NonTransient)
class BREWMASTERMAIN_API ABMHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBMObjectiveMarker* HUD_Objective;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBMCursorWidget* HUD_Reticule;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBMHUDInventoryBar* HUD_InventoryBar;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBMHUDContextualInfomationWidget* ItemInformationView;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBMHUDFullInfomationWidget* DetailedXRayView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawXrayMode;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBMHUDInteractionPromptSystem* HUD_InteractionPromptSystem;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftClassPtr<UTexture2D> CursorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawCursor;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D CursorCenterPoint;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D CursorScreenOrigin;
    
    UPROPERTY(Instanced)
    UBMStopWatchWidget* ActiveStopWatch;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUserWidget* CurrentScreen;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBMScreenHUD* CurrentHUD;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUserWidget* CurrentOverlay;
    
    UPROPERTY(BlueprintReadWrite)
    bool StopWatchModeOpen;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBMScreenHUDBuildMode* BuildModeHUD;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMScreenHUDBuildMode> BuildHUD_WidgetClass;
    
    UPROPERTY(BlueprintReadWrite)
    bool bBuildModeOn;
    
    UPROPERTY(BlueprintReadWrite)
    bool bSwapModeOn;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBMHUDInteractionPromptSystem* BuildHUD_InteractionPromptSystem;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBMHUDActionPrompt* BuildHUD_ExitBuildModeActionPrompt;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBMHUDActionPrompt* BuildHUD_OpenStorageActionPrompt;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBMFurnitureSwapInventoryBar* BuildHUD_SwapInventoryBar;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUserWidget> PlaceHolderScreenClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMObjectiveMarker> ObjectiveMarkerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMScreenHUD> HUD_WidgetClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool ShouldReturnToWorldHUD;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDebugNoHUDWidget;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBMDebugHideAllUI;
    
    UPROPERTY()
    TMap<UUserWidget*, ESlateVisibility> PreHideWidgetVisibilities;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FBMScreenData> AllGameScreens;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FBMOverlayData> AllGameOverlays;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FBM_UI_ID> UI_History;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxVisibleNotifications;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMNotificationType, FBMNotificationData> NotificationDataByType;
    
    UPROPERTY(EditDefaultsOnly)
    FBMNotificationAnimationTimings NotificationAnimationTimings;
    
public:
    ABMHUD();
    UFUNCTION(BlueprintCallable)
    void UpdateXRayModeWidget(AActor* Interactee, EBMXrayInformationMode CurrentMode, bool bIsVisible, TArray<FBMInWorldInteraction> PossibleInteractions);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStopWatchUI(ABMPlayerController* PC);
    
    UFUNCTION()
    void UpdatePackagedBeerStats(AActor* HitActor);
    
    UFUNCTION()
    void UpdateBuildModeUI(ABMPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void ToggleBuildMode();
    
    UFUNCTION(BlueprintCallable)
    void ToggleActiveStopWatch(ABMCharacter* BMCharacter, ABMPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void SetXRayModeToUpdate(bool bshouldUpdate, ABMPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetSwapModeOn(bool bSetSwapModeOn);
    
    UFUNCTION(BlueprintCallable)
    void SetReticuleVisible(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveMarkerVisible(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisible(bool bNewActive);
    
    UFUNCTION(BlueprintCallable)
    void SetDetailedXrayVisible(bool bNewVisible);
    
    UFUNCTION()
    bool ReturnToBuildModeHUD();
    
    UFUNCTION()
    void PlaySoundAsset(USoundBase* SoundAsset);
    
    UFUNCTION()
    void OpenOverlay(FBM_UI_ID OverlayID);
    
    UFUNCTION(BlueprintCallable)
    bool IsSwapModeOn();
    
    UFUNCTION(BlueprintCallable)
    bool IsBuildModeOn();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseItemViewPanel();
    
    UFUNCTION()
    void GoToScreen(FBM_UI_ID ScreenID);
    
    UFUNCTION()
    UBMHUDFullInfomationWidget* GetXRayFullInformationWidget();
    
    UFUNCTION()
    UBMStopWatchWidget* GetStopWatchWidget();
    
    UFUNCTION()
    UBMHUDPinnedRecipe* GetPinnedRecipeWidget();
    
    UFUNCTION()
    bool GetNotificationData(EBMNotificationType Type, FBMNotificationData& OutNotificationData) const;
    
    UFUNCTION()
    UBMHUDContextualInfomationWidget* GetItemInformationWidget();
    
    UFUNCTION()
    UBMHUDInvalidActionNotification* GetInvalidActionWidget();
    
    UFUNCTION()
    UBMHUDInventoryBar* GetHUDInventoryBar();
    
    UFUNCTION()
    UBMHUDInteractionPromptSystem* GetHudInteractionPromptSystem();
    
    UFUNCTION()
    UBMHUDContextualInfo* GetHUDContextualInfo();
    
    UFUNCTION()
    UBMStopWatchWidget* GetFullStopWatchModeWidget();
    
    UFUNCTION()
    UUserWidget* GetCurrentScreen();
    
    UFUNCTION()
    UUserWidget* GetCurrentOverlay();
    
    UFUNCTION(BlueprintCallable)
    EBMBuildModeHudStatus GetBuildModeHUDStatus();
    
    UFUNCTION()
    UBMScreenHUDBuildMode* GetBuildModeHUD();
    
    UFUNCTION()
    UBMHUDInteractionPromptSystem* GetBuildHudInteractionPromptSystem();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseItemViewPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateHUD_Reticule();
    
    UFUNCTION(BlueprintCallable)
    void CreateHUD_Objective();
    
    UFUNCTION()
    void CloseOverlay();
    
    UFUNCTION()
    void BackOneStepInUIHistory();
    
};

