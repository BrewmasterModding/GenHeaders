#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSimSimplex_SimplexVertex.h"
#include "BMAutoBrewSimSimplex.generated.h"

USTRUCT()
struct BREWMASTERMAIN_API FBMAutoBrewSimSimplex {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 NumberOfPoints;
    
    UPROPERTY()
    int32 WorkingIndex;
    
    UPROPERTY()
    TArray<FBMAutoBrewSimSimplex_SimplexVertex> Points;
    
    UPROPERTY()
    TArray<float> FitnessValues;
    
    UPROPERTY()
    FBMAutoBrewSimSimplex_SimplexVertex LastHighestVertex;
    
    UPROPERTY()
    FBMAutoBrewSimSimplex_SimplexVertex InversionVertex;
    
    UPROPERTY()
    float LastHighestFitnessValue;
    
    UPROPERTY()
    int32 LastSecondHighestIndex;
    
    UPROPERTY()
    int32 LastLowestIndex;
    
    UPROPERTY()
    bool bTryingFirstFlip;
    
public:
    FBMAutoBrewSimSimplex();
};

