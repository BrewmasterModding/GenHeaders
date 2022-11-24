#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMDeliveryBoxInteraction.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMDeliveryBoxInteraction : public UBMInteractionComponent {
    GENERATED_BODY()
public:
    UBMDeliveryBoxInteraction();
    UFUNCTION()
    void OpenScreen();
    
};

