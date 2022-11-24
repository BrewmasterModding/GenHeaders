#pragma once
#include "CoreMinimal.h"
#include "PaperFlipbookKeyFrame.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FPaperFlipbookKeyFrame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPaperSprite* Sprite;
    
    UPROPERTY(EditAnywhere)
    int32 FrameRun;
    
    PAPER2D_API FPaperFlipbookKeyFrame();
};

