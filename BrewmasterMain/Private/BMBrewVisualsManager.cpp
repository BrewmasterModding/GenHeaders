#include "BMBrewVisualsManager.h"

ABMBrewVisualsManager::ABMBrewVisualsManager() {
    this->LowDistanceUpdateTimeCurve = NULL;
    this->LowHighlightUpdateTimeCurve = NULL;
    this->LowNotRenderedUpdateTime = 5.00f;
    this->LowStopwatchUpdateTime = 0.03f;
    this->MediumDistanceUpdateTimeCurve = NULL;
    this->MediumHighlightUpdateTimeCurve = NULL;
    this->MediumNotRenderedUpdateTime = 5.00f;
    this->MediumStopwatchUpdateTime = 0.03f;
    this->HighDistanceUpdateTimeCurve = NULL;
    this->HighHighlightUpdateTimeCurve = NULL;
    this->HighNotRenderedUpdateTime = 5.00f;
    this->HighStopwatchUpdateTime = 0.00f;
    this->DistanceUpdateTimeCurve = NULL;
    this->HighlightUpdateTimeCurve = NULL;
    this->NotRenderedUpdateTime = 5.00f;
    this->AllowShaderUpdatesEveryTick = true;
}

