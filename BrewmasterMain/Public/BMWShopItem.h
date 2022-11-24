#pragma once
#include "CoreMinimal.h"
#include "OnSelectedItemDelegate.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OnHoverItemDelegate.h"
#include "OnUnhoverItemDelegate.h"
#include "OnSelectedItemMKBDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "EBMShopUIMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "BMWShopItem.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWShopItem : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FDataTableRowHandle ShopItemData;
    
    UPROPERTY()
    FOnHoverItem HoveredItemDelegate;
    
    UPROPERTY()
    FOnUnhoverItem UnHoveredItemDelegate;
    
    UPROPERTY()
    FOnSelectedItem SelectedItemDelegate;
    
    UPROPERTY()
    FOnSelectedItemMKB SelectedItemDelegateMKB;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsIngredient;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsFurniture;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsInCart;
    
    UPROPERTY(Instanced)
    UBMUserWidget* ParentWidget;
    
    UBMWShopItem();
    UFUNCTION(BlueprintImplementableEvent)
    void ShowInfinitySymbol(bool bShowIcon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowAmountText(bool bShowText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShoppingListOwnedBackground(bool bIsOwnedOrPurchased);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetShopItemIcon(FSlateBrush Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetShopItemFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemStyleForShop(bool bIsPurchaseable, EBMShopUIMode CurrentShopMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemStyleForInventory(bool bIsPurchaseable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsInCartIconVisibility(bool IsAddedToCart);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsChecked(bool IsChecked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDisabled(bool IsDisabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCheckMarkVisibility(ESlateVisibility CheckMarkVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCheckMark(bool SetChecked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAmountStoredAndOwnedText(const FText& Amount);
    
    UFUNCTION(BlueprintImplementableEvent)
    FSlateBrush GetSlateBrush();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastUnfocusedItem();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSelectedItemMKB();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastFocusedItem();
    
};

