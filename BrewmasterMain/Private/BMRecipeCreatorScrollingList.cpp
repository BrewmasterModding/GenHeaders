#include "BMRecipeCreatorScrollingList.h"

class UBMRecipeCreatorScreen;
class UBMRecipeOptionButton;

void UBMRecipeCreatorScrollingList::SortByOwnedButtonPressed() {
}

TArray<FString> UBMRecipeCreatorScrollingList::SortByOwned() {
    return TArray<FString>();
}

void UBMRecipeCreatorScrollingList::SetRecipeCreator(UBMRecipeCreatorScreen* Creator) {
}

void UBMRecipeCreatorScrollingList::SetOptionButtonCallback(UBMRecipeOptionButton* OptionButton) {
}

void UBMRecipeCreatorScrollingList::SetListType(EBMRecipeCreatorListType Type) {
}

void UBMRecipeCreatorScrollingList::SetListActive(EBMRecipeCreatorListType NewType, FBMRecipeInstruction CurrentInstruction) {
}




void UBMRecipeCreatorScrollingList::RefreshOptionButtonSelectedStates() {
}

void UBMRecipeCreatorScrollingList::PopulateListWithButtons() {
}





TArray<FString> UBMRecipeCreatorScrollingList::GetIngredientNames() {
    return TArray<FString>();
}


TArray<FString> UBMRecipeCreatorScrollingList::GetIngredientCategories() {
    return TArray<FString>();
}

TArray<FString> UBMRecipeCreatorScrollingList::GetContainerCategories() {
    return TArray<FString>();
}

void UBMRecipeCreatorScrollingList::FillNameList() {
}

UBMRecipeCreatorScrollingList::UBMRecipeCreatorScrollingList() {
    this->IngredientDT = NULL;
    this->OptionButtonBP = NULL;
    this->CurrentlySelectedOptionButton = NULL;
    this->CurrentListType = EBMRecipeCreatorListType::IngredientType;
    this->CurrentIngredientCategory = EBMIngredientCategory::NONE;
    this->ScrollBox = NULL;
    this->RecipeCreator = NULL;
    this->IngredientDetailsPanel = NULL;
    this->SelectedItemDescription = NULL;
    this->ListTitleText = NULL;
}

