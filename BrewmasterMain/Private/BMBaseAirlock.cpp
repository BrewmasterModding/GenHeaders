#include "BMBaseAirlock.h"

void ABMBaseAirlock::SetBubbleSpeed(float Speed) {
}

void ABMBaseAirlock::SetBubbleOpacity(float Opacity) {
}

FBMAirlockData ABMBaseAirlock::GetAirlockData() {
    return FBMAirlockData{};
}

ABMBaseAirlock::ABMBaseAirlock() {
    this->BubblingMaterial = NULL;
    this->BubblingMaterialIndexSlot = 0;
    this->BubblingDynamicMaterial = NULL;
}

