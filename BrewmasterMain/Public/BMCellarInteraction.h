#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "BMCellarInteraction.generated.h"

class UBMAudioAssetListBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMCellarInteraction : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
public:
    UBMCellarInteraction();
protected:
    UFUNCTION()
    void SaveGameCallBack();
    
    UFUNCTION()
    void ConfirmStoreBeer();
    
    UFUNCTION()
    void CancelStoreBeer();
    
};

