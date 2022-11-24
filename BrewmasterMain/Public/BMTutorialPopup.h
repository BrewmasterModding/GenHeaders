#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMTutorialPopup.generated.h"

class UBMTextButtonWidget;
class UPanelWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTutorialPopup : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMTutorialPopup();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPopUpManuallyClosed(bool bManuallyClosed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetObjectiveText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideAllArrows();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetRequirementBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetContinueButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableUpArrow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableRightArrow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableLeftArrow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableDownArrow();
    
    UFUNCTION()
    void DismissPopUp();
    
};

