#include "BMAchievementManager.h"

void ABMAchievementManager::SetAchievementDisabled(bool bIsDisabled) {
}

void ABMAchievementManager::ResetAchievements() {
}

void ABMAchievementManager::AddAchievementToWritingQueue(const FName& AchievementName, const float& Progress) {
}

ABMAchievementManager::ABMAchievementManager() {
    this->bDisableAchievements = false;
    this->CurrentTimeBetweenAchievementUpdates = 0.00f;
    this->MinTimeBetweenAchievementUpdates = 1.00f;
    this->bAchievementUpdateQueued = false;
}

