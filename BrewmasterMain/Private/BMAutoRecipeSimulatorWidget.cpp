#include "BMAutoRecipeSimulatorWidget.h"

class ABMAutoRecipeSimulator;

void UBMAutoRecipeSimulatorWidget::SetSimulatedRecipe(FBMRecipeData Recipe) {
}

ABMAutoRecipeSimulator* UBMAutoRecipeSimulatorWidget::GetRecipeSimulator() {
    return NULL;
}

void UBMAutoRecipeSimulatorWidget::BeginSimulation() {
}

UBMAutoRecipeSimulatorWidget::UBMAutoRecipeSimulatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Equipment_DT = NULL;
    this->Recipe_DT = NULL;
    this->RecipeSimulator = NULL;
}

