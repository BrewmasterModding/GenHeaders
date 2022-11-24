#include "BMInWorldInteraction.h"

FBMInWorldInteraction::FBMInWorldInteraction() {
    this->InputID = EBMInput::NONE;
    this->bIsActive = false;
    this->InteractionComponent = NULL;
    this->Interactee = NULL;
    this->bIsInvalid = false;
}

