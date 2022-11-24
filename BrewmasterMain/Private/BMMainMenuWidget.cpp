#include "BMMainMenuWidget.h"


void UBMMainMenuWidget::ToggleTutorial() {
}


void UBMMainMenuWidget::SetSocialMediaCarouselToIndex(int32 Index) {
}

void UBMMainMenuWidget::SetSaveSlotName(const FText& InText, TEnumAsByte<ETextCommit::Type> InCommitType) {
}

void UBMMainMenuWidget::SetSaveName() {
}


bool UBMMainMenuWidget::SetContinueSaveIndex() {
    return false;
}

void UBMMainMenuWidget::OpenSettings() {
}

void UBMMainMenuWidget::OpenNewBrewMasterLevel() {
}

void UBMMainMenuWidget::OpenLoadMenu() {
}

void UBMMainMenuWidget::OpenLastGame() {
}

void UBMMainMenuWidget::OpenConfirmExitDialouge() {
}

void UBMMainMenuWidget::IncreaseSocialMediaCarousel() {
}




















void UBMMainMenuWidget::ExitGame() {
}

void UBMMainMenuWidget::DecreaseSocialMediaCarousel() {
}

void UBMMainMenuWidget::CreditsScreen() {
}

void UBMMainMenuWidget::CreativeModeButtonUnhovered() {
}

void UBMMainMenuWidget::CreativeModeButtonHovered() {
}

void UBMMainMenuWidget::CreativeModeButtonClicked() {
}

void UBMMainMenuWidget::CreateNewGame() {
}

void UBMMainMenuWidget::ContinueButtonUnhovered() {
}

void UBMMainMenuWidget::ContinueButtonHovered() {
}

void UBMMainMenuWidget::BrewMasterButtonUnhovered() {
}

void UBMMainMenuWidget::BrewMasterButtonHovered() {
}

void UBMMainMenuWidget::BrewMasterButtonClicked() {
}

void UBMMainMenuWidget::BackToMainMenu() {
}

UBMMainMenuWidget::UBMMainMenuWidget() {
    this->ContinueButton = NULL;
    this->NewGameButton = NULL;
    this->LoadButton = NULL;
    this->OptionsButton = NULL;
    this->ExitButton = NULL;
    this->BrewMasterModeButton = NULL;
    this->CreativeModeButton = NULL;
    this->BackButton = NULL;
    this->SaveSlot = NULL;
    this->CreditsMenuButton = NULL;
    this->ButtonClass = NULL;
    this->SkipTutorial = false;
    this->AccountWidget = NULL;
}

