#include "BMSaveLoadWidget.h"

class USaveGame;


void UBMSaveLoadWidget::SetSaveRename(const FText& InText, TEnumAsByte<ETextCommit::Type> InCommitType) {
}

void UBMSaveLoadWidget::SetNewSaveName(const FText& InText) {
}

void UBMSaveLoadWidget::SetIsSaveScreen(bool Save) {
}

void UBMSaveLoadWidget::SaveRenaming(const FText& InText) {
}

void UBMSaveLoadWidget::SaveProcessFinished(bool bSaveOk) {
}

void UBMSaveLoadWidget::SaveGameFromAction() {
}

void UBMSaveLoadWidget::SaveGame() {
}

void UBMSaveLoadWidget::SaveFailed() {
}

void UBMSaveLoadWidget::SaveComplete() {
}

void UBMSaveLoadWidget::RenameSave() {
}

void UBMSaveLoadWidget::LoadSlotData(const FString& Name, const int32 PlayerId, USaveGame* NewSaveGame) {
}

void UBMSaveLoadWidget::LoadSaveFromAction() {
}

void UBMSaveLoadWidget::LoadSaveFileData() {
}

void UBMSaveLoadWidget::LoadSave() {
}

void UBMSaveLoadWidget::LoadedSaveDetails(const FString& Name, const int32 PlayerId, USaveGame* NewSaveGame) {
}

void UBMSaveLoadWidget::InitaliseButtons() {
}








void UBMSaveLoadWidget::DeleteSave() {
}

void UBMSaveLoadWidget::CreateSaveLoadSlots() {
}

void UBMSaveLoadWidget::CreateNewSave() {
}

void UBMSaveLoadWidget::ConfirmNameAndSaveGame() {
}

void UBMSaveLoadWidget::ConfirmDeleteSave() {
}

void UBMSaveLoadWidget::CloseOverlayAndRefreshScreen() {
}

void UBMSaveLoadWidget::CheckAndConfirmNameAndSaveGame() {
}

void UBMSaveLoadWidget::CancelRenaming() {
}

void UBMSaveLoadWidget::BackToMenu() {
}

void UBMSaveLoadWidget::ApplySaveRename() {
}

UBMSaveLoadWidget::UBMSaveLoadWidget() {
    this->SaveSlotClass = NULL;
    this->BackButton = NULL;
    this->LoadButton = NULL;
    this->SaveButton = NULL;
    this->RenameButton = NULL;
    this->DeleteButton = NULL;
    this->SaveNameTextEdit = NULL;
    this->bCurrentlySaving = false;
}

