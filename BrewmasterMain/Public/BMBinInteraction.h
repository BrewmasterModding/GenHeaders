#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMInteractionComponent.h"
#include "BMBinInteraction.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMBinInteraction : public UBMInteractionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> ClassesNotToBeDeleted;
    
    UPROPERTY(EditAnywhere)
    bool bIsBin;
    
protected:
    UPROPERTY()
    AActor* ActorToDestory;
    
public:
    UBMBinInteraction();
protected:
    UFUNCTION()
    void ConfirmDestroyItem();
    
    UFUNCTION()
    void CancelDestroyItem();
    
};

