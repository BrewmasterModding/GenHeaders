#pragma once
#include "CoreMinimal.h"
#include "PaperSpriteAtlasSlot.generated.h"

class UPaperSprite;

USTRUCT()
struct FPaperSpriteAtlasSlot {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSoftObjectPtr<UPaperSprite> SpriteRef;
    
    UPROPERTY()
    int32 AtlasIndex;
    
    UPROPERTY()
    int32 X;
    
    UPROPERTY()
    int32 Y;
    
    UPROPERTY()
    int32 Width;
    
    UPROPERTY()
    int32 Height;
    
    PAPER2D_API FPaperSpriteAtlasSlot();
};

