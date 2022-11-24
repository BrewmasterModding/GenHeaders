#include "BMCalendarScreen.h"

void UBMCalendarScreen::TurnOnBlur() {
}

void UBMCalendarScreen::TurnOffBlur() {
}

void UBMCalendarScreen::StopTimeSkipping() {
}

void UBMCalendarScreen::SkipTimeToSelectedDay() {
}






void UBMCalendarScreen::CloseCalendar() {
}

UBMCalendarScreen::UBMCalendarScreen() {
    this->BackButton = NULL;
    this->TimeCompressionButton = NULL;
    this->CalendarDayWidgetBP = NULL;
    this->CalendarSizeBox = NULL;
    this->TimeToSkipPerDay = 4.00f;
    this->BlurStrength = 3.00f;
    this->TimeController = NULL;
    this->SimController = NULL;
    this->CurrentDateText = NULL;
    this->CurrentTime = NULL;
    this->ExternalDateText = NULL;
    this->ExternalTime = NULL;
    this->TweenContainer = NULL;
    this->TweenManager = NULL;
    this->StopButton = NULL;
}

