#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMInputActionData.h"
#include "EBMFurnitureCategory.h"
#include "BMTopLevelWidget.h"
#include "EBMInventoryStorageLocation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "EBMShopUIMode.h"
#include "BMShoppingCartData.h"
#include "BMCatalogueItemData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "EBMEquipmentCategory.h"
#include "EBMIngredientCategory.h"
#include "EBMCartButtonState.h"
#include "BMUniversalItemScreen.generated.h"

class UBMShopItemExpanded;
class UBMWSubCategoryTab;
class UBMWItemCategoryContainer;
class UBMNoItemsWidget;
class UBMHUDInventoryBar;
class UBMWShopItem;
class UBMWShopBuyNotification;
class UBMTextButtonWidget;
class UBMButton;
class UBMResourceWidget;
class UBMShoppingCart;
class UPanelWidget;
class UBMActionGlyph;
class UBMWItemDetailsPanel;
class UBMCategoryTab;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMUniversalItemScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMWItemCategoryContainer> ItemCategoryContainerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMWSubCategoryTab> SubCategoryTabClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMWShopItem> ShopItemClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMShopItemExpanded> ShopItemExpandedClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMNoItemsWidget> NoItemsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin SubCategorySlotPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin ShopItemPadding;
    
    UPROPERTY(Instanced)
    UBMWShopItem* DetailedShopItem;
    
    UPROPERTY(Instanced)
    UBMWShopItem* IngredientItemToRetrieve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BuyAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BuyCartAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData AddToCartAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData NextCategoryAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData PreviousCategoryAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData NextItemScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData PreviousItemScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData NextTabAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData PreviousTabAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData FakeRetrieveAction;
    
    UPROPERTY(Instanced)
    UBMWSubCategoryTab* CurrentCategory;
    
    UPROPERTY()
    int32 CurrentTab;
    
    UPROPERTY()
    bool InShopMode;
    
    UPROPERTY()
    EBMShopUIMode CurrentShoppingMode;
    
    UPROPERTY()
    TMap<FName, FBMShoppingCartData> ShoppingCart;
    
    UPROPERTY()
    EBMInventoryStorageLocation CurrentStorageType;
    
    UPROPERTY(Instanced)
    UBMShopItemExpanded* CurrentlySelectedItem;
    
    UPROPERTY(Instanced)
    TArray<UBMWShopItem*> ItemsInGrid;
    
    UPROPERTY(Instanced)
    TArray<UBMShopItemExpanded*> ShopItemInListOrCartView;
    
    UPROPERTY(Instanced)
    UBMWShopBuyNotification* ItemBoughtNotificationWidget;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* RetrieveTextButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* BuyItemTextButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* BuyCartTextButton;
    
    UPROPERTY(Instanced)
    UBMTextButtonWidget* AddToCartTextButton;
    
public:
    UBMUniversalItemScreen();
    UFUNCTION()
    void UpdateShopButtons();
    
    UFUNCTION()
    void UpdateRetrieveBuyAndAddToCartButtons();
    
    UFUNCTION()
    void UpdateRetrieveButton();
    
    UFUNCTION()
    void UpdatePlayerBeerTokensOwned();
    
    UFUNCTION()
    void UpdateItemWidgetVisuals_ShopList();
    
    UFUNCTION()
    void UpdateItemWidgetVisuals_ShopGrid();
    
    UFUNCTION()
    void UpdateItemWidgetVisuals_InventoryGrid();
    
    UFUNCTION()
    void UpdateItemWidget_Shop(UBMWShopItem* InShopItem);
    
    UFUNCTION()
    void UpdateInventoryItemWidgetVisuals(UBMWShopItem* InShopItem);
    
    UFUNCTION()
    void UpdateExpandedItemWidget_Shop(UBMShopItemExpanded* InExpandedShopItem);
    
protected:
    UFUNCTION()
    void UpdateDetailsPanelItemExpanded(UBMShopItemExpanded* ExpandedItem);
    
    UFUNCTION()
    void UpdateDetailsPanel(UBMWShopItem* ShopItem);
    
