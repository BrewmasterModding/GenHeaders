#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMBreweryOverview.generated.h"

class UBMResourceWidget;
class UTexture2D;
class UBMProgressBarWidget;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBreweryOverview : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMBreweryOverview();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SwitchToBeerSubmittedDesign(bool bBeerSubmitted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNextTitle(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNextLevel(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDescription(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentRepPoints(int32 Points);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryOverviewTitle(const FText& Description);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBreweryLogo(UTexture2D* Image);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBrewCardTitle(const FText& Description);
    
    UFUNCTION()
    void OpenBreweryPage(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Hidden();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMResourceWidget* GetReputationAmountWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMProgressBarWidget* GetProgressBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetCommercialBrewingIconButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButton();
    
};

