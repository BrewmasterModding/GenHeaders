#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EBMAnalogueControlType.h"
#include "BMAnalogueControlData.h"
#include "BMAnalogueControlComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMAnalogueControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBMAnalogueControlType, FBMAnalogueControlData> DataMap;
    
    UBMAnalogueControlComponent();
    UFUNCTION(BlueprintCallable)
    void StopAnalogueControlAnimation(EBMAnalogueControlType ControlType);
    
    UFUNCTION(BlueprintCallable)
    void StartAnalogueControlAnimation(float TargetValue, bool UsingVariableSpeed, EBMAnalogueControlType ControlType);
    
    UFUNCTION(BlueprintCallable)
    void SingleAnalogueControlAnimationStep(float TargetValue, bool UsingVariableSpeed, float DeltaTime, EBMAnalogueControlType ControlType);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationProgressValue(float NewAnimationProgressValue, EBMAnalogueControlType ControlType);
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationProgressValue(EBMAnalogueControlType ControlType);
    
};

