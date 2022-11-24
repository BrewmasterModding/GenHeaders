#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETileMapProjectionMode.h"
#include "ESpriteCollisionMode.h"
#include "PaperTileMap.generated.h"

class UPaperTileLayer;
class UMaterialInterface;
class UPaperTileSet;
class UBodySetup;

UCLASS(BlueprintType)
class PAPER2D_API UPaperTileMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MapWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MapHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TileWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TileHeight;
    
    UPROPERTY(EditAnywhere)
    float PixelsPerUnrealUnit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SeparationPerTileX;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SeparationPerTileY;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SeparationPerLayer;
    
    UPROPERTY()
    TSoftObjectPtr<UPaperTileSet> SelectedTileSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    TArray<UPaperTileLayer*> TileLayers;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESpriteCollisionMode::Type> SpriteCollisionDomain;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETileMapProjectionMode::Type> ProjectionMode;
    
    UPROPERTY(EditAnywhere)
    int32 HexSideLength;
    
    UPROPERTY()
    UBodySetup* BodySetup;
    
    UPROPERTY()
    int32 LayerNameIndex;
    
    UPaperTileMap();
};

