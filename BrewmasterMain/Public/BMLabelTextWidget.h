#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMLabelTextWidget.generated.h"

class UBMRichText;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMLabelTextWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMLabelTextWidget();
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UBMRichText*> GetTextBoxes();
    
};

