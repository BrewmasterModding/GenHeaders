#include "BMAutoBrewSimSimplex.h"

FBMAutoBrewSimSimplex::FBMAutoBrewSimSimplex() {
    this->NumberOfPoints = 0;
    this->WorkingIndex = 0;
    this->LastHighestFitnessValue = 0.00f;
    this->LastSecondHighestIndex = 0;
    this->LastLowestIndex = 0;
    this->bTryingFirstFlip = false;
}

