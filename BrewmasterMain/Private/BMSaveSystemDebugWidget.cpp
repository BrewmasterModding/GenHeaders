#include "BMSaveSystemDebugWidget.h"

class UBMGameInstance;

void UBMSaveSystemDebugWidget::SaveGame(UBMGameInstance* GameInstance) {
}

void UBMSaveSystemDebugWidget::LoadGame(UBMGameInstance* GameInstance) {
}

UBMSaveSystemDebugWidget::UBMSaveSystemDebugWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CampaignSlot = 0;
}

