#include "BMContextualTipsData.h"

FBMContextualTipsData::FBMContextualTipsData() {
    this->Advanced = false;
    this->OnlyBrewmasterMode = false;
    this->DisplayLimit = 0;
    this->IgnoreCooldown = false;
    this->Priority = 0;
    this->MasteryMinimum = EBMMastery::Novice;
    this->MasteryMaximum = EBMMastery::Novice;
    this->SeasonsMinimum = 0;
    this->SeasonsMaximum = 0;
    this->DisableDuringTutorial = false;
    this->IgnoreTimerWhenValid = false;
}

