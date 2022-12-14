#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonUVEdgeMode.h"
#include "ENiagaraRibbonUVDistributionMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "NiagaraRibbonUVSettings.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraRibbonUVSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonUVDistributionMode DistributionMode;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonUVEdgeMode LeadingEdgeMode;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonUVEdgeMode TrailingEdgeMode;
    
    UPROPERTY(EditAnywhere)
    float TilingLength;
    
    UPROPERTY(EditAnywhere)
    FVector2D Offset;
    
    UPROPERTY(EditAnywhere)
    FVector2D Scale;
    
    UPROPERTY(EditAnywhere)
    bool bEnablePerParticleUOverride;
    
    UPROPERTY(EditAnywhere)
    bool bEnablePerParticleVRangeOverride;
    
    NIAGARA_API FNiagaraRibbonUVSettings();
};

