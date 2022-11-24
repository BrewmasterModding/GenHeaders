#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimCalibrations_WhatToCalibrate_Ingredients.h"
#include "BMAutoBrewSimCalibrations_WhatToCalibrate_Hops.h"
#include "BMAutoBrewSimCalibrations_WhatToCalibrate_Malts.h"
#include "BMAutoBrewSimCalibrations_WhatToCalibrate_Yeast.h"
#include "BMAutoBrewSimCalibrations_WhatToCalibrate.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimCalibrations_WhatToCalibrate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FBMAutoBrewSimCalibrations_WhatToCalibrate_Ingredients> IngredientsToCalibrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FBMAutoBrewSimCalibrations_WhatToCalibrate_Hops> HopsToCalibrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FBMAutoBrewSimCalibrations_WhatToCalibrate_Malts> MaltsToCalibrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FBMAutoBrewSimCalibrations_WhatToCalibrate_Yeast> YeastToCalibrate;
    
    FBMAutoBrewSimCalibrations_WhatToCalibrate();
};

