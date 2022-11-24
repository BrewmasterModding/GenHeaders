#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneTrackIdentifier.h"
#include "MovieSceneEvaluationKey.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneSequenceID SequenceID;
    
    UPROPERTY()
    FMovieSceneTrackIdentifier TrackIdentifier;
    
    UPROPERTY()
    uint32 SectionIndex;
    
    MOVIESCENE_API FMovieSceneEvaluationKey();
};

