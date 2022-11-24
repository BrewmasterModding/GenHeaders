#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMTopLevelWidget.h"
#include "BMKeyboardShortcuts.generated.h"

class UBMButton;
class UBMWTabDiv;
class UBMOptionKeyboardBinding;
class UBMTextButtonWidget;
class UBMOptionsTab;
class UHorizontalBox;
class UBMScrollBox;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMKeyboardShortcuts : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UBMWTabDiv> TabDiv;
    
    UPROPERTY(Instanced)
    UBMButton* CurrentKeyChanging;
    
    UPROPERTY(Instanced)
    UBMOptionKeyboardBinding* CurrentSelectedWidget;
    
    UPROPERTY(Instanced)
    TArray<UBMOptionsTab*> OptionsTabs;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMOptionsTab> OptionsTabClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMOptionKeyboardBinding> KeyBindingClass;
    
public:
    UBMKeyboardShortcuts();
protected:
    UFUNCTION()
    void SetOptionsTabToKBAM();
    
public:
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

