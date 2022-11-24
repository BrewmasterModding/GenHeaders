#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMCleanWorkshopComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMCleanWorkshopComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
    UBMCleanWorkshopComponent();
protected:
    UFUNCTION()
    void ConfirmCleanWorkshop();
    
    UFUNCTION()
    void CancelCleanWorkshop();
    
};

