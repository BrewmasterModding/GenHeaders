#include "BMTastingSequenceManager.h"

class UBMTastingSequenceScreen;

void ABMTastingSequenceManager::TasteBeerForStyle(const FBMBeerProperties& Beer, TArray<FBMBeerStyleMatch>& outPossibleBeerStyles) {
}

void ABMTastingSequenceManager::SkipToEndOfTasting() {
}

void ABMTastingSequenceManager::SetUpUIScreen() {
}

void ABMTastingSequenceManager::Setup() {
}

void ABMTastingSequenceManager::SetTastingScreen(UBMTastingSequenceScreen* TastingUI) {
}


void ABMTastingSequenceManager::OpenPackagingScreen() {
}

void ABMTastingSequenceManager::NextSequenceEvent() {
}

void ABMTastingSequenceManager::MoveContainerToSide() {
}

ABMTastingSequenceManager::ABMTastingSequenceManager() {
    this->AllBeerStylesDataSource = NULL;
    this->MaxNumberOfStylesToMatch = 6;
    this->MinRequiredKeyStatPoints = 2;
    this->CurrentSequenceIndex = -1;
    this->TastingSequenceCameraClass = NULL;
    this->BeerGlassClass = NULL;
    this->TastingSequenceCamera = NULL;
    this->UseCameraInScene = false;
    this->BeerGlass = NULL;
    this->BeerBottle = NULL;
    this->PlayMarketingSequence = false;
    this->DisableFade = true;
    this->TweenContainer = NULL;
    this->TastingSequenceUIWidgetClass = NULL;
    this->TastingSequenceUI = NULL;
    this->EnableDebugWidget = true;
    this->TastingDebugWidgetClass = NULL;
    this->TastingDebugUI = NULL;
    this->BeerInitalPositionSequence = NULL;
    this->BeerPouringSequence = NULL;
    this->PackagingScreenIntroSequence = NULL;
    this->PackagingScreenExitSequence = NULL;
    this->LabelMakerIntroSequence = NULL;
    this->LabelMakerExitSequence = NULL;
}

