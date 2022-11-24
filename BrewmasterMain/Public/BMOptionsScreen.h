#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMTopLevelWidget.h"
#include "BMOptionsScreen.generated.h"

class UBMOptionWidget;
class UBMActionGlyph;
class UBMTextButtonWidget;
class UBMOptionsTab;
class UBMDialogueBox;
class UScrollBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMOptionsScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMOptionWidget> ToggleOptionWidgetBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMOptionWidget> SliderOptionWidgetBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMOptionWidget> CarouselOptionWidgetBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMOptionWidget> ButtonOptionWidgetBP;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAllowTabNavigationToWrap;
    
protected:
    UPROPERTY(Instanced)
    TArray<UBMOptionsTab*> OptionsTabs;
    
    UPROPERTY(Instanced)
    UScrollBox* OptionsScrollBox;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* BackButton;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RevertTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RevertTimeLeft;
    
    UPROPERTY(Instanced)
    UBMOptionWidget* GraphicsQualityWidget;
    
    UPROPERTY(Instanced)
    UBMDialogueBox* WarningDialouge;
    
    UPROPERTY()
    int32 CurrentTabIndex;
    
    UPROPERTY()
    bool bHasSwitchedFromDisplayTab;
    
    UPROPERTY()
    int32 SwitchedFromDisplayTabTo;
    
public:
    UBMOptionsScreen();
    UFUNCTION()
    void UpdateWarningText();
    
    UFUNCTION()
    void SetToKeyboardMouseDefaults();
    
    UFUNCTION()
    void SetToGraphicsDefaults();
    
    UFUNCTION()
    void SetToGeneralDefaults();
    
    UFUNCTION()
    void SetToDisplayDefaults();
    
    UFUNCTION()
    void SetToControllerDefaults();
    
    UFUNCTION()
    void SetToAudioDefaults();
    
    UFUNCTION()
    void SetToAccessibilityDefaults();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOptionsTitleText(const FText& Title);
    
    UFUNCTION()
    void SetCustomGraphicsQuality(int32 Value);
    
    UFUNCTION()
    void RevertResolutionChanges();
    
    UFUNCTION()
    void ResetToDefaultsDialougeBox();
    
    UFUNCTION()
    void RefreshLocChange();
    
    UFUNCTION()
    void RefreshGraphicsUISettings(int32 Value);
    
    UFUNCTION()
    void RefreshGeneralOptions();
    
    UFUNCTION()
    void RefreshCurrentlyPossibleContextualTips(int32 Value);
    
    UFUNCTION()
    void HandlePreviousTabAction();
    
    UFUNCTION()
    void HandleNextTabAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetSetDefaultsButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetRevertToDefaultsActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousTabActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UScrollBox* GetOptionsScrollBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNextTabActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMOptionsTab* GetMouseKeyboardOptionsTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMOptionsTab* GetGraphicsOptionsTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMOptionsTab* GetGeneralOptionsTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMOptionsTab* GetDisplayOptionsTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMOptionsTab* GetControllerOptionsTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMOptionsTab* GetAudioOptionsTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetApply();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMOptionsTab* GetAccessibilityOptionsTab();
    
    UFUNCTION()
    void DisableResolutionCarousel(int32 Value);
    
    UFUNCTION()
    void ConfirmResolutionChanges();
    
    UFUNCTION()
    void CloseOptionsScreen();
    
    UFUNCTION()
    void CheckForDisplayChangesOnTabChange(int32 TabIndexSwitchingTo);
    
    UFUNCTION()
    void AutoRevertResolutionChanges();
    
    UFUNCTION()
    void ApplyChangesToResolution();
    
};

