#include "BMPinnedRecipeIngredientBar.h"

void UBMPinnedRecipeIngredientBar::SetSectionName(const FString& Name) {
}

void UBMPinnedRecipeIngredientBar::LoadReferences() {
}



void UBMPinnedRecipeIngredientBar::ClearGrids() {
}

void UBMPinnedRecipeIngredientBar::AddNewGrid(const FString& GridName, FSlateBrush IconBrush, int32 Amount, bool Owned, bool Ingredient, FBMItemData ItemData, FBMGenericIngredientData IngredientData) {
}

UBMPinnedRecipeIngredientBar::UBMPinnedRecipeIngredientBar() {
    this->GridColumnMax = 0;
    this->SectionText = NULL;
    this->GridPanel = NULL;
    this->PinnedRecipeIngredientGridBP = NULL;
}

