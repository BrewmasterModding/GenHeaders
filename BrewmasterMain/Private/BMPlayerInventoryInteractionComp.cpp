#include "BMPlayerInventoryInteractionComp.h"

void UBMPlayerInventoryInteractionComp::ChangeActiveItem(int32 NewActiveItem) {
}

UBMPlayerInventoryInteractionComp::UBMPlayerInventoryInteractionComp() {
    this->PlayerChar = NULL;
    this->ItemSwitchGracePeriod = 0.10f;
}

