#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMCurrentActivityWidget.generated.h"

class UBMResourceSystem;
class UBMButton;
class UBMObjectiveSystem;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCurrentActivityWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMCurrentActivityWidget();
protected:
    UFUNCTION()
    void SubmitBeer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetSubmitBeerButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetResourcePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMObjectiveSystem* GetObjectiveSystem();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceSystem* GetBonusResourcePanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMObjectiveSystem* GetBonusObjectiveSystem();
    
};

