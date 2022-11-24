#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMParamControlType.h"
#include "BMLabelMakerValueWidget.generated.h"

class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMLabelMakerValueWidget : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FName ParamID;
    
    UPROPERTY(BlueprintReadOnly)
    EBMParamControlType ParamType;
    
public:
    UBMLabelMakerValueWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SaveValueToLabelData(bool bResetToStartingValue);
    
    UFUNCTION()
    void InitializeParamWidget(FName UniqueParamName, EBMParamControlType InType);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetBMButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CopyValueFromLabelData(const FName& UniqueParamName);
    
};

