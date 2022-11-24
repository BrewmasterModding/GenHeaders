#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMStorageInteraction.generated.h"

class ABMPlayerController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMStorageInteraction : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ABMPlayerController* PlayerController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SubScreenID;
    
    UBMStorageInteraction();
};

