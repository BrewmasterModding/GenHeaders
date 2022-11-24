#include "BMSaveGame.h"

UBMSaveGame::UBMSaveGame() {
    this->SaveVersion = 0;
    this->UserIndex = 0;
    this->CampaignSlot = 0;
    this->LocalisePinnedRecipe = true;
    this->Season = EBMSeasonsEnum::Spring;
    this->Day = 0;
    this->Year = 0;
    this->MasteryLevel = 0;
    this->BeerTokens = 0;
    this->GameType = EBMGameType::Brewmaster;
}

