#include "BMCatalogueItemData.h"

FBMCatalogueItemData::FBMCatalogueItemData() {
    this->ItemType = EBMItemUnlockType::NONE;
    this->BeerTokens = 0;
    this->UnlockedAtStart = false;
    this->StartsInLevel = false;
    this->ExcludeFromFreePlay = false;
    this->Mastery = EBMMastery::Novice;
    this->CanBeBought = false;
    this->ActivityReward = false;
    this->UniqueReward = false;
    this->SeasonsMinimum = 0;
    this->IsInfinite = false;
    this->IsInfiniteInFreePlay = false;
    this->Season = EBMCatalogueSeasonsEnum::ANY;
    this->bExcludedFromDemo = false;
}

