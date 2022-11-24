#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "BMSaveableActorInterface.h"
#include "BMContainerPriorityScore.h"
#include "BMBrewVisualsManager.generated.h"

class UCurveFloat;

UCLASS()
class BREWMASTERMAIN_API ABMBrewVisualsManager : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    TMap<int32, FBMContainerPriorityScore> ContainersPriorityScore;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* LowDistanceUpdateTimeCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* LowHighlightUpdateTimeCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LowNotRenderedUpdateTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LowStopwatchUpdateTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* MediumDistanceUpdateTimeCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* MediumHighlightUpdateTimeCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MediumNotRenderedUpdateTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MediumStopwatchUpdateTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* HighDistanceUpdateTimeCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* HighHighlightUpdateTimeCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HighNotRenderedUpdateTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HighStopwatchUpdateTime;
    
    UPROPERTY()
    UCurveFloat* DistanceUpdateTimeCurve;
    
    UPROPERTY()
    UCurveFloat* HighlightUpdateTimeCurve;
    
    UPROPERTY()
    float NotRenderedUpdateTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AllowShaderUpdatesEveryTick;
    
public:
    ABMBrewVisualsManager();
    
    // Fix for true pure virtual functions not being implemented
};

