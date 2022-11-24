#include "BMMusicAndAmbienceManager.h"

void ABMMusicAndAmbienceManager::SeasonChanged(EBMSeasonsEnum NewSeason) {
}

ABMMusicAndAmbienceManager::ABMMusicAndAmbienceManager() {
    this->TimeBetweenTracks = 1.00f;
    this->AudioAssetList = NULL;
    this->MusicAudioComponent = NULL;
    this->TimeController = NULL;
    this->NextSeasonTrack = NULL;
}

