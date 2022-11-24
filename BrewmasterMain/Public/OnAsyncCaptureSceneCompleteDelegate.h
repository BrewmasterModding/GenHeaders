#pragma once
#include "CoreMinimal.h"
#include "OnAsyncCaptureSceneCompleteDelegate.generated.h"

class UTextureRenderTarget2D;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncCaptureSceneComplete, UTextureRenderTarget2D*, Texture);

