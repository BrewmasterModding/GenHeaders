#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "ESizeBand.h"
#include "OnSizeChangedDelegate.h"
#include "BMBatchSizeWidget.generated.h"

class UBMActionGlyph;
class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBatchSizeWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnSizeChanged BatchSizeChanged;
    
protected:
    UPROPERTY(Instanced)
    UBMButton* BatchSizeButton;
    
public:
    UBMBatchSizeWidget();
    UFUNCTION()
    void UnbindBatchSizeAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSizeText(const FText& Text);
    
    UFUNCTION()
    void SetBatchSize(ESizeBand Size);
    
    UFUNCTION()
    void IncrementBatchSizeAction();
    
    UFUNCTION()
    void IncrementBatchSize();
    
    UFUNCTION()
    ESizeBand GetCurrentBatchSize();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBatchSizeButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetActionGlyph();
    
    UFUNCTION()
    void BindBatchSizeAction();
    
};

