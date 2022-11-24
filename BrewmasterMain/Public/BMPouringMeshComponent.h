#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "BMLiquidPuddleEffect.h"
#include "OnPouringAreaChangedDelegate.h"
#include "BMPouringMeshComponent.generated.h"

class UBMAudioAssetListBase;
class ABMDynamicContainer;
class UNiagaraSystem;
class UCurveFloat;
class UPhysicalMaterial;
class UStaticMeshComponent;
class USplineComponent;
class UNiagaraComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMPouringMeshComponent : public USceneComponent {
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
    UCurveFloat* PourNormalCurve;
    
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
    
protected:
    UPROPERTY(Instanced)
    TArray<UStaticMeshComponent*> PuddleSM;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
public:
    UPROPERTY()
    ABMDynamicContainer* PourTarget;
    
    UPROPERTY(Instanced)
    USplineComponent* PouringSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PushUpBlueVertexColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GradientStartBlueVertexColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PourFallRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PourFallRateCurve;
    
    UPROPERTY(BlueprintAssignable)
    FOnPouringAreaChanged OnPouringAreaChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugPouring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PercentChangeForVelocityAdjustments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmallPercentChangeForVelocityAdjustments;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* SplashFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringPointDetectionTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringPointMinimumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* TextureRotationCurve;
    
    UBMPouringMeshComponent();
    UFUNCTION()
    void SetUpPuddle(FBMLiquidPuddleEffect LostLiquidPuddleEffect);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDisablePouring(bool Value);
    
    UFUNCTION()
    void ScalePuddle(FBMLiquidPuddleEffect LostLiquidPuddleEffect);
    
    UFUNCTION()
    void FadeInPuddle(FBMLiquidPuddleEffect LostLiquidPuddleEffect);
    
    UFUNCTION()
    void DestroyPuddleNow();
    
    UFUNCTION()
    void DestroyPuddle(FBMLiquidPuddleEffect LostLiquidPuddleEffect);
    
    UFUNCTION()
    void DelayDestroyPuddle(FBMLiquidPuddleEffect LostLiquidPuddleEffect);
    
};

