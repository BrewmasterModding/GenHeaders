#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMSubmitListBeerItem.generated.h"

class UBMCheckbox;
class UTexture2D;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSubmitListBeerItem : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMSubmitListBeerItem();
    UFUNCTION(BlueprintImplementableEvent)
    void UnselectCheckBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    void UnselectButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCheckBoxSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerName(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerImage(UTexture2D* BeerImage);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMCheckbox* GetCheckBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButton();
    
};

