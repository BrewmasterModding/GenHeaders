#pragma once
#include "CoreMinimal.h"
#include "BMBaseActor.h"
#include "BMBaseEquipment.generated.h"

class ABMBaseTap;
class ABMDynamicContainer;

UCLASS()
class BREWMASTERMAIN_API ABMBaseEquipment : public ABMBaseActor {
    GENERATED_BODY()
public:
    ABMBaseEquipment();
    UFUNCTION(BlueprintCallable)
    void TurnOnOff(bool bNewOnState);
    
    UFUNCTION()
    void GetTaps(TArray<ABMBaseTap*>& returnTaps);
    
    UFUNCTION(BlueprintCallable)
    ABMDynamicContainer* GetContainerThisAttachedTo();
    
    UFUNCTION(BlueprintCallable)
    ABMDynamicContainer* GetContainerAttachedToThis();
    
};

