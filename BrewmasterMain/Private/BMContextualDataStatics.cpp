#include "BMContextualDataStatics.h"

class UBMUserWidget;
class UBMGameInstance;
class UTexture2D;
class UObject;

FText UBMContextualDataStatics::GetContextualUntappdRating(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualTotalCost(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

int32 UBMContextualDataStatics::GetContextualTimeAdvance(UBMUserWidget* ContextualWidget) {
    return 0;
}

FString UBMContextualDataStatics::GetContextualStyleDescriptionString(EBMStyleStatType Stat) {
    return TEXT("");
}

void UBMContextualDataStatics::GetContextualStatInfo(UBMUserWidget* ContextualWidget, UBMGameInstance* GameInstance, TMap<FString, FText>& outTypeToStatName, TMap<FString, FText>& outTypeToStatValue, TMap<FString, FText>& outTypeToStatDescription) {
}

FBMRewardData UBMContextualDataStatics::GetContextualSilverCompetitionRewardData(UBMUserWidget* ContextualWidget) {
    return FBMRewardData{};
}

FText UBMContextualDataStatics::GetContextualSeasonalBeerTokens(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

void UBMContextualDataStatics::GetContextualResourceWidgetItem(UBMUserWidget* ContextualWidget, EBMResource& outResourceItem, FName& outItemName, FName& ItemDescription, bool& ShowCurrentAmountText, int32& Amount, UTexture2D*& Texture) {
}

FText UBMContextualDataStatics::GetContextualRecipeStatTitle(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

bool UBMContextualDataStatics::GetContextualRecipeStatShouldShow(UBMUserWidget* ContextualWidget) {
    return false;
}

FText UBMContextualDataStatics::GetContextualRecipeStatDescription(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualRecipeFlavours(UBMUserWidget* ContextualWidget, bool& ListContainsFlavors) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualRecipeDescription(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FString UBMContextualDataStatics::GetContextualPreformanceBonus(UBMUserWidget* ContextualWidget) {
    return TEXT("");
}

FString UBMContextualDataStatics::GetContextualPinnedRecipeString(UBMUserWidget* ContextualWidget, EBMLiquidStatType Stat) {
    return TEXT("");
}

FText UBMContextualDataStatics::GetContextualPinnedRecipeName(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualPercentageIncrease(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

void UBMContextualDataStatics::GetContextualPackagingItemTitleAndDescription(UBMUserWidget* ContextualWidget, FText& Title, FText& Description, bool& ShouldShowTooltip) {
}

FBMPackagedBeerData UBMContextualDataStatics::GetContextualPackagedBeerData(UBMUserWidget* ContextualWidget) {
    return FBMPackagedBeerData{};
}

FText UBMContextualDataStatics::GetContextualNextReputationReward(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualNextReputationMeaning(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

int32 UBMContextualDataStatics::GetContextualNextMasteryPoints(UBMUserWidget* ContextualWidget) {
    return 0;
}

FText UBMContextualDataStatics::GetContextualNextMastery(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualNarrativeProgress(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualMasteryLevelUpReward(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

float UBMContextualDataStatics::GetContextualMasteryLevelProgress(UBMUserWidget* ContextualWidget) {
    return 0.0f;
}

FString UBMContextualDataStatics::GetContextualLiquidString(EBMLiquidStatType Stat) {
    return TEXT("");
}

FString UBMContextualDataStatics::GetContextualLiquidStatString(EBMLiquidStatType Stat, float Value, int32 Decimals) {
    return TEXT("");
}

FString UBMContextualDataStatics::GetContextualLiquidDescriptionString(EBMLiquidStatType Stat) {
    return TEXT("");
}

FText UBMContextualDataStatics::GetContextualLifetimeBeerTokens(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

void UBMContextualDataStatics::GetContextualLabelMakerCategoryTitleAndDescription(UBMUserWidget* ContextualWidget, FText& Title, FText& Description) {
}

TMap<FString, FText> UBMContextualDataStatics::GetContextualItemStats(UBMUserWidget* ContextualWidget) {
    return TMap<FString, FText>();
}

FText UBMContextualDataStatics::GetContextualItemStatName(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualItemStatDescription(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualItemName(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

bool UBMContextualDataStatics::GetContextualItemIsIngredient(UBMUserWidget* ContextualWidget) {
    return false;
}

FText UBMContextualDataStatics::GetContextualItemDescription(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualItemCategoryDescription(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualItemCategory(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualItemAmount(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

bool UBMContextualDataStatics::GetContextualIsBeerStyteCompleteMatch(UBMUserWidget* ContextualWidget) {
    return false;
}

bool UBMContextualDataStatics::GetContextualGamepadOverlayPressButtonAllowed(UBMUserWidget* ContextualWidget) {
    return false;
}

void UBMContextualDataStatics::GetContextualDifficultyTitleAndDescription(UBMUserWidget* ContextualWidget, FText& DifficultyTitle, FText& DifficultyDescription) {
}

FText UBMContextualDataStatics::GetContextualCurrentTastingBeerVolume(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

void UBMContextualDataStatics::GetContextualCurrentTastingBeerStats(UBMUserWidget* ContextualWidget, EBMStyleStatType StatType, FText& outStatName, FText& outStatValue, FText& outStatDescription) {
}

FText UBMContextualDataStatics::GetContextualCurrentReputationMeaning(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

int32 UBMContextualDataStatics::GetContextualCurrentMasteryPoints(UBMUserWidget* ContextualWidget) {
    return 0;
}

FText UBMContextualDataStatics::GetContextualCurrentMastery(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FString UBMContextualDataStatics::GetContextualCurrentJobStat(EBMLiquidStatType Stat, TArray<FBMObjective>& Objectives) {
    return TEXT("");
}

FText UBMContextualDataStatics::GetContextualCurrentBeerTokens(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualCompletedNarratives(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualCompetitionRequirements(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualCompetitionJudgesPreferences(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FBMRewardData UBMContextualDataStatics::GetContextualBronzeCompetitionRewardData(UBMUserWidget* ContextualWidget) {
    return FBMRewardData{};
}

bool UBMContextualDataStatics::GetContextualBreweryShouldShow(UBMUserWidget* ContextualWidget) {
    return false;
}

float UBMContextualDataStatics::GetContextualBreweryReputationProgress(UBMUserWidget* ContextualWidget) {
    return 0.0f;
}

FText UBMContextualDataStatics::GetContextualBreweryReputation(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

float UBMContextualDataStatics::GetContextualBreweryNextReputationValue(UBMUserWidget* ContextualWidget) {
    return 0.0f;
}

FText UBMContextualDataStatics::GetContextualBreweryNextReputation(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualBreweryName(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

int32 UBMContextualDataStatics::GetContextualBreweryJobsCompleted(UBMUserWidget* ContextualWidget) {
    return 0;
}

FSlateBrush UBMContextualDataStatics::GetContextualBreweryIcon(UBMUserWidget* ContextualWidget) {
    return FSlateBrush{};
}

FText UBMContextualDataStatics::GetContextualBreweryDescription(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

float UBMContextualDataStatics::GetContextualBreweryCurrentReputationValue(UBMUserWidget* ContextualWidget) {
    return 0.0f;
}

int32 UBMContextualDataStatics::GetContextualBreweryCompetitionsCompleted(UBMUserWidget* ContextualWidget) {
    return 0;
}

FString UBMContextualDataStatics::GetContextualBeerStyleStat(UBMUserWidget* ContextualWidget, EBMStyleStatType Stat, const FBMBeerProperties& BeerProperties) {
    return TEXT("");
}

void UBMContextualDataStatics::GetContextualBeerStyleResults(UBMUserWidget* ContextualWidget, TArray<FString>& outMatchingStats, TArray<FString>& outNonMatchingStats) {
}

FText UBMContextualDataStatics::GetContextualBeerStyleName(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualBeerStyleDescription(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FString UBMContextualDataStatics::GetContextualBeerStat(EBMLiquidStatType Stat, const FBMBeerProperties& BeerProperties) {
    return TEXT("");
}

FBMBeerProperties UBMContextualDataStatics::GetContextualBeerProperties(UBMUserWidget* ContextualWidget) {
    return FBMBeerProperties{};
}

FText UBMContextualDataStatics::GetContextualBeerName(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FSlateBrush UBMContextualDataStatics::GetContextualBeerLabel(UBMUserWidget* ContextualWidget) {
    return FSlateBrush{};
}

FText UBMContextualDataStatics::GetContextualBatchSizeDesciption(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualBatchSize(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

EBMLiquidStatType UBMContextualDataStatics::GetContextualBarStatType(UBMUserWidget* ContextualWidget) {
    return EBMLiquidStatType::NONE;
}

FText UBMContextualDataStatics::GetContextualAssignedJobName(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualAssignedCompetitionName(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualActivityReward(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FText UBMContextualDataStatics::GetContextualActivityBrewery(UBMUserWidget* ContextualWidget) {
    return FText::GetEmpty();
}

FString UBMContextualDataStatics::CreateRewardString(UObject* WorldContextObject, FBMRewardData RewardData) {
    return TEXT("");
}

EBMConditionsStats UBMContextualDataStatics::ConvertLiquidStatToCondition(EBMLiquidStatType LiquidStatType) {
    return EBMConditionsStats::None;
}

UBMContextualDataStatics::UBMContextualDataStatics() {
}

