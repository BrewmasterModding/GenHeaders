#include "BMHUDInventorySlot.h"



void UBMHUDInventorySlot::SetInventorySlotState(const EBMInventorySlotState InventorySlotState) {
}




EBMInventorySlotState UBMHUDInventorySlot::GetInventorySlotState() {
    return EBMInventorySlotState::Normal;
}





UBMHUDInventorySlot::UBMHUDInventorySlot() {
    this->CurrentInventorySlotState = EBMInventorySlotState::Normal;
    this->HighlightTimeIn = 1.00f;
    this->HighlightDelay = 1.00f;
    this->HighlightTimeOut = 1.00f;
    this->BlockedTimeIn = 1.00f;
    this->BlockedTimeOut = 1.00f;
    this->ActiveTweenContainer = NULL;
}

