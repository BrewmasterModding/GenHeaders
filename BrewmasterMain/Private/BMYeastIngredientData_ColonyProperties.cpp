#include "BMYeastIngredientData_ColonyProperties.h"

FBMYeastIngredientData_ColonyProperties::FBMYeastIngredientData_ColonyProperties() {
    this->GrowthRate = 0.00f;
    this->FermentationRate = 0.00f;
    this->BackgroundMortalityFactor = 0.00f;
    this->MortalityRate = 0.00f;
    this->GrowthSugars = 0.00f;
    this->AvailableSugarsHibernationThreshold = 0.00f;
    this->Attenuation = 0.00f;
    this->MaxColonySize = 0.00f;
    this->LowerOptimalTemperatureRange = 0.00f;
    this->UpperOptimalTemperatureRange = 0.00f;
    this->CompleteHibernationTemperature = 0.00f;
    this->CompleteDeathTemperature = 0.00f;
    this->LagTime = 0.00f;
    this->AlcoholTolerance = 0.00f;
    this->AlcoholDeathStart = 0.00f;
    this->AlcoholProduction = 0.00f;
    this->YeastType = EYeastType::NONE;
    this->TemperatureDeathCurve = NULL;
}

