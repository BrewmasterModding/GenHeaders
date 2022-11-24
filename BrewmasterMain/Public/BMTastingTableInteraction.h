#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMTastingTableInteraction.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMTastingTableInteraction : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SkipChecks;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxAllowedBeerTemp;
    
    UPROPERTY(EditDefaultsOnly)
    float MinAllowedBeerTemp;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxAllowedIBU;
    
    UPROPERTY(EditDefaultsOnly)
    float MinAllowedIBU;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxAllowedABV;
    
    UPROPERTY(EditDefaultsOnly)
    float MinAllowedABV;
    
    UPROPERTY(EditDefaultsOnly)
    float MinAllowedBatchSize;
    
public:
    UBMTastingTableInteraction();
protected:
    UFUNCTION()
    void SaveGameCallBack();
    
};

