#include "BMCompetitionData.h"

FBMCompetitionData::FBMCompetitionData() {
    this->BeerCategory = EBMBeerCategory::NONE;
    this->Sponsor = EBMSponsor::HomeHearth;
    this->MasteryLevel = EBMMastery::Novice;
    this->DifficultyLevel = EBMRecipeDifficulty::Easy;
    this->PointsPerKeyStatPercent = 0.00f;
    this->PointsPerJudgesPreference = 0;
    this->ContaminationThreshold = 0.00f;
    this->ContaminationPointsPerPercent = 0;
    this->IgnoreCompetition = false;
}

