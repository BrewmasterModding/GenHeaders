#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereReflectionCapture -FallbackName=SphereReflectionCapture
#include "BMSphereReflectionCapture.generated.h"

class UTextureRenderTargetCube;
class UTextureCube;

UCLASS()
class BREWMASTERMAIN_API ABMSphereReflectionCapture : public ASphereReflectionCapture {
    GENERATED_BODY()
public:
    ABMSphereReflectionCapture();
    UFUNCTION(BlueprintCallable)
    void SetCubeMapTexture(UTextureCube* TextureCube);
    
    UFUNCTION(BlueprintCallable)
    UTextureCube* GetTextureCubeFromRenderTarget(UTextureRenderTargetCube* RenderTarget, UTextureCube* ExistingTexture);
    
};

