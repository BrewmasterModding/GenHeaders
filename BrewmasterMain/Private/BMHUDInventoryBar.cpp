#include "BMHUDInventoryBar.h"

class UTweenContainer;

void UBMHUDInventoryBar::ShowWidgetsHiddenByTweens() {
}





void UBMHUDInventoryBar::ResetTweenAnimations() {
}

void UBMHUDInventoryBar::PlayTweenNotifyInventoryItemAdded(int32 SlotNumberToHighlight) {
}

UTweenContainer* UBMHUDInventoryBar::PlayTweenNotifyInventoryBlockedOut() {
    return NULL;
}

UTweenContainer* UBMHUDInventoryBar::PlayTweenNotifyInventoryBlockedIn() {
    return NULL;
}

void UBMHUDInventoryBar::PlayTweenNotifyInventoryBlocked() {
}

void UBMHUDInventoryBar::HideWidgetsForTweens() {
}









UBMHUDInventoryBar::UBMHUDInventoryBar() {
    this->InventoryBorder = NULL;
    this->ItemNameHorizontalBox = NULL;
    this->PreviousItemGlyphRoot = NULL;
    this->NextItemGlyphRoot = NULL;
    this->ActiveTweenContainer = NULL;
    this->HUD_InventorySlotClass = NULL;
    this->TotalNumSlots = 8;
    this->ItemAddedInTime = 1.00f;
    this->ItemAddedPauseTime = 1.00f;
    this->ItemAddedOutTime = 1.00f;
    this->InventoryBlockedInTime = 1.00f;
    this->InventoryBLockedPauseTime = 1.00f;
    this->InventoryBlockedOutTime = 1.00f;
}

