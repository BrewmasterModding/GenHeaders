#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMWFlavorListEntry.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWFlavorListEntry : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMWFlavorListEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFlavourText(const FText& InFlavourText);
    
};

