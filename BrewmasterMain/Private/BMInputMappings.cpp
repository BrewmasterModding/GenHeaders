#include "BMInputMappings.h"

FBMInputMappings::FBMInputMappings() {
    this->Input = EBMInput::NONE;
    this->IDNumber = 0;
    this->InputSet = EBMInputSet::HUD_World;
    this->bIsController = false;
    this->bIsAlternative = false;
    this->bIsMultiButton = false;
    this->PressType = EBMInputPressType::NONE;
    this->bIsActionHoldPress = false;
    this->AxisScale = 0.00f;
}

