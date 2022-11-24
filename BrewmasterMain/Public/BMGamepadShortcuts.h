#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMTopLevelWidget.h"
#include "BMGamepadShortcuts.generated.h"

class UBMButton;
class UBMScrollBox;
class UBMOptionGamepadBinding;
class UBMActionGlyph;
class UBMTextButtonWidget;
class UBMOptionsTab;
class UHorizontalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMGamepadShortcuts : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMButton* CurrentKeyChanging;
    
    UPROPERTY(Instanced)
    UBMOptionGamepadBinding* CurrentSelectedWidget;
    
    UPROPERTY(Instanced)
    TArray<UBMOptionsTab*> OptionsTabs;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMOptionsTab> OptionsTabClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMOptionGamepadBinding> KeyBindingClass;
    
public:
    UBMGamepadShortcuts();
    UFUNCTION(BlueprintImplementableEvent)
    void SetKeyDescriptionText(const FText& Text);
    
protected:
    UFUNCTION()
    void ResetToDefaultsDialougeBox();
    
    UFUNCTION()
    void ResetInputToDefaults();
    
    UFUNCTION()
    void HandlePreviousTabAction();
    
    UFUNCTION()
    void HandleNextTabAction();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UHorizontalBox* GetTabHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMScrollBox* GetScrollBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetResetDefaults();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousTabActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNextTabActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
protected:
    UFUNCTION()
    void CloseScreen();
    
    UFUNCTION()
    void ChangeTab(int32 NewTab);
    
};

