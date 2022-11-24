#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputEvent -FallbackName=EInputEvent
#include "OnUnitsDisplayFormChangedDelegate.h"
#include "BMInputActionData.h"
#include "OnInputMethodChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EBMInputSet.h"
#include "BMPlatformSpecificMultipliers.h"
#include "BMFrozenActions.h"
#include "BMItemData.h"
#include "EBMInput.h"
#include "BM_UI_ID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "BMPlayerController.generated.h"

class UBMInputManager;
class UBMAudioAssetListBase;
class ABMBaseActor;
class AActor;
class UUserWidget;
class UBMActionGlyph;
class ABMHUD;

UCLASS()
class BREWMASTERMAIN_API ABMPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanEnterDebugMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanUseKeyboardArrowsToNavigateUI;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanUseTabToNavigateUI;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EBMInputSet CurrentInputSet;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EBMInputSet PreInputSet;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector2D CursorPosition_ViewportSpace;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector2D PreviousCursorPosition;
    
    UPROPERTY()
    TArray<FBMFrozenActions> FrozenActionsStack;
    
public:
    UPROPERTY(BlueprintReadWrite)
    FVector2D CursorInput_Gamepad;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D CursorInput_KBaM;
    
    UPROPERTY(BlueprintAssignable)
    FOnInputMethodChanged InputMethodDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUnitsDisplayFormChanged UnitsDisplayChangeDelegate;
    
    UPROPERTY()
    TArray<FBMInputActionData> ActiveActions;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool DisableInputKeys;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsJournalTutorialBlocked;
    
protected:
    UPROPERTY()
    bool bRevertOptionsTimerOn;
    
    UPROPERTY()
    float RevertSettingsAccumulatedTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bLerpBetweenSpeeds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScreenSpaceCursorRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScreenSpaceCursorRadius_HUD;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FBMPlatformSpecificMultipliers CursorSpeedMultipliers;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FBMPlatformSpecificMultipliers CursorAimSensitivityMultipliers;
    
    UPROPERTY(VisibleAnywhere)
    float CursorSpeedMultiplier_CurrentPlatform;
    
    UPROPERTY(VisibleAnywhere)
    float CursorAimSensitivityMultiplier_CurrentPlatform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LerpSpeedToHover;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LerpSpeedFromHover;
    
    UPROPERTY(BlueprintReadOnly)
    float CursorSpeedMultiplier_Current;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CursorTravelSpeed_AsScreenPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CursorTravelSpeed_Threshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAlwaysUseCircularCursor;
    
    UPROPERTY()
    UBMInputManager* InputManager;
    
    UPROPERTY()
    float AlphaWidgetSavedPos;
    
    UPROPERTY(EditDefaultsOnly)
    float PCLoadingScreenFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float SwitchLoadingScreenFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float XboxLoadingScreenFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float PlaystationLoadingScreenFadeTime;
    
private:
    UPROPERTY()
    TArray<FBMItemData> SwappableFurniture;
    
    UPROPERTY()
    int32 SelectedFurnitureIndex;
    
    UPROPERTY()
    int32 ActiveFurnitureIndex;
    
    UPROPERTY()
    TMap<int32, ABMBaseActor*> SpawnedActorsForPreview;
    
    UPROPERTY()
    AActor* NextFestHUDObjective;
    
public:
    ABMPlayerController();
    UFUNCTION()
    void UpdateXRayUI();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCursorVisuals();
    
    UFUNCTION()
    void UpdateCursorUIFocus();
    
    UFUNCTION()
    void UpdateCursorPosition(float UnscaledDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateActiveActionGlyphs();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowLoadingScreenWidget(bool bShowWidget, float FadeUpTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMouseCursorWidgetVisible(bool bVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLoadingScreen(UUserWidget* LoadingScreen);
    
    UFUNCTION()
    void SetInputMethod(bool bIsGamepad);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugMenuVisibility(bool Visibility);
    
    UFUNCTION()
    void SetBrewersFullScreenUIInputsBlocked(bool BlockInput);
    
    UFUNCTION(BlueprintCallable)
    void SetAlphaWidgetSavePos(float ScrollPos);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveInputMode(EBMInputSet NewMode);
    
    UFUNCTION()
    void SetActionGlyph(EBMInput InputAction, UBMActionGlyph* PromptGlyph, bool bIsInlineGlyph);
    
    UFUNCTION()
    void RemoveActiveAction(FBMInputActionData InputToRemove);
    
    UFUNCTION(BlueprintCallable)
    void NavigateUI(FBM_UI_ID UIID);
    
    UFUNCTION(BlueprintPure)
    bool IsWithEditor();
    
protected:
    UFUNCTION()
    bool HandlePlayerInput(EBMInput InputID, EBMInputSet InteractionSet, int32 InputKeyID);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetStoredWatchRotation();
    
protected:
    UFUNCTION(BlueprintPure)
    bool GetShouldCursorSlowOnInteractables();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UUserWidget* GetLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    bool GetLastInputWasGamepad();
    
    UFUNCTION(BlueprintPure)
    bool GetIsCursorCircle();
    
    UFUNCTION()
    UBMInputManager* GetInputManager();
    
protected:
    UFUNCTION()
    TMap<int32, EBMInput> GetInputIDFromInputEvent(FKey Key, TEnumAsByte<EInputEvent> EventType, EBMInputSet InteractionSet);
    
public:
    UFUNCTION()
    FVector2D GetCursorPosition();
    
    UFUNCTION()
    void GetCircularCursorPositions(TArray<FVector2D>& outPositions);
    
    UFUNCTION(BlueprintPure)
    ABMHUD* GetBMHud();
    
    UFUNCTION(BlueprintCallable)
    float GetAlphaWidgetSavePos();
    
    UFUNCTION()
    void ForceRefreshMousePosition();
    
    UFUNCTION()
    void DebugToggleHideUI();
    
    UFUNCTION()
    bool CheckIfButtonIsPressed(int32 InputIndex);
    
    UFUNCTION(BlueprintCallable)
    void BackOneStepInUIHistory();
    
    UFUNCTION(BlueprintCallable)
    void BackInUIHistoryAndPopFrozenActions();
    
protected:
    UFUNCTION()
    void AxisTurnRate(float AxisValue);
    
    UFUNCTION()
    void AxisTurn(float AxisValue);
    
    UFUNCTION()
    void AxisMoveRight(float AxisValue);
    
    UFUNCTION()
    void AxisMoveLeft(float AxisValue);
    
    UFUNCTION()
    void AxisMoveForward(float AxisValue);
    
    UFUNCTION()
    void AxisMoveBack(float AxisValue);
    
    UFUNCTION()
    void AxisLookUpRate(float AxisValue);
    
    UFUNCTION()
    void AxisLookUp(float AxisValue);
    
};

