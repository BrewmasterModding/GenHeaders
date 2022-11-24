#include "BMUniversalItemScreen.h"

class UBMWShopItem;
class UBMShopItemExpanded;
class UBMWSubCategoryTab;
class UBMCategoryTab;
class UBMButton;

void UBMUniversalItemScreen::UpdateShopButtons() {
}

void UBMUniversalItemScreen::UpdateRetrieveBuyAndAddToCartButtons() {
}

void UBMUniversalItemScreen::UpdateRetrieveButton() {
}

void UBMUniversalItemScreen::UpdatePlayerBeerTokensOwned() {
}

void UBMUniversalItemScreen::UpdateItemWidgetVisuals_ShopList() {
}

void UBMUniversalItemScreen::UpdateItemWidgetVisuals_ShopGrid() {
}

void UBMUniversalItemScreen::UpdateItemWidgetVisuals_InventoryGrid() {
}

void UBMUniversalItemScreen::UpdateItemWidget_Shop(UBMWShopItem* InShopItem) {
}

void UBMUniversalItemScreen::UpdateInventoryItemWidgetVisuals(UBMWShopItem* InShopItem) {
}

void UBMUniversalItemScreen::UpdateExpandedItemWidget_Shop(UBMShopItemExpanded* InExpandedShopItem) {
}

void UBMUniversalItemScreen::UpdateDetailsPanelItemExpanded(UBMShopItemExpanded* ExpandedItem) {
}

void UBMUniversalItemScreen::UpdateDetailsPanel(UBMWShopItem* ShopItem) {
}

void UBMUniversalItemScreen::UpdateCostValuesForShoppingCart() {
}

void UBMUniversalItemScreen::UpdateBuyItemButton() {
}

void UBMUniversalItemScreen::UpdateBuyCartButton() {
}

void UBMUniversalItemScreen::UpdateAllItemWidgetVisuals() {
}

void UBMUniversalItemScreen::UpdateAddToCartButton() {
}

void UBMUniversalItemScreen::UnSelectPreviousSelectedItem() {
}





void UBMUniversalItemScreen::SetShopBindings() {
}





void UBMUniversalItemScreen::RemoveShopBindings() {
}

void UBMUniversalItemScreen::RemoveItemFromShoppingCart(UBMWShopItem* ShopItem) {
}

void UBMUniversalItemScreen::RefreshPinnedRecipePanel() {
}

void UBMUniversalItemScreen::PopulateShop(EBMInventoryStorageLocation AvailableItemStorageLocation) {
}

void UBMUniversalItemScreen::PopulatePinnedRecipePanel() {
}

void UBMUniversalItemScreen::PopulateMainItemPanel(EBMInventoryStorageLocation ItemType, EBMEquipmentCategory EquipmentCategory, EBMIngredientCategory IngredientCategory, EBMFurnitureCategory FurnitureCategory) {
}

void UBMUniversalItemScreen::PopulateMainCartPanel() {
}

void UBMUniversalItemScreen::PopulateCategoryPanel(EBMInventoryStorageLocation ItemType, bool IsShop) {
}

void UBMUniversalItemScreen::PopulateCartPanel() {
}

void UBMUniversalItemScreen::PopulateCartCategories() {
}

void UBMUniversalItemScreen::OnRetrieveButtonUnhover() {
}

void UBMUniversalItemScreen::OnRetrieveButtonHover() {
}




void UBMUniversalItemScreen::HandleSelectedItemMKB(UBMWShopItem* ShopItem) {
}

void UBMUniversalItemScreen::HandleSelectedExpandedItemMKB(UBMShopItemExpanded* ExpandedShopItem) {
}

void UBMUniversalItemScreen::HandleSelectedCategory(UBMWSubCategoryTab* CategoryTab) {
}

void UBMUniversalItemScreen::HandleRetrieveSelectedItem(UBMWShopItem* ShopItem) {
}

void UBMUniversalItemScreen::HandleRetrieveButton() {
}

void UBMUniversalItemScreen::HandlePreviousTab() {
}

void UBMUniversalItemScreen::HandlePreviousCategory() {
}

void UBMUniversalItemScreen::HandleNextTab() {
}

void UBMUniversalItemScreen::HandleNextCategory() {
}

void UBMUniversalItemScreen::HandleIngredientRetrieval() {
}

void UBMUniversalItemScreen::HandleEarlyTutorialExit() {
}

void UBMUniversalItemScreen::HandleBuySelectedItemExpanded(UBMShopItemExpanded* ExpandedItem) {
}

void UBMUniversalItemScreen::HandleBuySelectedItem() {
}

void UBMUniversalItemScreen::HandleBuyItemInCart() {
}

void UBMUniversalItemScreen::HandleBuyCartButton() {
}

void UBMUniversalItemScreen::HandleBackButton() {
}

void UBMUniversalItemScreen::HandleAddItemToCartButton() {
}



void UBMUniversalItemScreen::GetShoppingCartItemsAndCost(int32& ItemsInCart, int32& TotalCostOfItems) {
}






















bool UBMUniversalItemScreen::CanItemBeRetrieved(FName UniqueItemName) {
    return false;
}

bool UBMUniversalItemScreen::CanItemBePurchased(FName UniqueItemName) {
    return false;
}

EBMCartButtonState UBMUniversalItemScreen::CanItemBeAddedToCart(FBMCatalogueItemData ItemData) {
    return EBMCartButtonState::Enabled;
}

void UBMUniversalItemScreen::BindTabChanging(UBMCategoryTab* Tab) {
}

void UBMUniversalItemScreen::BindRetrieveButton(UBMButton* ClickedButton) {
}

void UBMUniversalItemScreen::BindBuyCartButton(UBMButton* ClickedButton) {
}

void UBMUniversalItemScreen::BindBackButton(UBMButton* ClickedButton) {
}

void UBMUniversalItemScreen::BindAddToCartButton(UBMButton* ClickedButton) {
}

void UBMUniversalItemScreen::AdjustItemCategoriesUI(bool IsShop) {
}

void UBMUniversalItemScreen::AddCartBindings() {
}

UBMUniversalItemScreen::UBMUniversalItemScreen() {
    this->ItemCategoryContainerClass = NULL;
    this->SubCategoryTabClass = NULL;
    this->ShopItemClass = NULL;
    this->ShopItemExpandedClass = NULL;
    this->NoItemsClass = NULL;
    this->DetailedShopItem = NULL;
    this->IngredientItemToRetrieve = NULL;
    this->CurrentCategory = NULL;
    this->CurrentTab = 0;
    this->InShopMode = false;
    this->CurrentShoppingMode = EBMShopUIMode::NONE;
    this->CurrentStorageType = EBMInventoryStorageLocation::NONE;
    this->CurrentlySelectedItem = NULL;
    this->ItemBoughtNotificationWidget = NULL;
    this->RetrieveTextButton = NULL;
    this->BuyItemTextButton = NULL;
    this->BuyCartTextButton = NULL;
    this->AddToCartTextButton = NULL;
}

