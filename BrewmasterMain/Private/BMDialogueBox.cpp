#include "BMDialogueBox.h"









void UBMDialogueBox::SetIngredientRetrievalAmounts(TArray<FBMIngredientData_ItemQuantityData> Amounts, FName UnitsKey) {
}

void UBMDialogueBox::SetGenericDialogueText(const FText& NewTitleText, const FText& NewMessageText, const FText& NewRecipieText, const FText& NewToggleText, const FText& NewInputText, bool bShowCancelButton) {
}




void UBMDialogueBox::SetAmountToRetrieve(int32 Max, int32 Min) {
}



void UBMDialogueBox::HandleToggle() {
}

void UBMDialogueBox::HandleInput() {
}

void UBMDialogueBox::HandleIncreaseIngredient() {
}

void UBMDialogueBox::HandleEditTextCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UBMDialogueBox::HandleEditTextChanged(const FText& InText) {
}

void UBMDialogueBox::HandleDecreaseIngredient() {
}

void UBMDialogueBox::HandleConfirmButton() {
}

void UBMDialogueBox::HandleBackButton() {
}












bool UBMDialogueBox::GetAudioAssetList() {
    return false;
}

void UBMDialogueBox::GenericIncreaseAmount() {
}

void UBMDialogueBox::GenericDecreaseAmount() {
}



void UBMDialogueBox::CreateSliderDisplayValue(float SliderValue) {
}

void UBMDialogueBox::BindEditTextField() {
}

void UBMDialogueBox::BindConfirmButton() {
}

void UBMDialogueBox::BindBackButton() {
}

UBMDialogueBox::UBMDialogueBox() {
    this->MaxSliderDecimalPositions = 0;
    this->bOverridePopupOpenAudio = false;
    this->bOverridePopupCloseAudio = false;
    this->MaxRetrieveAmount = 0;
    this->MinRetrieveAmount = 0;
    this->Increments = 1;
    this->IsIngredientDialogue = false;
    this->AudioAssetList = NULL;
}

