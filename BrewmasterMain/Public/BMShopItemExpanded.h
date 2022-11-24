#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "OnUpdateExpandedDetailsDelegate.h"
#include "OnSelectedExpandedItemDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "EBMShopUIMode.h"
#include "OnSelectedExpandedItemMKBDelegate.h"
#include "BMShopItemExpanded.generated.h"

class UBMUniversalItemScreen;
class UBMButton;
class UPanelWidget;
class UBMWShopItem;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMShopItemExpanded : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnUpdateExpandedDetails UpdateExpandedDetailsDelegate;
    
    UPROPERTY()
    FOnSelectedExpandedItem SelectedExpandedItemDelegate;
    
    UPROPERTY()
    FOnSelectedExpandedItemMKB SelectedExpandedItemKBAM;
    
protected:
    UPROPERTY()
    int32 AmountAvailable;
    
    UPROPERTY()
    FName ItemId;
    
    UPROPERTY(Instanced)
    UBMUniversalItemScreen* UniversalScreen;
    
public:
    UBMShopItemExpanded();
    UFUNCTION(BlueprintCallable)
    void UpdateItemVisualsForInventoryView();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStyleForShop(bool bIsPurchasable, EBMShopUIMode CurrentMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStyleForInventory(bool bIsPurchasable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOptionalVisibility(ESlateVisibility AmountVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemName(const FText& Text);
    
    UFUNCTION()
    void SetItemID(FName Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemAmountText(const FText& Text);
    
    UFUNCTION()
    void SetItemAmount(int32 Amount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCartItemAmount(int32 Amount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAmountVisibility(ESlateVisibility AmountVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAddRemoveButtonsVisible(bool AreVisible);
    
    UFUNCTION()
    void RemoveButtonPressed();
    
    UFUNCTION()
    void PlusButtonPressed();
    
    UFUNCTION()
    void MinusButtonPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetSubstitutesContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UBMWShopItem* GetShopItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetPlusButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetMinusButton();
    
    UFUNCTION()
    FName GetItemID();
    
    UFUNCTION()
    int32 GetItemAmount();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetDeleteButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DisableSubstitues();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastExpandedSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastExpandedKBAMSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastExpandedFocusedItem();
    
    UFUNCTION()
    void AddAmountButtonBinding(UBMUniversalItemScreen* NewUniversalScreen);
    
};

