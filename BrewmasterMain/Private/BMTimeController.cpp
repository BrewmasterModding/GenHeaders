#include "BMTimeController.h"

void ABMTimeController::UpdateLights(float DeltaTime) {
}

void ABMTimeController::UpdateLightInterpolationSpeed(float DeltaTime) {
}

void ABMTimeController::SetTimeOfDay(float a_timeSet) {
}

void ABMTimeController::SetNumberOfSeasonsPassed(int32 NumberPassed) {
}

void ABMTimeController::SetNewSeason(EBMSeasonsEnum Season) {
}

void ABMTimeController::SetIsTimeSkippingWithCalendar(bool bInCalendarMode) {
}

void ABMTimeController::RegisterWithSimController() {
}

float ABMTimeController::GetYear() {
    return 0.0f;
}

float ABMTimeController::GetTimeOfDay() {
    return 0.0f;
}

EBMSeasonsEnum ABMTimeController::GetSeason() {
    return EBMSeasonsEnum::Spring;
}

FString ABMTimeController::GetOrdinalDay() {
    return TEXT("");
}

float ABMTimeController::GetNumDaysInAMonth(int32 Month) {
    return 0.0f;
}

FString ABMTimeController::GetMonthName(int32 Month) const {
    return TEXT("");
}

float ABMTimeController::GetMonth() {
    return 0.0f;
}

float ABMTimeController::GetInterpolationSpeed() {
    return 0.0f;
}

FString ABMTimeController::GetDayOfTheWeekName() {
    return TEXT("");
}

float ABMTimeController::GetDayOfTheWeek() {
    return 0.0f;
}

float ABMTimeController::GetDayOfTheMonth() const {
    return 0.0f;
}

float ABMTimeController::GetDay() {
    return 0.0f;
}

float ABMTimeController::GetCurrentTimeInDays() {
    return 0.0f;
}

FString ABMTimeController::GetCurrentTimeAs24HourString(bool ShortVersion) {
    return TEXT("");
}

FString ABMTimeController::GetCurrentMonthName() const {
    return TEXT("");
}

void ABMTimeController::ConvertTimeTo24H() {
}

bool ABMTimeController::CheckYearIncrease() {
    return false;
}

bool ABMTimeController::CheckMonthIncrease() {
    return false;
}

ABMTimeController::ABMTimeController() {
    this->PostProcessVolume = NULL;
    this->fPostProcessExposure = NULL;
    this->PostProcessTint = NULL;
    this->bManualTimeControl = false;
    this->ManualTimeSet = 0.00f;
    this->bIsTimeSkippingWithCalendar = false;
    this->CurrentInterpolationSpeed = 1000.00f;
    this->DefaultLightInterpolationSpeed = 1000.00f;
    this->CalendarTimeSkippingInterpolationSpeed = 1.00f;
    this->EnterCalendarTimeSkipInterpolationSpeed = 1.00f;
    this->ExitCalendarInterpolationSpeed = 1000.00f;
    this->TimeOfDay = 0.00f;
    this->CurrentDays = 1.00f;
    this->NumberOfMonths = 1.00f;
    this->CurrentYear = 1.00f;
    this->NumberOfSeasonsPassed = 1;
    this->SetInitalSeason = false;
    this->SeasonsIncreased = 0;
    this->CurrentSeason = EBMSeasonsEnum::Spring;
    this->SimulationStartTimeOfDay = 600.00f;
    this->DayOfTheWeekNames.AddDefaulted(7);
    this->Ordinals.AddDefaulted(28);
    this->MonthNames.AddDefaulted(12);
    this->DaysInMonths.AddDefaulted(12);
}

