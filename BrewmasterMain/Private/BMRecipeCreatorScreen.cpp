#include "BMRecipeCreatorScreen.h"

class UBMRecipePhraseWidget;

void UBMRecipeCreatorScreen::UpdateRecipeData() {
}

void UBMRecipeCreatorScreen::SortScrollingListByOwned() {
}

void UBMRecipeCreatorScreen::ShowPossiblePhraseInstructions() {
}



void UBMRecipeCreatorScreen::ShowGuidedRecipePanel() {
}


void UBMRecipeCreatorScreen::ShowAdvancedRecipePanel() {
}


void UBMRecipeCreatorScreen::SetRecipeDescPanelActive() {
}


void UBMRecipeCreatorScreen::SetPanelVisible(int32 PanelIndex) {
}

void UBMRecipeCreatorScreen::SetNewActiveInstructionText(const FText& InText, TEnumAsByte<ETextCommit::Type> InCommitType) {
}


void UBMRecipeCreatorScreen::SetEditorRecipeNameText(const FText& InText) {
}

void UBMRecipeCreatorScreen::SetEditorRecipeName(const FText& InText) {
}

void UBMRecipeCreatorScreen::SetEditorRecipeDescriptionText(const FText& InText) {
}


void UBMRecipeCreatorScreen::SetCurrentVariableType(EBMRecipeInstructionVariable NewVariableType) {
}

void UBMRecipeCreatorScreen::SetChosenInstructionPhrase(FBMRecipeInstruction Instruction) {
}


void UBMRecipeCreatorScreen::SetBeerStylePanelActive() {
}




void UBMRecipeCreatorScreen::SetBeerStyleID(const FString& BeerStyleID) {
}


void UBMRecipeCreatorScreen::SetBeerStyle(const FString& BeerStyle) {
}

void UBMRecipeCreatorScreen::SetAllGrain(bool AllGrain) {
}

void UBMRecipeCreatorScreen::SetActivePhraseWidgetSelected(UBMRecipePhraseWidget* Phrase) {
}

void UBMRecipeCreatorScreen::SetActiveClickableText(int32 PhraseIndex, int32 ClickableTextIndex) {
}

void UBMRecipeCreatorScreen::SaveCurrentRecipeToDataTable() {
}

void UBMRecipeCreatorScreen::RefreshPhraseIngredients() {
}

void UBMRecipeCreatorScreen::RefreshClickableTextRestrictions() {
}

void UBMRecipeCreatorScreen::OpenScrollingList(EBMRecipeCreatorListType Type) {
}

void UBMRecipeCreatorScreen::OpenRecipeNameDialogueBox() {
}

void UBMRecipeCreatorScreen::OpenJournal() {
}

void UBMRecipeCreatorScreen::OpenInstructionTextDialogueBox() {
}

void UBMRecipeCreatorScreen::OpenIngredientTypeSelectPanel() {
}

void UBMRecipeCreatorScreen::OpenIngredientNameSelectPanel() {
}

void UBMRecipeCreatorScreen::OpenContainerTypeSelectPanel() {
}

void UBMRecipeCreatorScreen::OpenClearInstructionDialogueBox() {
}

void UBMRecipeCreatorScreen::OpenAmountOverlayWithActiveType() {
}

void UBMRecipeCreatorScreen::OpenAmountOverlay(EBMRecipeInstructionVariable InstructionType) {
}

void UBMRecipeCreatorScreen::MoveUpBinding() {
}

void UBMRecipeCreatorScreen::MoveDownBinding() {
}

void UBMRecipeCreatorScreen::LoadRecipeDataIn(FBMRecipeData Recipe) {
}











TArray<FBMRecipeInstruction> UBMRecipeCreatorScreen::GetRecipeInstructionFromPhrases() {
    return TArray<FBMRecipeInstruction>();
}








FString UBMRecipeCreatorScreen::GetNameForRecipeVariableType(EBMRecipeInstructionVariable Variable) {
    return TEXT("");
}


int32 UBMRecipeCreatorScreen::GetLastIngredientNameIndex() {
    return 0;
}









FString UBMRecipeCreatorScreen::GetDefaultNameForIngredient(int32 ClickableIndex) {
    return TEXT("");
}

EBMRecipeInstructionVariable UBMRecipeCreatorScreen::GetCurrentInstructionVariableType() {
    return EBMRecipeInstructionVariable::IngredientType;
}








