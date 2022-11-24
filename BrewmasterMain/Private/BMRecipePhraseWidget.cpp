#include "BMRecipePhraseWidget.h"

class UBMClickableText;
class UBMRecipeCreatorScreen;


bool UBMRecipePhraseWidget::ShouldRefreshClickables() {
    return false;
}

void UBMRecipePhraseWidget::SetupPhraseWidget(UBMRecipeCreatorScreen* RecipeCreator, FBMRecipeInstruction Instruction, int32 Index, bool bAllowClickable, bool bMoveable, bool bDeleteable) {
}

void UBMRecipePhraseWidget::SetRefreshClickables(bool Refresh) {
}

void UBMRecipePhraseWidget::SetPhraseAsSelected() {
}

void UBMRecipePhraseWidget::SetPhraseAsActiveInRecipeCreator() {
}

void UBMRecipePhraseWidget::RebuildPhraseTextUsingData(bool Clickable) {
}

void UBMRecipePhraseWidget::MoveInstructionUp() {
}

void UBMRecipePhraseWidget::MoveInstructionDown() {
}








FString UBMRecipePhraseWidget::GetClickableTextAtIndex(int32 TextIndex) {
    return TEXT("");
}

void UBMRecipePhraseWidget::EditClickableText(int32 TextIndex, const FString& NewText) {
}

void UBMRecipePhraseWidget::DeleteInstruction() {
}

void UBMRecipePhraseWidget::ClearPhrase() {
}

void UBMRecipePhraseWidget::AddRegularText(const FString& TextToAdd, bool Bold) {
}

void UBMRecipePhraseWidget::AddNewIngredientName() {
}

void UBMRecipePhraseWidget::AddClickableText(const FString& TextToAdd, EBMRecipeInstructionVariable Variable, bool bClickable) {
}

void UBMRecipePhraseWidget::AddClickableCallbacks(UBMClickableText* ClickableText, EBMRecipeInstructionVariable Variable) {
}

void UBMRecipePhraseWidget::AddClickableButton(const FString& PlusText, EBMRecipeInstructionVariable Variable) {
}

UBMRecipePhraseWidget::UBMRecipePhraseWidget() {
    this->ClickableTextBP = NULL;
    this->BasicRichTextBP = NULL;
    this->AddPhraseBP = NULL;
    this->TextStyle = NULL;
    this->AddPhraseButton = NULL;
    this->HorizontalMax = 15;
    this->CreatorReference = NULL;
    this->PhraseButton = NULL;
    this->DeleteButton = NULL;
    this->MoveUpButton = NULL;
    this->MoveDownButton = NULL;
}

