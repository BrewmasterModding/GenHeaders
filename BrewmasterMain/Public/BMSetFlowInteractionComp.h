#pragma once
#include "CoreMinimal.h"
#include "BMSetValueInteractionComp.h"
#include "BMSetFlowInteractionComp.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBMSetFlowInteractionComp : public UBMSetValueInteractionComp {
    GENERATED_BODY()
public:
    UBMSetFlowInteractionComp();
};

