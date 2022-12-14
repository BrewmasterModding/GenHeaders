#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "MovieSceneTrackTemplateProducer.h"
#include "TestMovieSceneTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UTestMovieSceneTrack : public UMovieSceneTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bHighPassFilter;
    
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> SectionArray;
    
    UTestMovieSceneTrack();
    
    // Fix for true pure virtual functions not being implemented
};

