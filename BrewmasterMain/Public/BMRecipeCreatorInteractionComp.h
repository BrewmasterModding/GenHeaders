#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMRecipeCreatorInteractionComp.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMRecipeCreatorInteractionComp : public UBMInteractionComponent {
    GENERATED_BODY()
public:
    UBMRecipeCreatorInteractionComp();
};

