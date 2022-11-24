#pragma once
#include "CoreMinimal.h"
#include "BMHDRIProperties.generated.h"

class UTextureCube;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMHDRIProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureCube* CubeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Size;
    
    FBMHDRIProperties();
};

