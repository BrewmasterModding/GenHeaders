#pragma once
#include "CoreMinimal.h"
#include "BMBaseTastingSubScreen.h"
#include "BMTastingScreenPart2.generated.h"

class UPanelWidget;
class UBMTastingSequenceBar;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMTastingScreenPart2 : public UBMBaseTastingSubScreen {
    GENERATED_BODY()
public:
    UBMTastingScreenPart2();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTasteHeaderText(const FText& Taste);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOriginalGravityText(const FText& HeaderText, const FText& OriginalGravity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMouthfeelText(const FText& HeaderText, const FText& Mouthfeel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFinalGravityText(const FText& HeaderText, const FText& FinalGravity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetContaimationText(const FText& HeaderText, const FText& Contaimation);
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetOGWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetMouthFeelWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTastingSequenceBar* GetIBUBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetFGWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetContaminationWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTastingSequenceBar* GetABVBar();
    
};

