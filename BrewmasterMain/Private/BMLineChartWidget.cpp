#include "BMLineChartWidget.h"

class UWidget;

void UBMLineChartWidget::UpdatePlotPoints() {
}

void UBMLineChartWidget::UpdateLineFadeMask() {
}


void UBMLineChartWidget::UpdateChart() {
}

void UBMLineChartWidget::SetDebugImageLocation() {
}


void UBMLineChartWidget::InitializeTargetWidget(UWidget* InTargetWidget, UWidget* InParentWidget) {
}

FVector2D UBMLineChartWidget::GetWidgetLowerLeftLocation(UWidget* Widget) {
    return FVector2D{};
}

FVector2D UBMLineChartWidget::GetWidgetCenterLocation(UWidget* Widget) {
    return FVector2D{};
}

void UBMLineChartWidget::DrawPlotPoint(FPaintContext PaintContext, FVector2D StartPoint, FVector2D EndPoint) {
}

void UBMLineChartWidget::DrawMaterialLineChart() {
}

void UBMLineChartWidget::DrawAxis(FPaintContext PaintContext) {
}

int32 UBMLineChartWidget::CustomRoundUp(int32 NumToRound, int32 Multiple) {
    return 0;
}

void UBMLineChartWidget::CreatePlotPoints(TArray<FVector2D> DataValues) {
}

TArray<FVector2D> UBMLineChartWidget::ConvertToUV(TArray<int32> SeasonSalesArray, int32 YAxisPoints, int32 YAxisMultipleRounded) {
    return TArray<FVector2D>();
}

void UBMLineChartWidget::AddSeasonSalesValues(TArray<int32> SaleValue) {
}

UBMLineChartWidget::UBMLineChartWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->IsXAxis = true;
    this->BoundaryGap = true;
    this->XAxisLength = 600.00f;
    this->YAxisLength = 600.00f;
    this->XAxisIntervals = 3;
    this->YAxisIntervals = 600;
    this->TargetWidget = NULL;
    this->ParentWidget = NULL;
    this->DebugImage = NULL;
    this->PlotPointIndex = -1;
    this->DrawSpeed = 1.00f;
    this->LineMask = 0.00f;
    this->LineMaskIncrementValue = 0.01f;
    this->bUpdateDrawPoints = false;
    this->bGraphWidgetInitialised = false;
    this->YAxisMargin = 5;
    this->bPainting = false;
}

