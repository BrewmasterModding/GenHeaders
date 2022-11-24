#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EFlavourCategory.h"
#include "BMFlavourChart.generated.h"

class UTweenVector2D;
class UImage;
class UBMLineChartWidget;
class UPanelWidget;
class UWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMFlavourChart : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfSections;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxFlavourNote;
    
    UPROPERTY()
    TArray<UTweenVector2D*> ActiveTweens;
    
    UPROPERTY(EditDefaultsOnly)
    float MinPercentageAmount;
    
public:
    UBMFlavourChart();
    UFUNCTION()
    void UpdateTween(UTweenVector2D* Tween);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFlavourText(const FText& Flavour, const FText& Amount, int32 SlotNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetPolygonBackgroundImage();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMLineChartWidget* GetLineChart();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetLabelWidget(int32 WidgetNo);
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<EFlavourCategory> GetFlavourCategoryOrder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetDummyWidget();
    
    UFUNCTION()
    void AnimationPlayed(UTweenVector2D* Tween);
    
};

