#include "BMGameInstance.h"

class UWorld;
class UBMGameSettings;

bool UBMGameInstance::SaveRecipeToFile(const FBMRecipeData& RecipeData, const FString& SlotName) {
    return false;
}

UBMGameSettings* UBMGameInstance::GetGameSettings() {
    return NULL;
}

FBMBuildDetails UBMGameInstance::GetBuildDetails() {
    return FBMBuildDetails{};
}

void UBMGameInstance::EndLoadingScreen(UWorld* InLoadedWorld) {
}

bool UBMGameInstance::DeleteRecipe(const FString& SlotName) {
    return false;
}

void UBMGameInstance::BeginLoadingScreen(const FString& MapName) {
}

void UBMGameInstance::AsyncSaveRecipeToFile(const FBMRecipeData& RecipeData, const FString& SlotName) {
}

void UBMGameInstance::AsyncSaveDataFromFile(const FString& CampaignName) {
}

void UBMGameInstance::AsyncSaveData(const FString& CampaignName, int32 CampaignSlot) {
}

void UBMGameInstance::AsyncLoadDataFromFile(const FString& CampaignName) {
}

void UBMGameInstance::AsyncLoadData(const FString& CampaignName, int32 CampaignSlot) {
}

UBMGameInstance::UBMGameInstance() {
    this->bIsSaving = false;
    this->bIsLoading = false;
    this->CurrentMasteryLevel = EBMMastery::Novice;
    this->CurrentMasteryPoints = 0;
    this->CurrentGameType = EBMGameType::Brewmaster;
    this->LastInputWasController = false;
    this->PackagedBeerToSet = false;
    this->JobDataToUpdate = false;
    this->CompetitionAlreadySubmitted = false;
    this->CompetitionGenerated = false;
    this->CompetitionDataToUpdate = false;
    this->DemoScreenSeen = false;
    this->ForceSimulateXbox = false;
    this->ForceSimulatePlaystation = false;
    this->ForceSimulateSwitch = false;
    this->ForceSimulateXBoxXSX = false;
    this->ForceSimulateXboxOneGDK = false;
    this->ForceSimulatePS4 = false;
    this->ForceSimulatePS5 = false;
    this->bShouldSkipTutorial = true;
    this->bShowPackagedBeers = false;
    this->bTriggerAutosave = false;
    this->bApplicationIsPaused = false;
    this->ShouldDisplayExternalUIWhenPossible = false;
    this->AudioAssetList = CreateDefaultSubobject<UBP_AudioAssetList_C>(TEXT("AudioAssetList"));
    this->GameStats = NULL;
    this->GameSettings = NULL;
    this->BMUserIndex = 0;
    this->bBuildIsPublic = true;
    this->bIsBuild = false;
    this->BuildType = EBMBuildType::Release;
    this->VersionMajor = 1;
    this->VersionMinor = 0;
    this->VersionBuildNum = 6;
    this->VersionRevision = 5;
    this->SaveVersion = 4;
}

