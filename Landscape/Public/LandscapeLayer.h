#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LandscapeLayerBrush.h"
#include "ELandscapeBlendMode.h"
#include "LandscapeLayer.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT()
struct FLandscapeLayer {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY(Transient)
    bool bVisible;
    
    UPROPERTY()
    bool bLocked;
    
    UPROPERTY()
    float HeightmapAlpha;
    
    UPROPERTY()
    float WeightmapAlpha;
    
    UPROPERTY()
    TEnumAsByte<ELandscapeBlendMode> BlendMode;
    
    UPROPERTY()
    TArray<FLandscapeLayerBrush> Brushes;
    
    UPROPERTY()
    TMap<ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;
    
    LANDSCAPE_API FLandscapeLayer();
};

