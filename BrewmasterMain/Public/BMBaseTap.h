#pragma once
#include "CoreMinimal.h"
#include "BMBaseEquipment.h"
#include "BMSaveableActorInterface.h"
#include "EBMTapFlowDirection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMBaseTap.generated.h"

class UBMAudioAssetListBase;
class UMaterialInstance;
class UBMSetValueInteractionComp;
class UStaticMesh;
class UMaterialInterface;
class USplineComponent;
class UMaterialInstanceDynamic;
class USplineMeshComponent;
class UBMTapLiquidShaderControl;
class UAudioComponent;
class UTweenContainer;
class UBMAnalogueControlComponent;
class ABMTube;
class ABMDynamicContainer;
class UParticleSystemComponent;
class UParticleSystem;
class UMaterial;

UCLASS()
class BREWMASTERMAIN_API ABMBaseTap : public ABMBaseEquipment, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TubeConnectionSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USplineComponent* TapConnectionSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USplineComponent* FlowingSpline;
    
    UPROPERTY(Instanced)
    USplineMeshComponent* FlowingLiquidSplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* TapLiquidMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* LiquidMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* LiquidMaterial_DefaultLit;
    
    UPROPERTY(Instanced)
    TArray<USplineMeshComponent*> SplineMeshes;
    
    UPROPERTY()
    UMaterialInstanceDynamic* LiquidDynamicMaterial;
    
    UPROPERTY(EditAnywhere)
    bool ShouldLiquidStreamFlow;
    
    UPROPERTY(EditAnywhere)
    UClass* ShaderParametersBP;
    
    UPROPERTY(Instanced)
    UBMTapLiquidShaderControl* TapLiquidShader;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(Instanced)
    UAudioComponent* TapLiquidAudioComponent;
    
    UPROPERTY()
    bool bStreamSegmentsIncreased;
    
protected:
    UPROPERTY()
    float MaxFlowRate;
    
    UPROPERTY()
    float CurrentFlowRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsVariableFlow;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsConnectable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsTubeAttached;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsAlwaysOpen;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float OpeningSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bIsLauter;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EBMTapFlowDirection TapFlowingDirection;
    
public:
    UPROPERTY(EditDefaultsOnly)
    bool bIsMainKitchenTap;
    
protected:
    UPROPERTY()
    bool bIsCurrentlyIntake;
    
    UPROPERTY()
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LiquidTransferCallTime;
    
    UPROPERTY()
    float PercentTapOpen;
    
    UPROPERTY()
    FTimerHandle TimeHandle;
    
    UPROPERTY()
    bool StartFlow;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TimeForTapLiquidStart;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TimeForTapLiquidEnd;
    
private:
    UPROPERTY(Instanced)
    UBMAnalogueControlComponent* AnalogueControl;
    
    UPROPERTY(Instanced)
    UBMSetValueInteractionComp* SetValueComp;
    
protected:
    UPROPERTY()
    ABMTube* ConnectedTube;
    
    UPROPERTY()
    ABMDynamicContainer* Container;
    
    UPROPERTY()
    bool AllowTransfer;
    
    UPROPERTY(EditAnywhere)
    bool DelayTimeTurningWaterOff;
    
    UPROPERTY()
    bool bShouldLevelOut;
    
    UPROPERTY(EditAnywhere)
    FComponentReference TapSpline;
    
    UPROPERTY(Instanced)
    TArray<UParticleSystemComponent*> SplashFXs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* HardSplashEffectParticleSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* SoftSplashEffectParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* OvverrideMaterial;
    
    UPROPERTY()
    UTweenContainer* TweenContainer;
    
    UPROPERTY()
    bool bNoTween;
    
public:
    ABMBaseTap();
protected:
    UFUNCTION()
    void WaterTapOnTweenComplete();
    
public:
    UFUNCTION()
    void TurnOffWaterFlowing();
    
protected:
    UFUNCTION()
    void TransferLiquid(ABMDynamicContainer* OtherContainer);
    
public:
    UFUNCTION()
    void SetShouldLevelOut(bool bShouldLevel);
    
    UFUNCTION()
    void SetPercentageOpen(float Percent);
    
    UFUNCTION()
    void SetIsIntake(bool intake);
    
    UFUNCTION()
    void SetContainer(ABMDynamicContainer* NewContainer);
    
    UFUNCTION()
    void SetAllowTransfer(bool TransferAllowed);
    
    UFUNCTION()
    void OnTubeDisconnected(ABMTube* DisconectedTube);
    
    UFUNCTION()
    void LiquidTransferUpdate();
    
    UFUNCTION()
    bool IsTubeConnected();
    
    UFUNCTION()
    bool IsTransferrableIngredientsInContainer();
    
    UFUNCTION()
    bool IsTapActive();
    
    UFUNCTION()
    void InitalizeInvisibleTap();
    
    UFUNCTION()
    bool GetTapOpen();
    
    UFUNCTION()
    float GetMaxFlowRate();
    
    UFUNCTION()
    float GetLiquidSurfaceHeight();
    
    UFUNCTION()
    UMaterial* GetLiquidFlowMaterial();
    
    UFUNCTION()
    float GetContainerZPosition();
    
    UFUNCTION()
    ABMDynamicContainer* GetContainer();
    
    UFUNCTION()
    USplineComponent* GetConnectionSpline();
    
    UFUNCTION()
    FVector GetAttachmentLocation();
    
protected:
    UFUNCTION()
    ABMDynamicContainer* FindContainerStreamHits();
    
public:
    UFUNCTION()
    void DetachTube(bool bShouldDeleteTube, bool bLeaveExtraInventorySpace, bool bIgnorePickUp);
    
    UFUNCTION()
    bool CheckAbleToBeAttached();
    
    UFUNCTION()
    bool CanWithDrawLiquid();
    
    UFUNCTION()
    float CalculateAndGetCurrentFlowRate();
    
    UFUNCTION()
    void AttachTube(ABMTube* Tube);
    
    
    // Fix for true pure virtual functions not being implemented
};

