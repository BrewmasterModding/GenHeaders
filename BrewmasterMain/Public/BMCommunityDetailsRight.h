#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMCommunityDetailsRight.generated.h"

class UBMUntappdRating;
class UBMPerformanceBonus;
class UBMButton;
class UBMGraphSales;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCommunityDetailsRight : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMCommunityDetailsRight();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SwitchToBeerSubmittedDesign(bool bBeerSubmitted);
    
    UFUNCTION()
    void SubmitButtonUnhovered();
    
    UFUNCTION()
    void SubmitButtonHovered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerName(const FText& Text);
    
    UFUNCTION()
    void ReturnBeer();
    
    UFUNCTION()
    void RemoveBeer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideAllPerformance();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMUntappdRating* GetUntappdBanner();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetSubmitButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMGraphSales* GetSalesGraph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetRemoveBeerButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UBMPerformanceBonus*> GetPerformanceBonuses();
    
    UFUNCTION()
    void DeleteBeer();
    
    UFUNCTION()
    void CancelRemovingBeer();
    
    UFUNCTION()
    void AddBeer();
    
};

