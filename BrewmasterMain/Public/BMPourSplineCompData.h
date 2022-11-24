#pragma once
#include "CoreMinimal.h"
#include "BMLiquidPuddleEffect.h"
#include "BMPourSplineCompData.generated.h"

class UNiagaraSystem;
class UCurveFloat;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPourSplineCompData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PourAreaRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PourVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PourVelocityMultiplierByPourArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PourVelocityMultiplierByLiquidVolumePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PourGravityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PourTransitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZDirectionPerfectCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringHeightPercentForPerfectCylinderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringHeightPercentForEndingCylinderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UsePouringWidthForPouringCylinderCalculations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FlatPourCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlattenPerfectCylinderRadiusPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlattenEndingCylinderRadiusPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LowPouringSimSectionFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MediumPouringSimSectionFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HighPouringSimSectionFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringSimMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* LiquidHardSurfaceSplash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* LiquidOnLiquidSplash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhysicalMaterial* LiquidPhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMLiquidPuddleEffect LostLiquidPuddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxProjectileAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushUpBlueVertexColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GradientStartBlueVertexColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PourFallRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PourFallRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugPouring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PercentChangeForVelocityAdjustments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmallPercentChangeForVelocityAdjustments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringPointDetectionTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringPointMinimumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* TextureRotationCurve;
    
    FBMPourSplineCompData();
};

