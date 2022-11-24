#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMHUDObjective.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDObjective : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMHUDObjective();
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCompleteText(bool bObjectiveComplete);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCheckMark(bool bChecked);
    
};

