#include "BMStorageWidget.h"

class UBMStorageInteraction;


void UBMStorageWidget::ConnectToStorage(UBMStorageInteraction* Interaction) {
}

UBMStorageWidget::UBMStorageWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ActiveStorageInteraction = NULL;
    this->SpawnWidget = NULL;
    this->IsUIOpen = false;
}

