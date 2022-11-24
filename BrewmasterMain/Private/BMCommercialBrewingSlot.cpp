#include "BMCommercialBrewingSlot.h"

FBMCommercialBrewingSlot::FBMCommercialBrewingSlot() {
    this->SlotFilled = false;
    this->StartingSeason = EBMSeasonsEnum::Spring;
    this->StartingSeasonNumber = 0;
    this->MasteryBoost = 0.00f;
    this->StyleMatchBoost = 0.00f;
    this->NoveltyBoost = 0.00f;
    this->ContaiminationBoost = 0.00f;
    this->UnlockedProductionBoost = false;
    this->ProductionBoost = 0.00f;
    this->UntappdScore = 0.00f;
    this->UntappdReviews = 0;
}

