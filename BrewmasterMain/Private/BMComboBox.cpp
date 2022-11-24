#include "BMComboBox.h"



void UBMComboBox::SetSelectedOption(int32 I) {
}

void UBMComboBox::SelectStringOption(const FString& SelectedOption) {
}

void UBMComboBox::RefreshOptions() {
}

void UBMComboBox::OpenComboBox() {
}

FString UBMComboBox::GetSelectedOption() {
    return TEXT("");
}

int32 UBMComboBox::GetSelectedIndex() {
    return 0;
}



void UBMComboBox::DeleteOption(const FString& Option) {
}


void UBMComboBox::ClearAllOptions() {
}

void UBMComboBox::AddOptionWithoutRebuild(const FString& Option) {
}

void UBMComboBox::AddOption(const FString& Option) {
}

UBMComboBox::UBMComboBox() {
    this->ButtonClass = NULL;
    this->OptionsOpen = false;
}

