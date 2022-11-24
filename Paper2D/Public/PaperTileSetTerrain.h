#pragma once
#include "CoreMinimal.h"
#include "PaperTileSetTerrain.generated.h"

USTRUCT(BlueprintType)
struct PAPER2D_API FPaperTileSetTerrain {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString TerrainName;
    
    UPROPERTY()
    int32 CenterTileIndex;
    
    FPaperTileSetTerrain();
};

