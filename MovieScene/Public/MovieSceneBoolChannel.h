#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneBoolChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneBoolChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    bool DefaultValue;
    
    UPROPERTY()
    bool bHasDefaultValue;
    
    UPROPERTY()
    TArray<bool> Values;
    
public:
    FMovieSceneBoolChannel();
};

