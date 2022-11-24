#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMOptionGamepadBinding.generated.h"

class UBMButton;
class UBMRichText;
class UBMActionGlyph;
class UImage;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMOptionGamepadBinding : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMButton* ChangeBindingButton;
    
    UPROPERTY(Instanced)
    UBMRichText* PressTypeText;
    
public:
    UBMOptionGamepadBinding();
    UFUNCTION()
    void SetupBinding();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetKeyBindingText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonSelect(UBMButton* Button, bool Selected);
    
    UFUNCTION()
    void RefreshPage();
    
    UFUNCTION()
    void OpenGamepadBindingOverlay();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetSecondaryAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPrimaryAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetPressTypeText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetPlusImage();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetMainButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBindingChangeButton();
    
};

