#include "BMStopWatchWidget.h"

void UBMStopWatchWidget::ToggleStopWatch() {
}


void UBMStopWatchWidget::SpeedUpTime() {
}

void UBMStopWatchWidget::SlowDownTime() {
}

void UBMStopWatchWidget::SetToggleButton() {
}





void UBMStopWatchWidget::SetBuildModeStopWatch(bool bBuildModeOn) {
}

void UBMStopWatchWidget::SetBindings() {
}

void UBMStopWatchWidget::Set3DModelVisibility(bool IsVisible) {
}

void UBMStopWatchWidget::PauseTime() {
}

void UBMStopWatchWidget::NativeConstruct() {
}

void UBMStopWatchWidget::HighlightCurrentTimeSkipSpeed(bool InIsPaused) {
}








bool UBMStopWatchWidget::GetAudioAssetList() {
    return false;
}

void UBMStopWatchWidget::EnableTimeSkipping() {
}

void UBMStopWatchWidget::DisableTimeSkipping() {
}

void UBMStopWatchWidget::CreateTimeString(bool ShortString) {
}

FText UBMStopWatchWidget::CreateSpeedText(int32 TimeSkipIndex) {
    return FText::GetEmpty();
}

void UBMStopWatchWidget::CreateSpeedString() {
}

void UBMStopWatchWidget::CreateSeasonString() {
}

void UBMStopWatchWidget::CreateDayString() {
}

UBMStopWatchWidget::UBMStopWatchWidget() {
    this->TimeSkipSpeedToggleClass = NULL;
    this->PausePrompt = NULL;
    this->SimController = NULL;
    this->AudioAssetList = NULL;
}

