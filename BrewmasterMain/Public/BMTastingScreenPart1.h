#pragma once
#include "CoreMinimal.h"
#include "BMBaseTastingSubScreen.h"
#include "BMTastingScreenPart1.generated.h"

class UBMWFlavorList;
class UBMFlavourChart;
class UBMTastingSequenceBar;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTastingScreenPart1 : public UBMBaseTastingSubScreen {
    GENERATED_BODY()
public:
    UBMTastingScreenPart1();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTasteHeaderText(const FText& Taste);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetFlavourNotesWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMFlavourChart* GetFlavourChart();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTastingSequenceBar* GetFlavourBar();
    
};

