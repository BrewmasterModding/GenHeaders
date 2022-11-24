#pragma once
#include "CoreMinimal.h"
#include "EBMLiquidStatType.h"
#include "EBMStyleStatType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BMRewardData.h"
#include "EBMResource.h"
#include "BMPackagedBeerData.h"
#include "BMObjective.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMBeerProperties.h"
#include "EBMConditionsStats.h"
#include "BMContextualDataStatics.generated.h"

class UBMUserWidget;
class UBMGameInstance;
class UTexture2D;
class UObject;

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMContextualDataStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBMContextualDataStatics();
    UFUNCTION(BlueprintPure)
    static FText GetContextualUntappdRating(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualTotalCost(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static int32 GetContextualTimeAdvance(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FString GetContextualStyleDescriptionString(EBMStyleStatType Stat);
    
    UFUNCTION(BlueprintPure)
    static void GetContextualStatInfo(UBMUserWidget* ContextualWidget, UBMGameInstance* GameInstance, TMap<FString, FText>& outTypeToStatName, TMap<FString, FText>& outTypeToStatValue, TMap<FString, FText>& outTypeToStatDescription);
    
    UFUNCTION(BlueprintPure)
    static FBMRewardData GetContextualSilverCompetitionRewardData(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualSeasonalBeerTokens(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static void GetContextualResourceWidgetItem(UBMUserWidget* ContextualWidget, EBMResource& outResourceItem, FName& outItemName, FName& ItemDescription, bool& ShowCurrentAmountText, int32& Amount, UTexture2D*& Texture);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualRecipeStatTitle(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static bool GetContextualRecipeStatShouldShow(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualRecipeStatDescription(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualRecipeFlavours(UBMUserWidget* ContextualWidget, bool& ListContainsFlavors);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualRecipeDescription(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FString GetContextualPreformanceBonus(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FString GetContextualPinnedRecipeString(UBMUserWidget* ContextualWidget, EBMLiquidStatType Stat);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualPinnedRecipeName(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualPercentageIncrease(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static void GetContextualPackagingItemTitleAndDescription(UBMUserWidget* ContextualWidget, FText& Title, FText& Description, bool& ShouldShowTooltip);
    
    UFUNCTION(BlueprintPure)
    static FBMPackagedBeerData GetContextualPackagedBeerData(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualNextReputationReward(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualNextReputationMeaning(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static int32 GetContextualNextMasteryPoints(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualNextMastery(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualNarrativeProgress(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualMasteryLevelUpReward(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static float GetContextualMasteryLevelProgress(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FString GetContextualLiquidString(EBMLiquidStatType Stat);
    
    UFUNCTION(BlueprintPure)
    static FString GetContextualLiquidStatString(EBMLiquidStatType Stat, float Value, int32 Decimals);
    
    UFUNCTION(BlueprintPure)
    static FString GetContextualLiquidDescriptionString(EBMLiquidStatType Stat);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualLifetimeBeerTokens(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static void GetContextualLabelMakerCategoryTitleAndDescription(UBMUserWidget* ContextualWidget, FText& Title, FText& Description);
    
    UFUNCTION(BlueprintPure)
    static TMap<FString, FText> GetContextualItemStats(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualItemStatName(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualItemStatDescription(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualItemName(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static bool GetContextualItemIsIngredient(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualItemDescription(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualItemCategoryDescription(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualItemCategory(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualItemAmount(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static bool GetContextualIsBeerStyteCompleteMatch(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static bool GetContextualGamepadOverlayPressButtonAllowed(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static void GetContextualDifficultyTitleAndDescription(UBMUserWidget* ContextualWidget, FText& DifficultyTitle, FText& DifficultyDescription);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualCurrentTastingBeerVolume(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static void GetContextualCurrentTastingBeerStats(UBMUserWidget* ContextualWidget, EBMStyleStatType StatType, FText& outStatName, FText& outStatValue, FText& outStatDescription);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualCurrentReputationMeaning(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static int32 GetContextualCurrentMasteryPoints(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualCurrentMastery(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FString GetContextualCurrentJobStat(EBMLiquidStatType Stat, TArray<FBMObjective>& Objectives);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualCurrentBeerTokens(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualCompletedNarratives(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualCompetitionRequirements(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualCompetitionJudgesPreferences(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FBMRewardData GetContextualBronzeCompetitionRewardData(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static bool GetContextualBreweryShouldShow(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static float GetContextualBreweryReputationProgress(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualBreweryReputation(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static float GetContextualBreweryNextReputationValue(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualBreweryNextReputation(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualBreweryName(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static int32 GetContextualBreweryJobsCompleted(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FSlateBrush GetContextualBreweryIcon(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualBreweryDescription(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static float GetContextualBreweryCurrentReputationValue(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static int32 GetContextualBreweryCompetitionsCompleted(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FString GetContextualBeerStyleStat(UBMUserWidget* ContextualWidget, EBMStyleStatType Stat, const FBMBeerProperties& BeerProperties);
    
    UFUNCTION(BlueprintPure)
    static void GetContextualBeerStyleResults(UBMUserWidget* ContextualWidget, TArray<FString>& outMatchingStats, TArray<FString>& outNonMatchingStats);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualBeerStyleName(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualBeerStyleDescription(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FString GetContextualBeerStat(EBMLiquidStatType Stat, const FBMBeerProperties& BeerProperties);
    
    UFUNCTION(BlueprintPure)
    static FBMBeerProperties GetContextualBeerProperties(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualBeerName(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FSlateBrush GetContextualBeerLabel(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualBatchSizeDesciption(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualBatchSize(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static EBMLiquidStatType GetContextualBarStatType(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualAssignedJobName(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualAssignedCompetitionName(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualActivityReward(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure)
    static FText GetContextualActivityBrewery(UBMUserWidget* ContextualWidget);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString CreateRewardString(UObject* WorldContextObject, FBMRewardData RewardData);
    
    UFUNCTION(BlueprintPure)
    static EBMConditionsStats ConvertLiquidStatToCondition(EBMLiquidStatType LiquidStatType);
    
};

