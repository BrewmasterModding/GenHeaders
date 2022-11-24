#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "TestMovieSceneEvalHookTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> SectionArray;
    
    UTestMovieSceneEvalHookTrack();
};

