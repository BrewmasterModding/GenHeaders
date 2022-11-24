#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMFinishedBeerStatSlot.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMFinishedBeerStatSlot : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMFinishedBeerStatSlot();
    UFUNCTION(BlueprintImplementableEvent)
    void SetValue(const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIfEven(bool bIsEven);
    
};

