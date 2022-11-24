#pragma once
#include "CoreMinimal.h"
#include "BMLiquidPuddleEffect.generated.h"

class UStaticMesh;
class UMaterialInterface;
class UCurveVector;
class UPhysicalMaterial;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLiquidPuddleEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* LostLiquidPuddleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* PuddleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* PuddleMaterial_DefaultLit;
    
    UPROPERTY()
    UMaterialInstanceDynamic* PuddleMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UPhysicalMaterial*> PuddleGeneratingMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FadeInFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GracePeriodTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmallMovementGracePeriodTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FadeOutFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxScaleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxScaleFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* ScaleCurve;
    
    FBMLiquidPuddleEffect();
};

