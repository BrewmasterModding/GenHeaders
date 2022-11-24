#pragma once
#include "CoreMinimal.h"
#include "LevelVisibilityComponentData.generated.h"

class UMovieSceneLevelVisibilitySection;

USTRUCT()
struct FLevelVisibilityComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UMovieSceneLevelVisibilitySection* Section;
    
    MOVIESCENETRACKS_API FLevelVisibilityComponentData();
};

