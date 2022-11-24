#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMPackagingSubScreenButton.generated.h"

class UBMPackagingSubScreenList;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPackagingSubScreenButton : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMPackagingSubScreenList* SubScreenList;
    
public:
    UBMPackagingSubScreenButton();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSubText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMatchingStyle(bool RecipeMatch, bool ActivityMatch);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMainText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonUnselected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideSubText();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBMButton();
    
protected:
    UFUNCTION()
    void ButtonPressed();
    
};

