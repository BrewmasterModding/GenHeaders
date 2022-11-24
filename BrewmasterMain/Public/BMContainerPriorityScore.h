#pragma once
#include "CoreMinimal.h"
#include "BMContainerPriorityScore.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMContainerPriorityScore {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    float UpdateTime;
    
    UPROPERTY(SaveGame)
    float NextUpdate;
    
    UPROPERTY(SaveGame)
    float DistanceScore;
    
    UPROPERTY(SaveGame)
    float HighlightScore;
    
    UPROPERTY(SaveGame)
    float RenderScore;
    
    UPROPERTY(SaveGame)
    float StopWatchScore;
    
    FBMContainerPriorityScore();
};

