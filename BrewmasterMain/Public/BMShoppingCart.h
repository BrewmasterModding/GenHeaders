#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "OnSelectedShoppingTabDelegate.h"
#include "BMShoppingCart.generated.h"

class UBMCheckbox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMShoppingCart : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnSelectedShoppingTab SelectedShoppingTabDelegate;
    
    UBMShoppingCart();
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemAmountText(const FText& ItemsNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCostText(const FText& SetCost);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMCheckbox* GetCheckBox();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSelectedTab(int32 Tab);
    
};

