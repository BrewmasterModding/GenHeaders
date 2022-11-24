#include "BMBuildDetails.h"

FBMBuildDetails::FBMBuildDetails() {
    this->bIsPublic = false;
    this->bIsBuild = false;
    this->BuildType = EBMBuildType::Alpha;
    this->GameType = EBMGameType::Brewmaster;
    this->SaveVersion = 0;
}

