#pragma once
#include "CoreMinimal.h"
#include "BMInputActionData.h"
#include "BMTopLevelWidget.h"
#include "ReturnCallDelegate.h"
#include "BMCommercialBreweryResults.generated.h"

class UBMResourceWidget;
class UTexture2D;
class UBMUntappdRating;
class UTweenContainer;
class UBMGraphSales;
class UBMPerformanceBonus;
class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCommercialBreweryResults : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FReturnCall ReturnCall;
    
    UPROPERTY()
    FBMInputActionData ContinueAction;
    
public:
    UBMCommercialBreweryResults();
protected:
    UFUNCTION()
    void TweenFadeComplete(UTweenContainer* TweenContainer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTotalTokensTitle(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryName(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryImage(UTexture2D* Logo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBonus(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerName(const FText& Text);
    
    UFUNCTION()
    void RemoveActionBindings();
    
    UFUNCTION()
    void RemoveActionBindingAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMUntappdRating* GetUntappdBanner();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceWidget* GetTokenResourceWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMGraphSales* GetSalesGraph();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UBMPerformanceBonus*> GetPerformanceBonuses();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetContinueButton();
    
public:
    UFUNCTION()
    void AddButtonBindings(UTweenContainer* TweenContainer);
    
};

