#include "BMArticleData.h"

FBMArticleData::FBMArticleData() {
    this->ArticleType = EBMArticleType::None;
    this->BeerCategory = EBMBeerCategory::NONE;
    this->IngredientSubCategory = EBMIngredientSubCategory::NONE;
    this->MasteryLevel = EBMMastery::Novice;
    this->UnlockedAtStart = false;
    this->bForceSpawnIfNarrative = false;
    this->bForceSpawnIfValid = false;
    this->SeasonMin = 0;
    this->Weighting = 0;
    this->bExcludeFromDemo = false;
}

