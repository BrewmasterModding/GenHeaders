#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMPerformanceBonus.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPerformanceBonus : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMPerformanceBonus();
    UFUNCTION(BlueprintImplementableEvent)
    void SwitchImage(const FString& PerformanceName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitleText(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBonusText(const FText& Title);
    
};

