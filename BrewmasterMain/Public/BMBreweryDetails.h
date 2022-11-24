#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMBreweryDetails.generated.h"

class UTexture2D;
class UBMProgressBarWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBreweryDetails : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMBreweryDetails();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetStyleTitleText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStyleText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSalesFactorTitleText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSalesFactorText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetProductionBoostTitleText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetProductionBoostText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNextTitleText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNextLevelText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDistributionTitleText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDistributionText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentTitleText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentLevelText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryNotesText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryLogoHereText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryLogo(UTexture2D* Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryDetailText(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMProgressBarWidget* GetProgressBar();
    
};

