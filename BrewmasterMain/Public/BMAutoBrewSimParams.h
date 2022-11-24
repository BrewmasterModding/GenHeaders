#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimParams_RecipeStep.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BMAutoBrewSimParams_DesiredResults.h"
#include "BMAutoBrewSimParams.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FBMAutoBrewSimParams_DesiredResults> DesiredResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<float, FBMAutoBrewSimParams_RecipeStep> RecipeSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FDataTableRowHandle> ContainerProperties;
    
    FBMAutoBrewSimParams();
};

