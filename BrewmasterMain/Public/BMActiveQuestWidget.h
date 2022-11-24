#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMActiveQuestWidget.generated.h"

class UBMResourceSystem;
class UBMObjectiveSystem;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMActiveQuestWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMActiveQuestWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetResourceSystem();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMObjectiveSystem* GetRequirmentHolder();
    
};

