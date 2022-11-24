#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PaperTileInfo.h"
#include "PaperTileLayer.generated.h"

class UPaperTileSet;

UCLASS(BlueprintType)
class PAPER2D_API UPaperTileLayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText LayerName;
    
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    int32 LayerWidth;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    int32 LayerHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHiddenInGame: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLayerCollides: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCollisionThickness: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideCollisionOffset: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionThicknessOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionOffsetOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LayerColor;
    
    UPROPERTY()
    int32 AllocatedWidth;
    
    UPROPERTY()
    int32 AllocatedHeight;
    
    UPROPERTY()
    TArray<FPaperTileInfo> AllocatedCells;
    
    UPROPERTY()
    UPaperTileSet* TileSet;
    
    UPROPERTY()
    TArray<int32> AllocatedGrid;
    
public:
    UPaperTileLayer();
};

