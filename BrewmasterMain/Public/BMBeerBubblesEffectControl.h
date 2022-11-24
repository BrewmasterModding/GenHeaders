#pragma once
#include "CoreMinimal.h"
#include "BMNiagaraEffectControl.h"
#include "BMBeerBubblesEffectStruct.h"
#include "EBMBeerBubblesEffectPropertyType.h"
#include "BMBeerBubblesEffectControl.generated.h"

class ABMDynamicContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMBeerBubblesEffectControl : public UBMNiagaraEffectControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BubblesMinCodeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BubblesMaxCodeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClarityMinCodeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClarityMaxCodeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadSizeMinCodeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadSizeMaxCodeValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMBeerBubblesEffectStruct> Properties;
    
public:
    UBMBeerBubblesEffectControl();
protected:
    UFUNCTION(BlueprintCallable)
    void SetParticleProperties(ABMDynamicContainer* Container, bool InEditor);
    
    UFUNCTION()
    float GetCodeValue(EBMBeerBubblesEffectPropertyType PropertyType);
    
};

