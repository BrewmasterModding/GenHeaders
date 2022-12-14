#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "MovieSceneSpawnable.h"
#include "MovieScenePossessable.h"
#include "MovieSceneBinding.h"
#include "MovieSceneObjectBindingIDs.h"
#include "MovieSceneFrameRange.h"
#include "EMovieSceneEvaluationType.h"
#include "EUpdateClockSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "MovieSceneMarkedFrame.h"
#include "MovieScene.generated.h"

class UMovieSceneTrack;

UCLASS(DefaultToInstanced)
class MOVIESCENE_API UMovieScene : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FMovieSceneSpawnable> Spawnables;
    
    UPROPERTY()
    TArray<FMovieScenePossessable> Possessables;
    
    UPROPERTY()
    TArray<FMovieSceneBinding> ObjectBindings;
    
    UPROPERTY()
    TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups;
    
    UPROPERTY(Instanced)
    TArray<UMovieSceneTrack*> MasterTracks;
    
    UPROPERTY(Instanced)
    UMovieSceneTrack* CameraCutTrack;
    
    UPROPERTY()
    FMovieSceneFrameRange SelectionRange;
    
    UPROPERTY()
    FMovieSceneFrameRange PlaybackRange;
    
    UPROPERTY()
    FFrameRate TickResolution;
    
    UPROPERTY()
    FFrameRate DisplayRate;
    
    UPROPERTY()
    EMovieSceneEvaluationType EvaluationType;
    
    UPROPERTY()
    EUpdateClockSource ClockSource;
    
    UPROPERTY()
    FSoftObjectPath CustomClockSourcePath;
    
    UPROPERTY()
    TArray<FMovieSceneMarkedFrame> MarkedFrames;
    
public:
    UMovieScene();
};

