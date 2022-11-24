#include "BMTastingSequencePanelWidget.h"

class UTweenContainer;

void UBMTastingSequencePanelWidget::SkipActiveTween() {
}

void UBMTastingSequencePanelWidget::PlayTweenOut(UTweenContainer* pAppendToTweenContainer) {
}

void UBMTastingSequencePanelWidget::PlayTweenIn(UTweenContainer* pAppendToTweenContainer) {
}

UBMTastingSequencePanelWidget::UBMTastingSequencePanelWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->srmHandleSlot = NULL;
    this->srmWidget = NULL;
    this->srmValueText = NULL;
    this->carbonationWidget = NULL;
    this->carbonationValueText = NULL;
    this->skipButton = NULL;
    this->ContinueButton = NULL;
    this->ActiveTweenContainer = NULL;
}

