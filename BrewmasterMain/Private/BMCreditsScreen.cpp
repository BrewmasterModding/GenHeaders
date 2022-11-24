#include "BMCreditsScreen.h"

void UBMCreditsScreen::PopulateCredits() {
}




void UBMCreditsScreen::FinishedCredits() {
}

void UBMCreditsScreen::AnimateCredits() {
}

UBMCreditsScreen::UBMCreditsScreen() {
    this->ScrollSpeedInUMGUnits = 30.00f;
    this->CreditsTable = NULL;
    this->CompanyNameTextStyle = NULL;
    this->CompanyNameTransformPolicy = ETextTransformPolicy::None;
    this->RoleNameTextStyle = NULL;
    this->RoleNameTranformPolicy = ETextTransformPolicy::None;
    this->StaffNameTextStyle = NULL;
    this->StaffNameTransformPolicy = ETextTransformPolicy::None;
}

