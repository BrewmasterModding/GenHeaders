#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMProgressBarWidget.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMProgressBarWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMProgressBarWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetPercentText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBarPercent(float DecimalPercent);
    
};

