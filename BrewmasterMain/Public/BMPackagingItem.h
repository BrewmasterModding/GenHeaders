#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMPackagingItem.generated.h"

class UBMCheckbox;
class UObject;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPackagingItem : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMPackagingItem();
    UFUNCTION(BlueprintImplementableEvent)
    void SetImage(UObject* inImage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCheckBoxUnselectState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCheckBoxSelectState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonUnselectState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonSelectState();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMCheckbox* GetBMCheckBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBMButton();
    
};

