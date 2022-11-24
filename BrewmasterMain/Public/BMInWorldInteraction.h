#pragma once
#include "CoreMinimal.h"
#include "EBMInput.h"
#include "BMInWorldInteraction.generated.h"

class UBMInteractionComponent;
class AActor;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMInWorldInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EBMInput InputID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ActionID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsActive;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMInteractionComponent* InteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AActor* Interactee;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsInvalid;
    
    FBMInWorldInteraction();
};