public:
    UFUNCTION()
    void UpdateCostValuesForShoppingCart();
    
    UFUNCTION()
    void UpdateBuyItemButton();
    
    UFUNCTION()
    void UpdateBuyCartButton();
    
    UFUNCTION()
    void UpdateAllItemWidgetVisuals();
    
    UFUNCTION()
    void UpdateAddToCartButton();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UnSelectPreviousSelectedItem();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SwitchTab(int32 TabNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetUpShopTabs();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTotalCartAmount(const FText& CartAmount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetShopTabsNames();
    
    UFUNCTION(BlueprintCallable)
    void SetShopBindings();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSelectedItemAmount(const FText& ItemAmount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDetailsPanelEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDetailPanelValues(const FText& Name, FSlateBrush Icon, const FText& Description);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDetailedPanelVisiblity(ESlateVisibility SetVisibility);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShopBindings();
    
    UFUNCTION()
    void RemoveItemFromShoppingCart(UBMWShopItem* ShopItem);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPinnedRecipePanel();
    
    UFUNCTION(BlueprintCallable)
    void PopulateShop(EBMInventoryStorageLocation AvailableItemStorageLocation);
    
    UFUNCTION(BlueprintCallable)
    void PopulatePinnedRecipePanel();
    
    UFUNCTION(BlueprintCallable)
    void PopulateMainItemPanel(EBMInventoryStorageLocation ItemType, EBMEquipmentCategory EquipmentCategory, EBMIngredientCategory IngredientCategory, EBMFurnitureCategory FurnitureCategory);
    
    UFUNCTION(BlueprintCallable)
    void PopulateMainCartPanel();
    
    UFUNCTION(BlueprintCallable)
    void PopulateCategoryPanel(EBMInventoryStorageLocation ItemType, bool IsShop);
    
public:
    UFUNCTION(BlueprintCallable)
    void PopulateCartPanel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PopulateCartCategories();
    
    UFUNCTION()
    void OnRetrieveButtonUnhover();
    
    UFUNCTION()
    void OnRetrieveButtonHover();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsTabAvailable(int32 TabNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideMultipleCategoryUI();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideCategoriesPanel();
    
    UFUNCTION()
    void HandleSelectedItemMKB(UBMWShopItem* ShopItem);
    
    UFUNCTION()
    void HandleSelectedExpandedItemMKB(UBMShopItemExpanded* ExpandedShopItem);
    
    UFUNCTION()
    void HandleSelectedCategory(UBMWSubCategoryTab* CategoryTab);
    
    UFUNCTION()
    void HandleRetrieveSelectedItem(UBMWShopItem* ShopItem);
    
    UFUNCTION()
    void HandleRetrieveButton();
    
    UFUNCTION()
    void HandlePreviousTab();
    
    UFUNCTION()
    void HandlePreviousCategory();
    
    UFUNCTION()
    void HandleNextTab();
    
    UFUNCTION()
    void HandleNextCategory();
    
    UFUNCTION()
    void HandleIngredientRetrieval();
    
    UFUNCTION()
    void HandleEarlyTutorialExit();
    
    UFUNCTION()
    void HandleBuySelectedItemExpanded(UBMShopItemExpanded* ExpandedItem);
    
    UFUNCTION()
    void HandleBuySelectedItem();
    
    UFUNCTION()
    void HandleBuyItemInCart();
    
    UFUNCTION()
    void HandleBuyCartButton();
    
    UFUNCTION()
    void HandleBackButton();
    
    UFUNCTION()
    void HandleAddItemToCartButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceWidget* GetTotalFundsWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWShopBuyNotification* GetShopPurchaseNotificationWidget();
    
public:
    UFUNCTION()
    void GetShoppingCartItemsAndCost(int32& ItemsInCart, int32& TotalCostOfItems);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UBMShoppingCart* GetShopingCartButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetRetrieveTextButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWItemCategoryContainer* GetRecipeWidgetContainer();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousTabActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousCategoryActionGlyph();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetNumberOfTabs();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNextTabActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNextCategoryActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetMainItemPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMHUDInventoryBar* GetInventoryBar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetInitalStorgeCupboardTypeName();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWItemDetailsPanel* GetDetailsPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetCategoriesPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBuyItemTextButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBuyCartTextButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetBuyActionGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetAddToCartTextButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnablePinnedRecipeTab();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableAllTabs();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DisableAllTabs();
    
public:
    UFUNCTION()
    bool CanItemBeRetrieved(FName UniqueItemName);
    
    UFUNCTION()
    bool CanItemBePurchased(FName UniqueItemName);
    
    UFUNCTION()
    EBMCartButtonState CanItemBeAddedToCart(FBMCatalogueItemData ItemData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindTabChanging(UBMCategoryTab* Tab);
    
    UFUNCTION(BlueprintCallable)
    void BindRetrieveButton(UBMButton* ClickedButton);
    
    UFUNCTION(BlueprintCallable)
    void BindBuyCartButton(UBMButton* ClickedButton);
    
    UFUNCTION(BlueprintCallable)
    void BindBackButton(UBMButton* ClickedButton);
    
    UFUNCTION(BlueprintCallable)
    void BindAddToCartButton(UBMButton* ClickedButton);
    
    UFUNCTION(BlueprintCallable)
    void AdjustItemCategoriesUI(bool IsShop);
    
    UFUNCTION(BlueprintCallable)
    void AddCartBindings();
    
};

