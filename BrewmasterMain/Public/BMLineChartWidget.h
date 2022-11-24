#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PaintContext -FallbackName=PaintContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "BMLineChartWidget.generated.h"

class UWidget;
class UImage;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMLineChartWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector2D> AxisData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsXAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BoundaryGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float XAxisLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YAxisLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 XAxisIntervals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 YAxisIntervals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UWidget* TargetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UWidget* ParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UImage* DebugImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D DrawPointAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector2D> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D PlotPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector2D> PlotPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector2D> PlotPointsDrawn;
    
    UPROPERTY()
    FTimerHandle PlotValuesTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D PlotPointStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D PlotPointEnd;
    
    UPROPERTY()
    int32 PlotPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LineMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LineMaskIncrementValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdateDrawPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGraphWidgetInitialised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> SeasonSalesValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 YAxisMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPainting;
    
    UBMLineChartWidget();
    UFUNCTION(BlueprintCallable)
    void UpdatePlotPoints();
    
    UFUNCTION(BlueprintCallable)
    void UpdateLineFadeMask();
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateChartWithValues(int32 YAxisNumber, int32 Multiple);
    
    UFUNCTION(BlueprintCallable)
    void UpdateChart();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugImageLocation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlotDataPoints();
    
    UFUNCTION(BlueprintCallable)
    void InitializeTargetWidget(UWidget* InTargetWidget, UWidget* InParentWidget);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetWidgetLowerLeftLocation(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetWidgetCenterLocation(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void DrawPlotPoint(FPaintContext PaintContext, FVector2D StartPoint, FVector2D EndPoint);
    
    UFUNCTION(BlueprintCallable)
    void DrawMaterialLineChart();
    
    UFUNCTION(BlueprintCallable)
    void DrawAxis(FPaintContext PaintContext);
    
    UFUNCTION(BlueprintCallable)
    int32 CustomRoundUp(int32 NumToRound, int32 Multiple);
    
    UFUNCTION(BlueprintCallable)
    void CreatePlotPoints(TArray<FVector2D> DataValues);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector2D> ConvertToUV(TArray<int32> SeasonSalesArray, int32 YAxisPoints, int32 YAxisMultipleRounded);
    
    UFUNCTION(BlueprintCallable)
    void AddSeasonSalesValues(TArray<int32> SaleValue);
    
};

