#include "BMBaseEquipment.h"

class ABMBaseTap;
class ABMDynamicContainer;

void ABMBaseEquipment::TurnOnOff(bool bNewOnState) {
}

void ABMBaseEquipment::GetTaps(TArray<ABMBaseTap*>& returnTaps) {
}

ABMDynamicContainer* ABMBaseEquipment::GetContainerThisAttachedTo() {
    return NULL;
}

ABMDynamicContainer* ABMBaseEquipment::GetContainerAttachedToThis() {
    return NULL;
}

ABMBaseEquipment::ABMBaseEquipment() {
}

