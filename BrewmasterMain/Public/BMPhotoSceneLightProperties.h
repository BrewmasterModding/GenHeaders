#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightUnits -FallbackName=ELightUnits
#include "BMPhotoSceneLightProperties.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPhotoSceneLightProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCastShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InnerConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OuterConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BarnDoorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BarnDoorLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* SourceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELightUnits IntensityUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseLightingChannel0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseLightingChannel1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseLightingChannel2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpecularScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowSlopeBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShadowFilterSharpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ContactShadowLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoftSourceRadius;
    
    FBMPhotoSceneLightProperties();
};

