#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackInstanceInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneTrackInstance.generated.h"

class UMovieSceneEntitySystemLinker;

UCLASS(Transient)
class MOVIESCENE_API UMovieSceneTrackInstance : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UObject* AnimatedObject;
    
    UPROPERTY()
    bool bIsMasterTrackInstance;
    
    UPROPERTY()
    UMovieSceneEntitySystemLinker* Linker;
    
    UPROPERTY()
    TArray<FMovieSceneTrackInstanceInput> Inputs;
    
public:
    UMovieSceneTrackInstance();
};

