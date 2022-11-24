#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMPlayerInventoryInteractionComp.generated.h"

class ABMCharacter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMPlayerInventoryInteractionComp : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ABMCharacter* PlayerChar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ItemSwitchGracePeriod;
    
public:
    UBMPlayerInventoryInteractionComp();
protected:
    UFUNCTION()
    void ChangeActiveItem(int32 NewActiveItem);
    
};

