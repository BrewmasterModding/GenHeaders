#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMFormHeader.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMFormHeader : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMFormHeader();
protected:
    UFUNCTION(BlueprintCallable)
    FText GetPinnedRecipe();
    
    UFUNCTION(BlueprintCallable)
    FText GetFillDateValue();
    
};

