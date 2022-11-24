#include "AchievementWriteCallbackProxy.h"

class UAchievementWriteCallbackProxy;
class UObject;
class APlayerController;

UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag) {
    return NULL;
}

UAchievementWriteCallbackProxy::UAchievementWriteCallbackProxy() {
}

