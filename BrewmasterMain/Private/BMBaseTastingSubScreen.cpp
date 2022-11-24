#include "BMBaseTastingSubScreen.h"

void UBMBaseTastingSubScreen::SkipAnimation() {
}

void UBMBaseTastingSubScreen::SetBindings(bool bBindingsEnabled, bool bFullNavigationOn) {
}

void UBMBaseTastingSubScreen::PreviousScreen() {
}

void UBMBaseTastingSubScreen::PlayAnimations(FBMBeerProperties& BeerProperties) {
}

void UBMBaseTastingSubScreen::NextScreen() {
}

void UBMBaseTastingSubScreen::MoveToNextSequence() {
}

void UBMBaseTastingSubScreen::HandleContinueButton() {
}





void UBMBaseTastingSubScreen::AnimationFinished() {
}

void UBMBaseTastingSubScreen::AnimateOrSetBinding() {
}

UBMBaseTastingSubScreen::UBMBaseTastingSubScreen() {
    this->bPlayAnimation = true;
    this->bFullNavigationHasBeenEnabled = false;
    this->TweenContainer = NULL;
}

