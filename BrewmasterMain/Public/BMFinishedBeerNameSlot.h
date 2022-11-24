#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMPackagedBeerData.h"
#include "BMFinishedBeerNameSlot.generated.h"

class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMFinishedBeerNameSlot : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBMPackagedBeerData BeerData;
    
    UBMFinishedBeerNameSlot();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNotSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerName(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBMButton();
    
};

