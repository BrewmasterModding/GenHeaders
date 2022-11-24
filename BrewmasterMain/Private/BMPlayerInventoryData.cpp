#include "BMPlayerInventoryData.h"

FBMPlayerInventoryData::FBMPlayerInventoryData() {
    this->ActiveSlot = 0;
    this->MaxInventorySize = 0;
    this->CurrentInventorySize = 0;
    this->SelectedSlot = 0;
    this->bInventoryUsable = false;
    this->bActiveSlotStowed = 0;
}

