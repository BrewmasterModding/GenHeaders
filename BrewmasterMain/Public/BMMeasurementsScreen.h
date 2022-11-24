#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMInputActionData.h"
#include "BMMeasurementsScreen.generated.h"

class UBMTextButtonWidget;
class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMMeasurementsScreen : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBMInputActionData PreviousSelectionAction;
    
    UPROPERTY()
    FBMInputActionData NextSelectionAction;
    
    UPROPERTY()
    FBMInputActionData BackAction;
    
    UPROPERTY()
    FBMInputActionData ConfirmAction;
    
    UPROPERTY(BlueprintReadWrite)
    bool bMeasurementSystemIsMetric;
    
    UBMMeasurementsScreen();
    UFUNCTION(BlueprintImplementableEvent)
    void SetMetricUI();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetImperialUI();
    
    UFUNCTION(BlueprintCallable)
    void SaveConfig();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetPreviousGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetNextGlyph();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetConfirmButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
    UFUNCTION(BlueprintCallable)
    void Back();
    
};

