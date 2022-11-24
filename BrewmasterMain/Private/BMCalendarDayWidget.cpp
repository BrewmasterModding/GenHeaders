#include "BMCalendarDayWidget.h"

class UBMCalendarScreen;

void UBMCalendarDayWidget::UpdateCalendarPressed() {
}

void UBMCalendarDayWidget::UpdateCalendarHovered() {
}

void UBMCalendarDayWidget::SetPressedState(bool Pressed) {
}

void UBMCalendarDayWidget::SetCalendarScreen(UBMCalendarScreen* Screen, int32 Day) {
}


void UBMCalendarDayWidget::RemoveCalendarHover() {
}



void UBMCalendarDayWidget::DisplayImageType(EBMCalendarImageType Type) {
}

UBMCalendarDayWidget::UBMCalendarDayWidget() {
    this->CalendarScreen = NULL;
    this->DayNumber = 0;
    this->StrikeImage = NULL;
}

