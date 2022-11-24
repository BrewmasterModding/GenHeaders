#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimResults_SingleTestResults.h"
#include "BMAutoBrewSimResults.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimResults {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBMAutoBrewSimResults_SingleTestResults> Results;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPassed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TotalErrorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfFailedTests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FitnessParameter;
    
    FBMAutoBrewSimResults();
};

