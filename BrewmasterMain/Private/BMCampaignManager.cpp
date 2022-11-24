#include "BMCampaignManager.h"

void ABMCampaignManager::MergeCompletedNarrativeFromSeason() {
}

void ABMCampaignManager::LevelReturnCall() {
}

TArray<FName> ABMCampaignManager::GetCurrentNarrativeStages() {
    return TArray<FName>();
}

TArray<FBMJobData> ABMCampaignManager::GetCurrentlyGeneratedJobs() {
    return TArray<FBMJobData>();
}

TArray<FName> ABMCampaignManager::GetAllNarrativeData() {
    return TArray<FName>();
}

TArray<FBMJobData> ABMCampaignManager::GetAllJobData() {
    return TArray<FBMJobData>();
}

void ABMCampaignManager::GenerateSeasonTasks(EBMSeasonsEnum CurrentSeason) {
}

void ABMCampaignManager::GenerateNewRecipes() {
}

void ABMCampaignManager::GenerateNewJobs() {
}

void ABMCampaignManager::GenerateCompetition() {
}

void ABMCampaignManager::GenerateAfterLoading() {
}

void ABMCampaignManager::ForceSpawnJob(FName JobID) {
}

void ABMCampaignManager::ForceSpawnCompetition(FName CompetitionName) {
}

void ABMCampaignManager::DebugSpawnNarrativeData(FName NarrativeID, bool bAddToSeen) {
}

void ABMCampaignManager::DebugCompleteNarrativeData(FName NarrativeID) {
}

void ABMCampaignManager::CompleteJob(FName JobID, bool GrantsRewards, bool GrantsBonusRewards, bool bTriggerRewardScreen) {
}

void ABMCampaignManager::CompleteAllJobs(bool GrantsRewards, bool bGiveBonusRewards) {
}

void ABMCampaignManager::CheckDataLoaded() {
}

void ABMCampaignManager::AddAllArticles() {
}

ABMCampaignManager::ABMCampaignManager() {
    this->StartingMastery = EBMMastery::Novice;
    this->StartingMasteryAlreadySet = false;
    this->UnlockAllRecipes = false;
    this->bFirstTimeRunning = true;
    this->CurrentPinnedRecipeBatchSize = ESizeBand::NONE;
    this->CurrentRecipeInstructionStep = 0;
    this->bCompetitionsCanGenerate = true;
    this->bHasCompetitionGenerated = false;
    this->bHasCompetitionBeerSubmitted = false;
    this->CompetitonTakenPartIn = false;
    this->SeenBrewersQuarterlyThisSeason = false;
    this->ConditionsManager = NULL;
    this->TimeController = NULL;
    this->ConditionsManagerClass = NULL;
    this->bShowLevelUpScreen = false;
    this->MasteryToLevelUp = EBMMastery::Novice;
    this->LevelUpPoints = 0;
    this->bShowReputationLevelUpScreen = false;
    this->SponsorToLevelUp = EBMSponsor::HomeHearth;
    this->ReputationToLevelUp = EBMReputation::Unknown;
    this->ReputationLevelUpPoints = 0;
    this->QuarterlyClass = NULL;
    this->SeenQuaterlyCoverThisSeason = false;
    this->NumberOfJobsASeason = 2;
    this->NumberOfRecipesASeason = 2;
    this->NumberOfArticlesASeason = 2;
    this->MasteryPriorityPoints = 1;
    this->UniquePriorityPoints = 4;
    this->SpawnOncePriorityPoints = 5;
    this->NarrativePriorityPoints = 10;
    this->ValidPriorityPoints = 5;
    this->ReputationPriorityPoints = 1;
    this->DifficultyPriorityPoints = 1;
    this->NotUnlockedBeforePriorityPoints = 3;
    this->MatchBeerCategory = 1;
    this->MatchRecipeCategory = 1;
    this->MatchJobCategory = 1;
    this->MatchCompetitionCategory = 1;
    this->MatchIngredientCategory = 1;
    this->bShownDemoCompleteScreen = false;
    this->GameSaveType = EBMGameType::Brewmaster;
    this->bHasOpenedBrewersQuarterly = false;
}

