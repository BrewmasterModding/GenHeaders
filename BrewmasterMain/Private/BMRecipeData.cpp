#include "BMRecipeData.h"

FBMRecipeData::FBMRecipeData() {
    this->BatchSize = EBMRecipeBatchSize::Small;
    this->AllGrain = false;
    this->Difficulty = EBMRecipeDifficulty::Easy;
    this->Mastery = 0;
    this->ForceSpawnIfNarrative = false;
    this->ForceSpawnIfValid = false;
    this->SeasonsMinimum = 0;
    this->Weighting = 0;
    this->ABV = 0.00f;
    this->IBU = 0.00f;
    this->SRM = 0.00f;
    this->Carbonation = 0.00f;
    this->OriginalGravity = 0.00f;
    this->FinalGravity = 0.00f;
    this->Clarity = 0.00f;
    this->Body = 0.00f;
}

