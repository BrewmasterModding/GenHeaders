#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid2D.h"
#include "NiagaraUserParameterBinding.h"
#include "ENiagaraGpuBufferFormat.h"
#include "NiagaraDataInterfaceGrid2DCollection.generated.h"

class UNiagaraComponent;
class UTextureRenderTarget2DArray;
class UTextureRenderTarget2D;

UCLASS(BlueprintType, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    
    UPROPERTY(EditAnywhere)
    ENiagaraGpuBufferFormat OverrideBufferFormat;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideFormat: 1;
    
protected:
    UPROPERTY(Transient)
    TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;
    
public:
    UNiagaraDataInterfaceGrid2DCollection();
    UFUNCTION(BlueprintCallable)
    void GetTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    
    UFUNCTION(BlueprintCallable)
    void GetRawTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    
    UFUNCTION(BlueprintCallable)
    bool FillTexture2D(const UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32 AttributeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool FillRawTexture2D(const UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32& TilesX, int32& TilesY);
    
};

