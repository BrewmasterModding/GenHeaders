#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCameraShakeSourceTriggerChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneCameraShakeSourceTriggerSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneCameraShakeSourceTriggerChannel Channel;
    
public:
    UMovieSceneCameraShakeSourceTriggerSection();
};

