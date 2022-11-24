#pragma once
#include "CoreMinimal.h"
#include "BMSetValueInteractionComp.h"
#include "BMSetTemperatureInteractionComp.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMSetTemperatureInteractionComp : public UBMSetValueInteractionComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bDisableInteractionSequence;
    
public:
    UBMSetTemperatureInteractionComp();
};

