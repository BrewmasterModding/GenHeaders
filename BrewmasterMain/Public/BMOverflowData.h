#pragma once
#include "CoreMinimal.h"
#include "BMLiquidPuddleEffect.h"
#include "BMOverflowData.generated.h"

class UStaticMesh;
class UParticleSystem;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMOverflowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TransitionToOverflowSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowLiquidLossRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BlackAlphaVertices;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowingFallSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RemoveOverflowLiquidSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowCapPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* SplashEffectParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SplashEffectTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SplashingEffectSocketTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LiquidDiskEffectSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* LiquidDiskEffectParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LiquidDiskEffectTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LiquidDiskEffectFadeInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LiquidDiskEffectFadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBMLiquidPuddleEffect LiquidPuddle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartingOverflowBaseOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowBaseOpacityRampUpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowBaseOpacityRampDownSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowBaseOpacityRampDownStartVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GrainOverflowEffectTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowingGrainMainRateScaleLowerBound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowingGrainMainRateScaleUpperBound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowingGrainLateRateScaleLowerBound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowingGrainLateRateScaleUpperBound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowingGrainWetGrainBlendLowerBound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverflowingGrainWetGrainBlendUpperBound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* GrainOverflowEffectParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* OverflowingGrainSpawnLocation;
    
    FBMOverflowData();
};

