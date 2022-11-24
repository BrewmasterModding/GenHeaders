#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMObjectiveWidget.generated.h"

class UBMCheckbox;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMObjectiveWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMObjectiveWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMCheckbox* GetCheckBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableStarIcon();
    
};

