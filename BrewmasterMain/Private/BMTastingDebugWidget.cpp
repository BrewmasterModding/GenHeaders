#include "BMTastingDebugWidget.h"

class ABMBaseBeerGlass;
class ABMBaseBeerBottle;

void UBMTastingDebugWidget::SetStyle(FName Style, bool Random) {
}

void UBMTastingDebugWidget::SetRandomStyle() {
}

void UBMTastingDebugWidget::SetBeerGlass(ABMBaseBeerGlass* BeerGlassToUse) {
}

void UBMTastingDebugWidget::SetBeerBottle(ABMBaseBeerBottle* BeerBottleToUse) {
}


TArray<FName> UBMTastingDebugWidget::GetStyleNames() {
    return TArray<FName>();
}









UBMTastingDebugWidget::UBMTastingDebugWidget() {
    this->BeerStyleDataTable = NULL;
    this->BeerGlass = NULL;
    this->BeerBottle = NULL;
}

