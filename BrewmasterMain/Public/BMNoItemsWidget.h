#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMNoItemsWidget.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMNoItemsWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMNoItemsWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetEmptyCategoryText(const FText& EmptyCategoryText);
    
};

