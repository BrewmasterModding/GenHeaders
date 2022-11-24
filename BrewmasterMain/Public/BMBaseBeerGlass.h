#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMDynamicContainer.h"
#include "BMBeerProperties.h"
#include "BMBeerStyle.h"
#include "BMBaseBeerGlass.generated.h"

class UNiagaraSystem;
class UBMBeerShaderControl;
class UBMBeerArtVisualsDataAsset;
class UStaticMeshComponent;
class UBMBeerBubblesEffectControl;
class UBMBeerLaceShaderControl;
class UNiagaraComponent;
class UMaterialInstanceDynamic;
class UPointLightComponent;

UCLASS()
class BREWMASTERMAIN_API ABMBaseBeerGlass : public ABMDynamicContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    UBMBeerArtVisualsDataAsset* BeerArtVisualsData;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_GlassOutside;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_GlassInside;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_ClingingBubbles;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_FakeGlow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBMBeerLaceShaderControl> LaceBeerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBMBeerShaderControl> BeerShaderClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBMBeerShaderControl> BeerCliningBubblesClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBMBeerShaderControl> BeerGlowClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBMBeerBubblesEffectControl> BeerParticlesClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* BeerBubblesParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BeerBubblesParticlesTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UNiagaraComponent* BeerBubblesParticleComponent;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> BeerBubblesDynamicMats;
    
    UPROPERTY(Instanced)
    UBMBeerShaderControl* BeerShaderControl;
    
    UPROPERTY(Instanced)
    UBMBeerLaceShaderControl* BeerLaceShaderControl;
    
    UPROPERTY(Instanced)
    UBMBeerShaderControl* BeerBubblesShaderControl;
    
    UPROPERTY(Instanced)
    UBMBeerShaderControl* BeerGlowShaderControl;
    
    UPROPERTY(Instanced)
    UBMBeerBubblesEffectControl* BeerParticlesControl;
    
    UPROPERTY()
    UMaterialInstanceDynamic* GlassOutsideMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* GlassInsideMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ClingingBubblesMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* FakeGlowMaterialInstance;
    
    UPROPERTY(VisibleAnywhere)
    FBMBeerProperties CachedBeerProperties;
    
    UPROPERTY(Instanced)
    UPointLightComponent* BeerPointLight;
    
    UPROPERTY()
    bool bHasSetupShaders;
    
    UPROPERTY(EditDefaultsOnly)
    float FilledAmount;
    
public:
    ABMBaseBeerGlass();
    UFUNCTION(BlueprintImplementableEvent)
    void TurnOffCustomStencil();
    
    UFUNCTION(BlueprintCallable)
    void SetUpBeerGlassFromEditorTool(FBMBeerStyle BeerProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetUpBeerGlassFromDataAsset();
    
    UFUNCTION(BlueprintCallable)
    void SetUpBeerGlassFromBP(FBMBeerProperties BeerProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetUpBeerGlass(FBMBeerProperties& BeerProperties);
    
    UFUNCTION(BlueprintImplementableEvent)
    UPointLightComponent* GetPointLight();
    
};

