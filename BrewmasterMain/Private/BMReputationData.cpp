#include "BMReputationData.h"

FBMReputationData::FBMReputationData() {
    this->PointsForNextLevel = 0.00f;
    this->CurrentReputationPoints = 0.00f;
    this->CurrentReputation = EBMReputation::Unknown;
}

