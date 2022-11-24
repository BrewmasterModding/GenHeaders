#include "BMContextualTipManager.h"

ABMContextualTipManager::ABMContextualTipManager() {
    this->MaxContextualTipsTime = 30.00f;
    this->MaxContextualTipsTimeFallback = 600.00f;
    this->RefreshPossibleContextualTipsTime = 600.00f;
    this->InventoryItemChangeDelay = 5.00f;
    this->GlobalCoolDown = 2;
}

