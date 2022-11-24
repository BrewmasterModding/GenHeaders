#include "BMPinnedRecipeOverlay.h"

class UTexture2D;
class UMaterialInterface;

void UBMPinnedRecipeOverlay::UnPinRecipe() {
}

void UBMPinnedRecipeOverlay::ToggleInstructionStepComplete(int32 StepToComplete, bool bStepIsCompleted) {
}

void UBMPinnedRecipeOverlay::ShowInstructions(bool Checked) {
}

void UBMPinnedRecipeOverlay::ShowIngredients(bool Checked) {
}


void UBMPinnedRecipeOverlay::SetRecipeData(FBMRecipeData Data) {
}

void UBMPinnedRecipeOverlay::SetInstructionsTabChecked() {
}

void UBMPinnedRecipeOverlay::SetIngredientsTabChecked() {
}

void UBMPinnedRecipeOverlay::SetBeerImageTexture(TSoftObjectPtr<UMaterialInterface> TextureToUse) {
}

void UBMPinnedRecipeOverlay::SetBeerImage(TSoftObjectPtr<UTexture2D> TextureToUse) {
}

void UBMPinnedRecipeOverlay::OpenRecipeCreator() {
}

void UBMPinnedRecipeOverlay::OnInstructionStepUnhovered(int32 HoveredRecipeStepIndex, bool bStepIsCompleted) {
}

void UBMPinnedRecipeOverlay::OnInstructionStepHovered(int32 HoveredRecipeStepIndex, bool bStepIsCompleted) {
}







































void UBMPinnedRecipeOverlay::EditRecipeInCreator() {
}

void UBMPinnedRecipeOverlay::ClosePinnedRecipe() {
}

void UBMPinnedRecipeOverlay::CloseAndOpenRecipeCreator() {
}

void UBMPinnedRecipeOverlay::CloseAndEditRecipeInCreator() {
}

void UBMPinnedRecipeOverlay::BatchSizeChanged(ESizeBand NewSize) {
}

UBMPinnedRecipeOverlay::UBMPinnedRecipeOverlay() {
    this->MaxFlavoursShown = 10;
    this->RecipeNameText = NULL;
    this->RecipeBeerDescription = NULL;
    this->IngredientsTab = NULL;
    this->InstructionsTab = NULL;
    this->InstructionsContent = NULL;
    this->IngredientsContent = NULL;
    this->InstructionsScrollBox = NULL;
    this->InstructionScrollBoxContent = NULL;
    this->BackButton = NULL;
    this->RecipeHUDInstructionBP = NULL;
    this->PinnedRecipeIngredientBarBP = NULL;
    this->BatchSizeWidget = NULL;
    this->RecipeDataSource = NULL;
    this->EquipmentDataSource = NULL;
    this->IngredientDataSource = NULL;
    this->BeerStyleDataSource = NULL;
    this->BeerImage = NULL;
    this->CharacteristicHeaderText = NULL;
    this->BeerDescriptionHeader = NULL;
    this->NextInstructionButton = NULL;
    this->PrevInstructionButton = NULL;
}

