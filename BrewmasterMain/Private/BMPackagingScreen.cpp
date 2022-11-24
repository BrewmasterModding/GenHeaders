#include "BMPackagingScreen.h"

class UBMPackagingMenu;

UBMPackagingMenu* UBMPackagingScreen::SwitchToMainMenu() {
    return NULL;
}

void UBMPackagingScreen::OpenMainMenu() {
}

void UBMPackagingScreen::OpenJobOverlay() {
}



UBMPackagingScreen::UBMPackagingScreen() {
    this->LabelMakerExitLevelActor = NULL;
    this->MainMenu = NULL;
    this->SubMenu = NULL;
    this->FinishedPackagingLevelActor = NULL;
    this->ParamPreviewWidgetClass = NULL;
    this->WarningDialogue = NULL;
}

