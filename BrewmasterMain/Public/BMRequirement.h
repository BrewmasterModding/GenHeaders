#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMRequirement.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRequirement : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsCompetition;
    
    UBMRequirement();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FText& Text);
    
};

