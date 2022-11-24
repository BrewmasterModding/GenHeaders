#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMSubmissionPageLeft.generated.h"

class UBMSubmitList;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSubmissionPageLeft : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMSubmissionPageLeft();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSubmitName(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerName(const FText& Title);
    
protected:
    UFUNCTION()
    void ReturnToMainGame();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    UBMSubmitList* GetSubmitlist();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBackButton();
    
protected:
    UFUNCTION()
    void ClosePage();
    
};

