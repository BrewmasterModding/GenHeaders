#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMCalendarInteractionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMCalendarInteractionComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
    UBMCalendarInteractionComponent();
};

