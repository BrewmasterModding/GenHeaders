#include "BMCalendarOverlay.h"

void UBMCalendarOverlay::TurnOnBlur() {
}

void UBMCalendarOverlay::TurnOffBlur() {
}

void UBMCalendarOverlay::StopTimeSkipping() {
}

void UBMCalendarOverlay::StartTimeSkippingFromControllerAction() {
}

void UBMCalendarOverlay::StartTimeSkipping() {
}

void UBMCalendarOverlay::SingleIncrease() {
}

void UBMCalendarOverlay::SingleDecrease() {
}



void UBMCalendarOverlay::ModulateCalendarBackgroundTint() {
}

void UBMCalendarOverlay::IncreaseDaySlider(float DeltaTime) {
}

















void UBMCalendarOverlay::FadeInWaitingContentBorder() {
}

void UBMCalendarOverlay::FadeInCalendarBorder() {
}

void UBMCalendarOverlay::DecreaseDaySlider(float DeltaTime) {
}

void UBMCalendarOverlay::CloseCalendar() {
}

UBMCalendarOverlay::UBMCalendarOverlay() {
    this->TimeInSecondsToSkipDay = 0.00f;
    this->BlurStrength = 3.00f;
    this->SliderChangeAmount = 10.00f;
    this->SliderMultiplierAmount = 0.10f;
    this->MaxSliderSpeed = 30.00f;
    this->TweeningTime = 1.00f;
    this->ValueChangeOccurance = 0.25f;
    this->LoopBackgroundTintOncePerNumberOfDays = 3;
    this->BackButton = NULL;
    this->RelaxButton = NULL;
    this->StopRelaxingButton = NULL;
    this->DaySlider = NULL;
    this->WaitingDaySlider = NULL;
    this->CalendarBorder = NULL;
    this->WaitingContentBorder = NULL;
    this->TimeController = NULL;
    this->SimController = NULL;
    this->DateText = NULL;
    this->TimeText = NULL;
    this->TargetDayText = NULL;
    this->WaitingDateText = NULL;
    this->WaitingTimeText = NULL;
    this->WaitingTargetDayText = NULL;
    this->TweenContainer = NULL;
    this->TweenManager = NULL;
    this->AudioAssetList = NULL;
    this->TimeAdvancingAudio = NULL;
}

