#include "BMHUDPinnedRecipe.h"

void UBMHUDPinnedRecipe::OnCultureChanged() {
}

void UBMHUDPinnedRecipe::LoadInstructions() {
}

void UBMHUDPinnedRecipe::IncrementInstructionStep() {
}








void UBMHUDPinnedRecipe::DecrementInstructionStep() {
}

UBMHUDPinnedRecipe::UBMHUDPinnedRecipe() : UUserWidget(FObjectInitializer::Get()) {
    this->ScrollPadding = 10.00f;
    this->InstructionScrollBox = NULL;
    this->PinnedRecipeTitleText = NULL;
    this->GameSettings = NULL;
    this->RecipeHUDInstructionBP = NULL;
    this->RecipeDataSource = NULL;
}

