#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BMDesiredSizeTooltipData.h"
#include "BMRewardData.h"
#include "BMResourceTooltipData.h"
#include "BMListItemTooltipData.h"
#include "BMPackagedBeerData.h"
#include "BMTooltipData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTooltipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FBMDesiredSizeTooltipData TooltipSizeData;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText Header;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText SubHeader;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool HideHeaderDiv;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText TastingSequenceMatch;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText Weight;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText StoryProgress;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BodyHeader;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BodyBody;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSoftObjectPtr<UTexture2D> ImageBody;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FSlateBrush ImageBodyBrush;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText Body;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText PerformanceBonus;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FBMListItemTooltipData> ListItemData;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText LevelReputation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText LevelMastery;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BreweryName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSoftObjectPtr<UTexture2D> ImageBreweryMastery;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FSlateBrush ImageBreweryMasteryBrush;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText CurrentStatus;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText NextStatus;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText LeftStat;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float CurrentStatPosition;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText RightStat;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText FinalStat;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText CurrentBonus;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BonusNo;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BonusAddedPercent;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText AdditionalDetailsHeader;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText JobsCompletedTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText JobsCompletedAmount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText CompetitionsCompletedTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText CompetitionsCompletedAmount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText CurrentActivityTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText TargetStatTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText TargetStat;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText ResultStatTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText ResultStat;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText RewardsHeader;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FBMResourceTooltipData> ResourceSystem;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FBMRewardData RewardsData;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText TokensEarnedTotalTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FBMResourceTooltipData TokensEarnedTotal;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText TokensEarnedSeasonTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FBMResourceTooltipData TokensEarnedSeason;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerStyleHeaderTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerStyleHeaderStandardTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerStyleFlavourNotesStandard;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerNameHeaderTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerNameHeaderStandardTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerNameFlavourNotesStandard;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerStyleTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerStyleStatTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerStyleStat;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerNameTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerNameStatTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText BeerNameStat;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText FooterBody;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSoftObjectPtr<UTexture2D> FooterLockPin;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FSlateBrush FooterLockPinBrush;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText AmountNeededTitle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText AmountNeededValue;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText TextPromptPress;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText TextPromptBody;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool AllItemStatsMet;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FBMListItemTooltipData> MetItemStats;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FBMListItemTooltipData> UnmetItemStats;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FBMPackagedBeerData FinshedBeerInfo;
    
    FBMTooltipData();
};

