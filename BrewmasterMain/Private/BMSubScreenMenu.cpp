#include "BMSubScreenMenu.h"

class UBMUserWidget;

void UBMSubScreenMenu::SwitchToMainMenu() {
}

void UBMSubScreenMenu::SwitchToContent(UBMUserWidget* InWidget) {
}

void UBMSubScreenMenu::ShowLabelMakerEditMenu() {
}


void UBMSubScreenMenu::OnBackButtonPressed() {
}

void UBMSubScreenMenu::GoToParamSubMenu(FBMEditableParamID inParamID) {
}







void UBMSubScreenMenu::ClearLabelAndReturnToMenu() {
}

UBMSubScreenMenu::UBMSubScreenMenu() {
    this->ResponseButton1 = NULL;
    this->ResponseButton2 = NULL;
    this->WarningDialogue = NULL;
}

