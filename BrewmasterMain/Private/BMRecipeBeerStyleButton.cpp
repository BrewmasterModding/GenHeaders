#include "BMRecipeBeerStyleButton.h"

class UBMRecipeCreatorScreen;

void UBMRecipeBeerStyleButton::SetRecipeCreatorReference(UBMRecipeCreatorScreen* Creator) {
}


void UBMRecipeBeerStyleButton::SetBeerStyleName(const FString& InText) {
}

void UBMRecipeBeerStyleButton::SetBeerStyleID(const FString& ID) {
}


FString UBMRecipeBeerStyleButton::GetBeerStyleName() {
    return TEXT("");
}

FString UBMRecipeBeerStyleButton::GetBeerStyleID() {
    return TEXT("");
}


void UBMRecipeBeerStyleButton::ApplyBeerStyleToRecipeCreator() {
}

UBMRecipeBeerStyleButton::UBMRecipeBeerStyleButton() {
    this->BeerStyleText = NULL;
    this->BeerStyleButton = NULL;
    this->RecipeCreator = NULL;
}

