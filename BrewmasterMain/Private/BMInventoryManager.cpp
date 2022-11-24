#include "BMInventoryManager.h"

void ABMInventoryManager::UnlockNewSeasonItems() {
}

void ABMInventoryManager::UnlockAllItems() {
}

bool ABMInventoryManager::FindIfItemUnlocked(FName Item, bool NeedsToBeOwned) {
    return false;
}

void ABMInventoryManager::DebugUnlockNextSeasonItemsInShop() {
}

void ABMInventoryManager::AddUnlockedItemInShop(FBMCatalogueItemData UnlockedItem) {
}

ABMInventoryManager::ABMInventoryManager() {
    this->MasterItemDataTable = NULL;
    this->MasterIngredientDataTable = NULL;
    this->MasterCatalogueDataTable = NULL;
    this->MasterFurnitureDataTable = NULL;
    this->RefreshData = false;
    this->DeliveryBoxClass = NULL;
    this->bNewItemsToBuyThisSeason = false;
}

