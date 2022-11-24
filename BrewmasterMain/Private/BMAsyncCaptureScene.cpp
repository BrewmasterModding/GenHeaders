#include "BMAsyncCaptureScene.h"
#include "Templates/SubclassOf.h"

class UCameraComponent;
class UBMAsyncCaptureScene;
class ASceneCapture2D;

UBMAsyncCaptureScene* UBMAsyncCaptureScene::CaptureSceneAsync(UCameraComponent* ViewCamera, TSubclassOf<ASceneCapture2D> SceneCaptureClass, int32 ResX, int32 ResY) {
    return NULL;
}

UBMAsyncCaptureScene::UBMAsyncCaptureScene() {
    this->SceneCapture = NULL;
    this->SceneCaptureRT = NULL;
}

