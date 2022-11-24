#include "BMRecipeAmountOverlay.h"

class UBMRecipeCreatorScreen;




void UBMRecipeAmountOverlay::OpenRecipeAmountOverlay(FBMRecipeInstruction Type, EBMRecipeInstructionVariable Context, UBMRecipeCreatorScreen* CreatorReference, const FString& PreviousText, const FString& CurerntValue) {
}

void UBMRecipeAmountOverlay::IncreaseAmount() {
}










FString UBMRecipeAmountOverlay::GetAmountString() {
    return TEXT("");
}


void UBMRecipeAmountOverlay::DecreaseAmount() {
}

void UBMRecipeAmountOverlay::CloseOverlay() {
}

void UBMRecipeAmountOverlay::CheckForHeldInput() {
}

void UBMRecipeAmountOverlay::ApplyEditableText(const FText& InText) {
}

void UBMRecipeAmountOverlay::AllowHeldInput() {
}

UBMRecipeAmountOverlay::UBMRecipeAmountOverlay() {
    this->EditableAmountText = NULL;
    this->UnitText = NULL;
    this->RecipeCreator = NULL;
    this->InputInterval = 0.20f;
    this->InputPressed = false;
}

