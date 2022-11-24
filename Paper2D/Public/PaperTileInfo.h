#pragma once
#include "CoreMinimal.h"
#include "PaperTileInfo.generated.h"

class UPaperTileSet;

USTRUCT(BlueprintType)
struct FPaperTileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPaperTileSet* TileSet;
    
    UPROPERTY(EditAnywhere)
    int32 PackedTileIndex;
    
    PAPER2D_API FPaperTileInfo();
};

