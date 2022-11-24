#include "LevelSequencePlayer.h"

class UObject;
class UCameraComponent;
class ULevelSequence;
class ALevelSequenceActor;
class ULevelSequencePlayer;

UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent() const {
    return NULL;
}

ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor) {
    return NULL;
}

ULevelSequencePlayer::ULevelSequencePlayer() {
}

