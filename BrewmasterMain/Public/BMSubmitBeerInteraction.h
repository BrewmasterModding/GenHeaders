#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMSubmitBeerInteraction.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMSubmitBeerInteraction : public UBMInteractionComponent {
    GENERATED_BODY()
public:
    UBMSubmitBeerInteraction();
};

