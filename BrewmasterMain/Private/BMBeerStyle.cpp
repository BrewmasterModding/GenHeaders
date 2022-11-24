#include "BMBeerStyle.h"

FBMBeerStyle::FBMBeerStyle() {
    this->CategoryID = EBMBeerCategory::NONE;
    this->StyleDifficulty = EBMRecipeDifficulty::Easy;
    this->ClarityMin = 0;
    this->ClarityMax = 0;
    this->BodyMin = 0;
    this->BodyMax = 0;
    this->ProteinMin = 0;
    this->ProteinMax = 0;
    this->GlassType = EBMBeerGlassType::NONE;
    this->AlternateGlassType = EBMBeerGlassType::NONE;
    this->BottleType = EBMBottleType::NONE;
    this->BottleColour = EBMBottleColour::Brown;
}

