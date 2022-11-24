#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMTubeInteractionComponent.generated.h"

class UBMAudioAssetListBase;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMTubeInteractionComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AActor* RotatingObject;
    
    UPROPERTY()
    bool ActorDestorying;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IncreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecreaseTime;
    
protected:
    UPROPERTY()
    bool bInteractionSequenceStarted;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
public:
    UBMTubeInteractionComponent();
protected:
    UFUNCTION()
    void RotateInteractee(AActor* Interactee, bool bRotateClockwise);
    
};

