#include "BMClickableText.h"

class UBMRecipeCreatorScreen;

void UBMClickableText::SetupWidget(UBMRecipeCreatorScreen* Creator, int32 Phrase, int32 TextIndex, EBMRecipeInstructionVariable VariableType, bool bClickable) {
}




void UBMClickableText::SetText(const FString& InText) {
}

void UBMClickableText::SetClickableTextAsSelected() {
}

void UBMClickableText::SetButtonClickable(bool Clickable) {
}

void UBMClickableText::SetAmount(const FString& Amount) {
}



EBMRecipeInstructionVariable UBMClickableText::GetCurrentVariableType() {
    return EBMRecipeInstructionVariable::IngredientType;
}

FString UBMClickableText::GetAmount() {
    return TEXT("");
}

UBMClickableText::UBMClickableText() {
    this->HiddenButton = NULL;
    this->Text = NULL;
    this->RecipeCreator = NULL;
    this->PhraseIndex = 0;
    this->IndexWithinPhrase = 0;
    this->CurrentVariableType = EBMRecipeInstructionVariable::IngredientType;
}

