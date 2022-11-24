#pragma once
#include "CoreMinimal.h"
#include "BMSetValueInteractionComp.h"
#include "BMSetCarbonationInteractionComp.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMSetCarbonationInteractionComp : public UBMSetValueInteractionComp {
    GENERATED_BODY()
public:
    UBMSetCarbonationInteractionComp();
};

