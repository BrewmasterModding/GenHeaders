#include "BMRecipeHUDInstruction.h"

class UTweenContainer;

bool UBMRecipeHUDInstruction::TryInterruptActiveTween(UTweenContainer* ContainerToDelete) {
    return false;
}

void UBMRecipeHUDInstruction::StopHighlightStepChange() {
}

void UBMRecipeHUDInstruction::SetStepIncomplete() {
}

void UBMRecipeHUDInstruction::SetStepComplete() {
}


void UBMRecipeHUDInstruction::SetInstructionText(FText Text) {
}



void UBMRecipeHUDInstruction::PlayStepComplete() {
}

void UBMRecipeHUDInstruction::PlayHighlightStepChange() {
}






void UBMRecipeHUDInstruction::BroadcastButtonUnhovered() {
}

void UBMRecipeHUDInstruction::BroadcastButtonPressed() {
}

void UBMRecipeHUDInstruction::BroadcastButtonHovered() {
}

UBMRecipeHUDInstruction::UBMRecipeHUDInstruction() {
    this->StrokeAnimTime = 0.25f;
    this->CheckmarkButton = NULL;
    this->CheckmarkBackgroundImage = NULL;
    this->CheckmarkImage = NULL;
    this->CheckmarkMaterialInstance = NULL;
    this->InstructionText = NULL;
    this->ActiveTweenContainer = NULL;
}

