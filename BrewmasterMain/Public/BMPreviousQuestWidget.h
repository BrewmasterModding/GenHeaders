#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMPreviousQuestWidget.generated.h"

class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMPreviousQuestWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMPreviousQuestWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviousQuestText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetReadPreviousTextButton();
    
};

