#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimParams_DesiredResults_Dissolved.h"
#include "BMAutoBrewSimParams_DesiredResults_StarchPercentage.h"
#include "BMAutoBrewSimParams_DesiredResults_IBU.h"
#include "BMAutoBrewSimParams_DesiredResults_NonDissolved.h"
#include "BMAutoBrewSimParams_DesiredResults.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimParams_DesiredResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMAutoBrewSimParams_DesiredResults_Dissolved> Dissolved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMAutoBrewSimParams_DesiredResults_IBU IBU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMAutoBrewSimParams_DesiredResults_StarchPercentage StarchPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMAutoBrewSimParams_DesiredResults_NonDissolved> NonDissolved;
    
    FBMAutoBrewSimParams_DesiredResults();
};

