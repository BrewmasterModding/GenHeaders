#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMSinkCleaningInteractionComp.generated.h"

class ABMDynamicContainer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMSinkCleaningInteractionComp : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ABMDynamicContainer* ContainerToClean;
    
public:
    UBMSinkCleaningInteractionComp();
protected:
    UFUNCTION()
    void ConfirmClean();
    
    UFUNCTION()
    void CancelClean();
    
};

