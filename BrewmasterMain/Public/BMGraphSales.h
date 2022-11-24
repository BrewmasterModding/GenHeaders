#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "BMGraphSales.generated.h"

class UBMLineChartWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMGraphSales : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMGraphSales();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetXStartingSeason(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetXFinalSeason(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentYear(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentSeason(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideAllData();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMLineChartWidget* GetLineChart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddYPoints(UPARAM(Ref) TArray<int32>& Points);
    
};

