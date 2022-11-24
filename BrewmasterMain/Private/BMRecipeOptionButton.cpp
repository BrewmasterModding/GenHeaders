#include "BMRecipeOptionButton.h"

class UBMRecipeCreatorScrollingList;

void UBMRecipeOptionButton::SetScrollingListReference(UBMRecipeCreatorScrollingList* ListReference) {
}

void UBMRecipeOptionButton::SetOptionText(const FString& InText) {
}

void UBMRecipeOptionButton::SetOptionIsSelected() {
}

void UBMRecipeOptionButton::SetIngredientType(EBMIngredientCategory Type) {
}

void UBMRecipeOptionButton::SetIngredientID(const FString& ID) {
}

void UBMRecipeOptionButton::SetContainerCategory(EBMEquipmentCategory Category) {
}



EBMIngredientCategory UBMRecipeOptionButton::GetIngredientType() {
    return EBMIngredientCategory::NONE;
}

FString UBMRecipeOptionButton::GetIngredientID() {
    return TEXT("");
}

EBMEquipmentCategory UBMRecipeOptionButton::GetContainerType() {
    return EBMEquipmentCategory::NONE;
}

UBMRecipeOptionButton::UBMRecipeOptionButton() {
    this->OptionButton = NULL;
    this->OptionText = NULL;
    this->ScrollingList = NULL;
}

