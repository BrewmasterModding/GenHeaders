#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMSubmitListItem.generated.h"

class UBMResourceSystem;
class UBMCheckbox;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSubmitListItem : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMSubmitListItem();
    UFUNCTION(BlueprintImplementableEvent)
    void UnselectCheckBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    void UnselectButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJobName(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCheckBoxSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetResourcePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMCheckbox* GetCheckBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButton();
    
};

