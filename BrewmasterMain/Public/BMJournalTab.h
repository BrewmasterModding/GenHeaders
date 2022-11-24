#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "OnJournalTabSelectedDelegate.h"
#include "BMJournalTab.generated.h"

class UNamedSlot;
class UBMCheckbox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMJournalTab : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnJournalTabSelected OnTabSelectedDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 SectionNumber;
    
public:
    UBMJournalTab();
    UFUNCTION(BlueprintImplementableEvent)
    void SetText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    UNamedSlot* GetPreviousTabGlyphNamedSlot();
    
    UFUNCTION(BlueprintImplementableEvent)
    UNamedSlot* GetNextTabGlyphNamedSlot();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMCheckbox* GetCheckBox();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSelectedTab();
    
};

