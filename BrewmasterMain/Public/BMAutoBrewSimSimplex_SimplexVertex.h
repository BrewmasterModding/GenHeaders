#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimSimplex_SimplexVertex.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAutoBrewSimSimplex_SimplexVertex {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<float> Coordinates;
    
    FBMAutoBrewSimSimplex_SimplexVertex();
};

