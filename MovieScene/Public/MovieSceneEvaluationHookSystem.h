#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneEvaluationInstanceKey.h"
#include "MovieSceneEvaluationHookEventContainer.h"
#include "MovieSceneEvaluationHookSystem.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;
    
public:
    UMovieSceneEvaluationHookSystem();
};

