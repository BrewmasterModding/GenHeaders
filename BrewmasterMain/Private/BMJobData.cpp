#include "BMJobData.h"

FBMJobData::FBMJobData() {
    this->JobType = EBMJobType::Unique;
    this->BeerCategory = EBMBeerCategory::NONE;
    this->Sponsor = EBMSponsor::HomeHearth;
    this->Difficulty = EBMRecipeDifficulty::Easy;
    this->MasteryLevel = EBMMastery::Novice;
    this->BatchSize = EBMRecipeBatchSize::Small;
    this->bMustOwnEquipment = false;
    this->bMustOwnIngredients = false;
    this->bAllGrain = false;
    this->bForceSpawnIfNarrative = false;
    this->bForceSpawnIfValid = false;
    this->bForceSpawnOnce = false;
    this->Weighting = 0;
    this->SeasonsMin = 0;
    this->SeasonsMax = 0;
    this->IgnoreJob = false;
}

