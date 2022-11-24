#include "BMOptionsTab.h"

class UBMOptionsScreen;

void UBMOptionsTab::SetupTab(UBMOptionsScreen* NewOptionScreen, int32 Index, const FText& Name) {
}


void UBMOptionsTab::OptionsScreenSwitchTab(bool IsChecked) {
}


void UBMOptionsTab::BroadcastTabIndex(bool Checked) {
}

UBMOptionsTab::UBMOptionsTab() {
    this->OptionScreen = NULL;
}

