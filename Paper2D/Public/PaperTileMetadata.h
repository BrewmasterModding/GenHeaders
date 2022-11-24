#pragma once
#include "CoreMinimal.h"
#include "SpriteGeometryCollection.h"
#include "PaperTileMetadata.generated.h"

USTRUCT(BlueprintType)
struct PAPER2D_API FPaperTileMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName UserDataName;
    
    UPROPERTY(EditAnywhere)
    FSpriteGeometryCollection CollisionData;
    
    UPROPERTY()
    uint8 TerrainMembership[4];
    
    FPaperTileMetadata();
};

