#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PaperTileInfo.h"
#include "PaperTileMapComponent.generated.h"

class UPaperTileSet;
class UPaperTileLayer;
class UMaterialInterface;
class UPaperTileMap;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAPER2D_API UPaperTileMapComponent : public UMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 MapWidth;
    
    UPROPERTY()
    int32 MapHeight;
    
    UPROPERTY()
    int32 TileWidth;
    
    UPROPERTY()
    int32 TileHeight;
    
    UPROPERTY()
    UPaperTileSet* DefaultLayerTileSet;
    
    UPROPERTY()
    UMaterialInterface* Material;
    
    UPROPERTY()
    TArray<UPaperTileLayer*> TileLayers;
    
    UPROPERTY(EditAnywhere)
    FLinearColor TileMapColor;
    
    UPROPERTY(EditAnywhere)
    int32 UseSingleLayerIndex;
    
    UPROPERTY(EditAnywhere)
    bool bUseSingleLayer;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPaperTileMap* TileMap;
    
    UPaperTileMapComponent();
    UFUNCTION(BlueprintCallable)
    void SetTileMapColor(FLinearColor NewColor);
    
    UFUNCTION(BlueprintCallable)
    bool SetTileMap(UPaperTileMap* NewTileMap);
    
    UFUNCTION(BlueprintCallable)
    void SetTile(int32 X, int32 Y, int32 Layer, FPaperTileInfo NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerColor(FLinearColor NewColor, int32 Layer);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
    
    UFUNCTION(BlueprintCallable)
    void ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles);
    
    UFUNCTION(BlueprintCallable)
    void RebuildCollision();
    
    UFUNCTION(BlueprintPure)
    bool OwnsTileMap() const;
    
    UFUNCTION(BlueprintCallable)
    void MakeTileMapEditable();
    
    UFUNCTION(BlueprintPure)
    void GetTilePolygon(int32 TileX, int32 TileY, TArray<FVector>& Points, int32 LayerIndex, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetTileMapColor() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    FPaperTileInfo GetTile(int32 X, int32 Y, int32 Layer) const;
    
    UFUNCTION(BlueprintCallable)
    void GetMapSize(int32& NewMapWidth, int32& NewMapHeight, int32& NumLayers);
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetLayerColor(int32 Layer) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateNewTileMap(int32 NewMapWidth, int32 NewMapHeight, int32 NewTileWidth, int32 NewTileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
    
    UFUNCTION(BlueprintCallable)
    UPaperTileLayer* AddNewLayer();
    
};

