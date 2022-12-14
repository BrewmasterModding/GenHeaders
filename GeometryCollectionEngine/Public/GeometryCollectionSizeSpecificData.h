#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ECollisionTypeEnum -FallbackName=ECollisionTypeEnum
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EImplicitTypeEnum -FallbackName=EImplicitTypeEnum
#include "GeometryCollectionSizeSpecificData.generated.h"

USTRUCT(BlueprintType)
struct GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionSizeSpecificData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxSize;
    
    UPROPERTY(EditAnywhere)
    ECollisionTypeEnum CollisionType;
    
    UPROPERTY(EditAnywhere)
    EImplicitTypeEnum ImplicitType;
    
    UPROPERTY(EditAnywhere)
    int32 MinLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 MaxLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 MinClusterLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 MaxClusterLevelSetResolution;
    
    UPROPERTY(EditAnywhere)
    int32 CollisionObjectReductionPercentage;
    
    UPROPERTY(EditAnywhere)
    float CollisionParticlesFraction;
    
    UPROPERTY(EditAnywhere)
    int32 MaximumCollisionParticles;
    
    FGeometryCollectionSizeSpecificData();
};

