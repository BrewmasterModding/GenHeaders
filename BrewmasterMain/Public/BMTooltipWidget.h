#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMDesiredSizeTooltipData.h"
#include "BMResourceTooltipData.h"
#include "BMPackagedBeerData.h"
#include "BMTooltipData.h"
#include "BMListItemTooltipData.h"
#include "BMTooltipWidget.generated.h"

class UBMResourceSystem;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTooltipWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMTooltipWidget();
    UFUNCTION()
    void ToolTipDelay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetWeight(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTooltipSize(const FBMDesiredSizeTooltipData& TooltipSizeData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTokensEarnedTotalTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTokensEarnedTotal(const FBMResourceTooltipData EarnedTotal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTokensEarnedSeasonTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTokensEarnedSeason(const FBMResourceTooltipData TokensEarnedSeason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTextPromptPress(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTextPromptBody(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTastingSequenceMatch(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTargetStatTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTargetStat(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSubHeader(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStoryProgress(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRightStat(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRewardsHeader(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRewardsData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetResultStatTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetResultStat(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetResourceSystem();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPerformanceBonus(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNextStatus(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLevelReputation(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLevelMastery(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLeftStatus(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJobsCompletedTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetJobsCompletedAmount(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImageBreweryMastery(const FSlateBrush Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImageBody(const FSlateBrush Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHeader(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFooterLockPin(const FSlateBrush Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFooterBody(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFinishedBeerInfo(const FBMPackagedBeerData BeerData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFinalStat(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentStatus(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentStatPosition(const float StatPosition);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentBonus(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentActivityTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCompetitionsCompletedTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCompetitionsCompletedAmount(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryName(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBonusNo(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBonusAddedPercent(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBodyHeader(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBodyBody(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBody(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleStatTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleStat(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleHeaderTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleHeaderStandardTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleFlavourNotesStandard(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerNameTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerNameStatTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerNameStat(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerNameHeaderTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerNameHeaderStandardTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerNameFlavourNotesStandard(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerName(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAmountNeededValue(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAmountNeededTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAllItemStatsMetVisibility(const bool AllItemStatsMet);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAdditionalDetailsHeader(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTooltip(FBMTooltipData TooltipData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideHeaderDiv(const bool Hide);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetResourceSystem();
    
    UFUNCTION()
    void CallBPMethods(FBMTooltipData TooltipData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddUnmetStatListItem(const FBMListItemTooltipData ListItem, const bool IsEvenEntry);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddMetStatListItem(const FBMListItemTooltipData ListItem, const bool IsEvenEntry);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddListItem(const FBMListItemTooltipData ListItem);
    
};

