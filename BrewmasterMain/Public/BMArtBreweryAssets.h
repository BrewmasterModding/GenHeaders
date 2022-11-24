#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMSponsor.h"
#include "BMArtBreweryAssets.generated.h"

class UTexture2D;
class UDataTable;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtBreweryAssets : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EBMSponsor Sponsor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Background;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> ResultBackground;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> TextIcon;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> ResultsIcon;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Decor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* CompetitionNameTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* CompetitionTitleTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* CompetitionPlaceTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* CompetitionResultsTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* ChanceToWinTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* BeerEntryNameTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* PlayerEntryTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UDataTable* RewardTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> ChanceToWinBoarderStyle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> JobBanner;
    
    FBMArtBreweryAssets();
};

