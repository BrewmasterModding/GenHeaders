#include "BMBeerArtVisualsDataAsset.h"

float UBMBeerArtVisualsDataAsset::GetRandomProteinValue() {
    return 0.0f;
}

float UBMBeerArtVisualsDataAsset::GetRandomDissolvedSugarsPercentage() {
    return 0.0f;
}

float UBMBeerArtVisualsDataAsset::GetRandomDissolvedIngredientPercentage() {
    return 0.0f;
}

float UBMBeerArtVisualsDataAsset::GetProteinValue() {
    return 0.0f;
}

float UBMBeerArtVisualsDataAsset::GetDissolvedSugarsPercentage() {
    return 0.0f;
}

float UBMBeerArtVisualsDataAsset::GetDissolvedIngredientPercentage() {
    return 0.0f;
}

UBMBeerArtVisualsDataAsset::UBMBeerArtVisualsDataAsset() {
    this->bUseRandomValues = false;
    this->ProteinContentInGrams = 0.00f;
    this->PercentageDissolvedIngredients = 1.00f;
    this->PercentageSugars = 0.00f;
}

