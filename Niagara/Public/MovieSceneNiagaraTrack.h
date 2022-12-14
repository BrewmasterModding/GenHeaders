#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
#include "MovieSceneNiagaraTrack.generated.h"

class UMovieSceneSection;

UCLASS(Abstract, MinimalAPI)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneNiagaraTrack();
};

