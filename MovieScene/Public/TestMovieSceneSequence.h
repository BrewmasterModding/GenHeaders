#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequence.h"
#include "TestMovieSceneSequence.generated.h"

class UMovieScene;

UCLASS(MinimalAPI)
class UTestMovieSceneSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UMovieScene* MovieScene;
    
    UTestMovieSceneSequence();
};

