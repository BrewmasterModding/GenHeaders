#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveExtrapolation -FallbackName=ERichCurveExtrapolation
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneKeyHandleMap.h"
#include "MovieSceneFloatValue.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "MovieSceneFloatChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneFloatChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    
    UPROPERTY()
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    
private:
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    TArray<FMovieSceneFloatValue> Values;
    
    UPROPERTY()
    float DefaultValue;
    
    UPROPERTY()
    bool bHasDefaultValue;
    
    UPROPERTY(Transient)
    FMovieSceneKeyHandleMap KeyHandles;
    
    UPROPERTY()
    FFrameRate TickResolution;
    
public:
    FMovieSceneFloatChannel();
};

