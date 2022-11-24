#include "BMRecipeCreatorAddPhrase.h"

class UBMRecipeCreatorScreen;

void UBMRecipeCreatorAddPhrase::SetupWidget(UBMRecipeCreatorScreen* Creator, int32 Phrase, EBMRecipeInstructionVariable VariableType) {
}

EBMRecipeInstructionVariable UBMRecipeCreatorAddPhrase::GetCurrentVariableType() {
    return EBMRecipeInstructionVariable::IngredientType;
}


UBMRecipeCreatorAddPhrase::UBMRecipeCreatorAddPhrase() {
    this->RecipeCreator = NULL;
    this->PhraseIndex = 0;
    this->IndexWithinPhrase = 0;
    this->CurrentVariableType = EBMRecipeInstructionVariable::IngredientType;
}

