#include "BMSaveGameData_ActorSaveData.h"

FBMSaveGameData_ActorSaveData::FBMSaveGameData_ActorSaveData() {
    this->UniqueId = 0;
    this->ActorIDAttachedTo = 0;
    this->bBPChildActor = false;
    this->bLoadComponentsOnly = false;
}

