#pragma once
#include "CoreMinimal.h"
#include "ScreenshotTakenDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FScreenshotTakenDelegate, int32, NextScreenShotToTake);

