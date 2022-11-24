#include "BMGameStats.h"

void ABMGameStats::UpdatedSeasonStartMastery() {
}

void ABMGameStats::SetReputationLevel(EBMSponsor Brewery, EBMReputation ReputationLevel) {
}

void ABMGameStats::SetNumberOfBeerTokens(int32 NumberOfTokens) {
}

void ABMGameStats::SetMasteryLevel(EBMMastery NewLevel) {
}

void ABMGameStats::SetInfiniteBeerTokens(bool IsInfinite) {
}

void ABMGameStats::ResetSeasonalTokens(EBMSeasonsEnum CurrentSeason) {
}

void ABMGameStats::RemoveBeerTokens(int32 NumberToRemove) {
}

void ABMGameStats::AddBeerTokens(int32 NumberToAdd) {
}

ABMGameStats::ABMGameStats() {
    this->bGameInitalisedBefore = false;
    this->PlayerMasteryLevel = EBMMastery::Novice;
    this->PlayerMasteryLevelAtBeginingOfSeason = EBMMastery::Novice;
    this->MasteryPoints = 0;
    this->MaximumBrewableBatchSize = EBMRecipeBatchSize::Small;
    this->BeerTokens = 0;
    this->LifetimeBeerTokens = 0;
    this->SeasonalBeerTokens = 0;
    this->bBeerTokensInfinite = false;
    this->NumberOfJobCompleted = 0;
    this->HighestUnTappdRating = 0.00f;
    this->StyleMatchBoost = 5.00f;
    this->BoostContaminationPercent = 1.00f;
    this->ContaminationThreshold = 10.00f;
    this->DefaultBeerQualityText = TEXT("Quality_Unknown");
    this->ProductionBoost = 5.00f;
    this->StartingNoveltyBoost = 20.00f;
    this->BoostMultiplier = 0.00f;
    this->SalesBonusScore = 1.00f;
    this->IBUScore = 1.00f;
    this->MaxFlavourStength = 15.00f;
    this->MaxFlavourAltStength = 20.00f;
    this->MaxFlavourScore = 0.50f;
    this->MaxFlavourAltScore = 0.25f;
    this->MaxRatingScore = 5.00f;
    this->ProductionBoostUnlockedBonus = 3.00f;
    this->BeerRatingConstant = 10.00f;
}