FString UBMRecipeCreatorScreen::GetAmountUnitSpecifier(EBMRecipeInstructionVariable VariableType, bool IsLiquid) {
    return TEXT("");
}



void UBMRecipeCreatorScreen::ForceUpdateEditorData() {
}

void UBMRecipeCreatorScreen::ExitGuidedRecipe() {
}


void UBMRecipeCreatorScreen::EditRecipeSteps() {
}

void UBMRecipeCreatorScreen::EditingNewActiveInstructionText(const FText& InText) {
}

void UBMRecipeCreatorScreen::DeleteSelectedInstruction() {
}

void UBMRecipeCreatorScreen::ConfirmRecipeNameChange() {
}

void UBMRecipeCreatorScreen::ConfirmNewAmountForVariable() {
}

void UBMRecipeCreatorScreen::ConfirmInstructionTextChange() {
}

void UBMRecipeCreatorScreen::ConfirmExitGuidedRecipe() {
}

void UBMRecipeCreatorScreen::ConfirmDynamicListSelection() {
}

void UBMRecipeCreatorScreen::ConfirmActivePanel() {
}

void UBMRecipeCreatorScreen::CloseRecipeCreator() {
}

void UBMRecipeCreatorScreen::CloseDialougeBox() {
}

void UBMRecipeCreatorScreen::ClearSummaryInstructions() {
}

void UBMRecipeCreatorScreen::ClearAllRecipeInstructions() {
}

void UBMRecipeCreatorScreen::ChooseExtract() {
}

void UBMRecipeCreatorScreen::ChooseAllGrain() {
}

void UBMRecipeCreatorScreen::ChangeBrewTypeWarning() {
}

void UBMRecipeCreatorScreen::ChangeBrewType() {
}

void UBMRecipeCreatorScreen::CancelActivePanel() {
}


void UBMRecipeCreatorScreen::AddInstructionPhraseToRecipe() {
}

void UBMRecipeCreatorScreen::AddAdditionalIngredientName() {
}

UBMRecipeCreatorScreen::UBMRecipeCreatorScreen() {
    this->AddRecipeInstructionClass = NULL;
    this->BeerStyleButtonBP = NULL;
    this->RecipePhraseWidgetBP = NULL;
    this->PinnedRecipeStepBP = NULL;
    this->AllBeerStylesDataSource = NULL;
    this->RecipeInstructionsDataSource = NULL;
    this->RecipeDataSource = NULL;
    this->AllGrainInstructionsSource = NULL;
    this->ExtractInstructionsSource = NULL;
    this->BeerTypePanel = NULL;
    this->RecipePhrasePanel = NULL;
    this->RecipeNameButton = NULL;
    this->RecipeDescriptionButton = NULL;
    this->BeerStyleButton = NULL;
    this->GuidedRecipeButton = NULL;
    this->AdvancedRecipeButton = NULL;
    this->ExtractButton = NULL;
    this->AllGrainButton = NULL;
    this->AddNewInstructionButton = NULL;
    this->InstructionScreenBeerTypeButton = NULL;
    this->MainNewInstructionButton = NULL;
    this->ClearInstructionsButton = NULL;
    this->DeleteInstructionButton = NULL;
    this->FilterByOwnedButton = NULL;
    this->FilterStyleByOwnedButton = NULL;
    this->RecipeInstructionScrollBox = NULL;
    this->ClearStepsSummary = NULL;
    this->CancelButton = NULL;
    this->ConfirmButton = NULL;
    this->SummaryPanelRecipeNameText = NULL;
    this->EditableTextRecipeDescription = NULL;
    this->SummaryPanelRecipeDescription = NULL;
    this->SummaryPanelBeerStyle = NULL;
    this->InstructionScreenBeerTypeText = NULL;
    this->ExtractDescriptionText = NULL;
    this->AllGrainDescriptionText = NULL;
    this->RecipeCreatorScrollingList = NULL;
    this->ActivePhraseWidget = NULL;
    this->AmountOverlay = NULL;
    this->CurrentGuidedStepPhrase = NULL;
    this->CurrentGuidedStep = -1;
    this->bRemoveAddNewInstructionBinding = false;
    this->GuidedRecipeComplete = false;
    this->RecipePropertiesEdited = EBMRecipePropertiesEditFlags::NONE;
}

