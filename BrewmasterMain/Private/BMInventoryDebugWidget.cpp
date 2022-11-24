#include "BMInventoryDebugWidget.h"

class AActor;

TArray<FName> UBMInventoryDebugWidget::GetItemsAvaliableToCreate() {
    return TArray<FName>();
}

AActor* UBMInventoryDebugWidget::CreateActorFromData(FName ItemIDName) {
    return NULL;
}

UBMInventoryDebugWidget::UBMInventoryDebugWidget() : UUserWidget(FObjectInitializer::Get()) {
}

