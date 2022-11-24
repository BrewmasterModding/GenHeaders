#pragma once
#include "CoreMinimal.h"
#include "BMBaseTastingSubScreen.h"
#include "BMBeerStyleMatch.h"
#include "BMTastingSequenceSummary.generated.h"

class UPanelWidget;
class UBMWFlavorList;
class UBMBeerStyleItem;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTastingSequenceSummary : public UBMBaseTastingSubScreen {
    GENERATED_BODY()
public:
    UBMTastingSequenceSummary();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSummaryHeaderText(const FText& Taste);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStandardFlavoursText(const FText& TitleText, const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSRMText(const FText& TitleText, const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOGAndFGText(const FText& TitleText, const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMouthfeelText(const FText& TitleText, const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIBUText(const FText& TitleText, const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFlavourNotesText(const FText& TitleText, const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCarbonationText(const FText& TitleText, const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyleHeader(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerStyle(int32 Index, const FText& Percent, const FText& BeerStyle, int32 MatchPercent, FBMBeerStyleMatch BeerStyleData, const FText& MatchingText, bool RecipeMatch, bool ActivityMatch);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetABVText(const FText& TitleText, const FText& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideBeerStyles();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetStandardFlavourListWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetSRMWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetOGWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetMouthFeelWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetIBUWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetFlavourNotesListWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetCarbonationWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UBMBeerStyleItem*> GetActiveBeerStyles();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetABVWidget();
    
};

