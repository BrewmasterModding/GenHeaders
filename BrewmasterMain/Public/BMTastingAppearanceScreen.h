#pragma once
#include "CoreMinimal.h"
#include "BMBaseTastingSubScreen.h"
#include "BMTastingAppearanceScreen.generated.h"

class UPanelWidget;
class UBMTastingSequenceBar;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTastingAppearanceScreen : public UBMBaseTastingSubScreen {
    GENERATED_BODY()
public:
    UBMTastingAppearanceScreen();
    UFUNCTION(BlueprintImplementableEvent)
    void SetClarityText(const FText& ClarityText, const FText& Clarity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBatchSizeText(const FText& BatchText, const FText& BatchSize);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAppearanceText(const FText& Appearance);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTastingSequenceBar* GetSRM();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetClarityWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTastingSequenceBar* GetCarbonation();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetBatchSizeWidget();
    
};

