#include "BMNotificationData.h"

FBMNotificationData::FBMNotificationData() {
    this->NotificationType = EBMNotificationType::NONE;
    this->AllowMultiple = false;
    this->ShowCount = false;
    this->PendingNotificationCount = 0;
}

