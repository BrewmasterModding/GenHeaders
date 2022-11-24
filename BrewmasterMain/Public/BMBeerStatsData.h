#pragma once
#include "CoreMinimal.h"
#include "BMClarityBeerStatsData.h"
#include "BMBodyBeerStatsData.h"
#include "BMHeadSizeBeerStatsData.h"
#include "BMBubblesBeerStatsData.h"
#include "BMColourBeerStatsData.h"
#include "BMCarbonationBeerStatsData.h"
#include "BMBatchSizeStatsData.h"
#include "BMHoppyBitterMaltySweetStatsData.h"
#include "BMIBUData.h"
#include "BMABVData.h"
#include "BMBeerStatsData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBeerStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float ProteinMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMClarityBeerStatsData Clarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMBodyBeerStatsData Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMHeadSizeBeerStatsData HeadSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMBubblesBeerStatsData Bubbles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMColourBeerStatsData Colour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMCarbonationBeerStatsData Carbonation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMBatchSizeStatsData Batch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMHoppyBitterMaltySweetStatsData BitterSweetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMABVData ABVData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FBMIBUData IBUData;
    
    FBMBeerStatsData();
};

