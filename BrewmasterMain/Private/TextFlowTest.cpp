#include "TextFlowTest.h"

void UTextFlowTest::TestGetTextFromOneBoxPerPage() {
}

void UTextFlowTest::TestGetTextFromMultipleBoxesPerPage() {
}




UTextFlowTest::UTextFlowTest() : UUserWidget(FObjectInitializer::Get()) {
    this->LeftPage = NULL;
    this->RightPage = NULL;
    this->TextStyle = NULL;
    this->CachedRichText = NULL;
    this->TickCounter = 0;
}

