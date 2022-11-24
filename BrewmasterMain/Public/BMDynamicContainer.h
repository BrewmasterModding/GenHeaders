#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BMBaseContainer.h"
#include "BMSaveableActorInterface.h"
#include "BMContainerBrewSimFixedProperties.h"
#include "BMSingleVolumeState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMPourableIngredientsFilter.h"
#include "BMLiquidPuddleEffect.h"
#include "EBMInput.h"
#include "BMPackagedBeerData.h"
#include "BMDynamicContainer.generated.h"

class ABMCO2Tank;
class UNiagaraComponent;
class UParticleSystem;
class UBMPouringMeshComponent;
class ABMTube;
class UAudioComponent;
class UCurveFloat;
class UParticleSystemComponent;
class UBMBoilingBubbleEffectControl;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMeshComponent;
class UBMLidInteractionComponent;
class UBMAudioAssetListBase;
class ABMDynamicContainer;
class UBMBrewingShaderControl;
class UBMOverflowingShaderControl;
class UBMLiquidPouringEffectControl;
class USkeletalMeshComponent;
class ABMBaseMeasurementDevice;
class UBMLaceBrewingShaderControl;
class UBMGrainShaderControl;
class UBMCarryableComponent;
class UBMGrainEffectControl;
class UBMFermentationYeastEffectControl;
class UBMSteamEffectControl;
class UBMFermantationYeastShaderControl;
class ABMBaseLid;
class UNiagaraSystem;
class UStaticMesh;
class ABMBaseTap;
class UBMSubmitBeerInteraction;
class UBMPourableComponent;
class UBMObjectTransfer;
class UProceduralMeshComponent;
class UBMAnalogueControlComponent;
class AActor;

UCLASS()
class BREWMASTERMAIN_API ABMDynamicContainer : public ABMBaseContainer, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumLiquidZOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FBMContainerBrewSimFixedProperties ContainerProperties;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, SaveGame)
    FBMSingleVolumeState ContainerState;
    
    UPROPERTY()
    bool bSimulatorUpdatesBound;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PlaneNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PlanePosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LowLiquidCapSections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MediumLiquidCapSections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HighLiquidCapSections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LiquidCapSections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* MaxSwayCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SwayStiffness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SwayDampingFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrainAirGapPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrainBlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxGrainBlendValue;
    
    UPROPERTY()
    bool bDoesContainerHaveTransferrableContents;
    
    UPROPERTY()
    bool bIsSealed;
    
    UPROPERTY(SaveGame)
    bool bIsLidOn;
    
    UPROPERTY(SaveGame)
    bool bShowCO2Tank;
    
    UPROPERTY()
    TArray<ABMTube*> DirectlyConnectedTubes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldSpawnLiquidRegardlessOfLid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldOverwriteLiquidPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverwriteLiquidPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool KeepWaterAtOverwriteLiquidPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldOverwriteIngredientPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OverwriteIngredientMass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName OverwriteIngredientName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool KeepGrainAtOverwriteGrainPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseContainerSizeDataTable;
    
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
    
    UPROPERTY(SaveGame)
    FName LastGrain;
    
    UPROPERTY(SaveGame)
    FName SecondLastGrain;
    
    UPROPERTY(Instanced)
    TArray<UParticleSystemComponent*> SplashFXs;
    
    UPROPERTY(Instanced)
    UParticleSystemComponent* LiquidDiskFX;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> GrainPouringFXMaterials;
    
    UPROPERTY(BlueprintReadOnly)
    float FoamVolumePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* SyrupMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* PowderMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* SyrupMaterialDynamic;
    
    UPROPERTY()
    UMaterialInstanceDynamic* PowderMaterialDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgitationPouringMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgitationTapsTubeMultiplier;
    
    UPROPERTY(Instanced)
    UBMLidInteractionComponent* LidInteractionComponent;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UAudioComponent*> PouringImpactAudioComponents;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* PouringSoundAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* InitialImpactAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* EndingImpactAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* SimmeringAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* BoilingAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* BoilingLidClosedAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* OverflowingAudioComponent;
    
    UPROPERTY()
    ABMDynamicContainer* CurrentPourTarget;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float GrainVolumeHeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LiquidVolumeHeight;
    
    UPROPERTY(BlueprintReadOnly)
    float LiquidVolumePercent;
    
    UPROPERTY(BlueprintReadOnly)
    float GrainVolumePercent;
    
    UPROPERTY(BlueprintReadOnly)
    float VolumeOfGrainIncludingAirgaps;
    
    UPROPERTY(BlueprintReadOnly)
    float GrainVolumeIgnoringGaps;
    
    UPROPERTY(BlueprintReadWrite)
    float GrainAirGapFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GrainOverflowFadeOutRate;
    
    UPROPERTY(EditAnywhere)
    bool bshouldUpdateShaders;
    
    UPROPERTY(EditAnywhere)
    bool UpdateShadersOnBeginPlay;
    
    UPROPERTY(EditAnywhere)
    UClass* ShaderParametersBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMBrewingShaderControl* BrewingShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMOverflowingShaderControl* OverflowShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMLiquidPouringEffectControl* PouringEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMLaceBrewingShaderControl* LaceShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMGrainShaderControl* GrainShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMGrainEffectControl* GrainPouringEffectShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMFermentationYeastEffectControl* YeastEffectUpShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMFermentationYeastEffectControl* YeastEffectDownShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMBoilingBubbleEffectControl* BoilingBubblesShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMSteamEffectControl* SteamShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMFermantationYeastShaderControl* YeastShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* CurrentMat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* YeastRaftsUpParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* YeastRaftsDownParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* BoilingBubblesParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* SteamParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* GrainOverflowEffectParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* EffectsInsideLiquidSpawnLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* OverflowingGrainSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 YeastRaftsUpParticlesTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 YeastRaftsDownParticlesTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BoilingBubblesParticlesTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SteamParticlesTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UNiagaraComponent* YeastRaftsUpParticleComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UNiagaraComponent* YeastRaftsDownParticleComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UNiagaraComponent* BoilingBubblesParticleComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UNiagaraComponent* SteamParticleComponent;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* GrainOverflowingComponent;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> YeastRaftUpDynamicMat;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> YeastRaftDownDynamicMat;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> BoilingBubblesDynamicMats;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> SteamDynamicMats;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> GrainOverflowingFXMaterials;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> GrainOverflowingFXTilingMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistanceFromCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreSizeDataMaxDistanceFromCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreSizeDataOverflowingGrainSpawnLocation;
    
protected:
    UPROPERTY()
    ABMBaseLid* AttachedLid;
    
    UPROPERTY()
    TArray<ABMBaseTap*> AttachedTaps;
    
    UPROPERTY()
    ABMCO2Tank* AttachedCO2Tank;
    
    UPROPERTY()
    ABMBaseMeasurementDevice* ThermometerDial;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanGoInSink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanPourInto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowSwaying;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool OnlyAllowIngredientsPourable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanPourMaltExtractInto;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FBMPourableIngredientsFilter> PourableIngredientsPermitted;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FBMPourableIngredientsFilter> PourableIngredientsProhibited;
    
protected:
    UPROPERTY(SaveGame)
    FBMPackagedBeerData PackagedBeerData;
    
    UPROPERTY(SaveGame)
    bool WaitingForPackagedData;
    
    UPROPERTY(Instanced)
    UBMSubmitBeerInteraction* SubmitBeerInteraction;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHasKegStand;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeshSliceThresholdPercentage;
    
    UPROPERTY(VisibleAnywhere)
    int32 MaxNumberOfDirectTubeConnections;
    
public:
    ABMDynamicContainer();
    UFUNCTION()
    void UpdateGrainOverflowingVisualData();
    
    UFUNCTION()
    void UpdateFromBrewSim();
    
    UFUNCTION()
    void UpdateFoamVisualData(float Height);
    
    UFUNCTION()
    void SetupUpdates();
    
    UFUNCTION()
    void SetTubeConnection(ABMTube* Tube);
    
    UFUNCTION()
    void SetSwayStiffness(float NewSwayValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLiquidVolumeByPercent(float Percent, float Temperature);
    
    UFUNCTION(BlueprintCallable)
    void SetLiquidVolume(float Mass, float Temperature);
    
    UFUNCTION()
    void SetKegStandVisibility(bool bIsVisible);
    
    UFUNCTION()
    void SetIsLidOpen(bool LidState);
    
    UFUNCTION(BlueprintCallable)
    void SetIngredientVolume(float Mass, float Temperature, FName IngredientName);
    
    UFUNCTION()
    void SetContainerSealability(bool sealed);
    
    UFUNCTION()
    void SetAirlockBubbling(float Speed, float Opacity);
    
    UFUNCTION()
    void RemoveUpdatesFromBrewSim();
    
    UFUNCTION()
    void PopLidOpen();
    
    UFUNCTION()
    void OnTubeDisconnected(ABMTube* Tube);
    
    UFUNCTION()
    void OnAttachedEquipmentChanged();
    
    UFUNCTION()
    void MergeYeastList(const TArray<FName>& inYeastTypes);
    
    UFUNCTION()
    void MergeItemList(TArray<FName> Items);
    
    UFUNCTION()
    bool IsThisTubeConnected(ABMTube* TubeToTest);
    
    UFUNCTION()
    void IsHeadPresent(bool isPresent);
    
    UFUNCTION()
    bool IsAirlockAttached();
    
    UFUNCTION()
    void InstantlyCloseLid();
    
    UFUNCTION()
    void IncrementBlend(FName GrainBlendScalar);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideCO2Tube(bool bShowTube);
    
    UFUNCTION()
    TArray<FName> GetYeastList();
    
    UFUNCTION()
    float GetTotalNonDissolvedMass();
    
    UFUNCTION()
    float GetTotalContentsVolume();
    
    UFUNCTION()
    float GetShaderLiquidOpacity();
    
    UFUNCTION()
    FLinearColor GetShaderLiquidColour();
    
    UFUNCTION()
    UBMPouringMeshComponent* GetPouringMeshComponent();
    
    UFUNCTION()
    UBMPourableComponent* GetPourComponent();
    
    UFUNCTION()
    UBMPourableComponent* GetPourableComponent();
    
    UFUNCTION()
    float GetOverallVolumeInContainer();
    
    UFUNCTION()
    UBMObjectTransfer* GetObjectTransferComponent();
    
    UFUNCTION()
    float GetLiquidVolumePercent();
    
    UFUNCTION()
    FVector GetLiquidSurfacePosition(float liquidFilledPercent);
    
    UFUNCTION()
    UProceduralMeshComponent* GetLiquidProcMesh();
    
    UFUNCTION()
    UStaticMeshComponent* GetLiquidContainer();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    USkeletalMeshComponent* GetKegStandMesh();
    
public:
    UFUNCTION()
    TArray<FName> GetItemList();
    
    UFUNCTION()
    bool GetIsHeadPresent();
    
    UFUNCTION()
    bool GetIsContainerSealed();
    
    UFUNCTION()
    float GetHighestFoamVolume();
    
    UFUNCTION(BlueprintCallable)
    float GetHeadSizeValue();
    
    UFUNCTION(BlueprintCallable)
    FString GetHeadSizeDescription();
    
    UFUNCTION()
    float GetGrainVolumePercent(bool bIncludeAirgaps);
    
    UFUNCTION()
    UBMPouringMeshComponent* GetGrainPouringMeshComponent();
    
    UFUNCTION()
    float GetCurrentLiquidVolume();
    
    UFUNCTION()
    float GetCurrentGrainVolume();
    
    UFUNCTION()
    float GetContainerVolumeCapacity();
    
    UFUNCTION()
    FBMContainerBrewSimFixedProperties GetContainerProperties();
    
    UFUNCTION()
    float GetContainerLiquidPercent();
    
    UFUNCTION()
    void GetConnectedTubes(TArray<ABMTube*>& Tubes, bool bIncludeTapConnections);
    
    UFUNCTION()
    ABMCO2Tank* GetCO2Tank();
    
    UFUNCTION(BlueprintCallable)
    float GetClarityValue();
    
    UFUNCTION(BlueprintCallable)
    FString GetClarityDescription();
    
    UFUNCTION()
    ABMBaseTap* GetChildTapConnectedToTube();
    
    UFUNCTION()
    UBMCarryableComponent* GetCarryComponent();
    
    UFUNCTION(BlueprintCallable)
    float GetBubblesValue();
    
    UFUNCTION(BlueprintCallable)
    FString GetBubblesDescription();
    
    UFUNCTION(BlueprintCallable)
    float GetBodyValue();
    
    UFUNCTION(BlueprintCallable)
    FString GetBodyDescription();
    
    UFUNCTION(BlueprintCallable)
    FString GetBatchSizeDescription();
    
    UFUNCTION()
    UBMAnalogueControlComponent* GetAnalogueControlComponent();
    
    UFUNCTION()
    void FadeOutLace();
    
    UFUNCTION()
    void FadeInLace();
    
    UFUNCTION()
    void FadeGrainOverflowingVisualData();
    
    UFUNCTION()
    void DisconnectTubes();
    
    UFUNCTION()
    void ContainerPutDown();
    
    UFUNCTION()
    void ContainerPickedUp();
    
    UFUNCTION()
    void CheckForPackagedData();
    
    UFUNCTION()
    bool CheckForIngredientsAvalibleForTubeTransfer();
    
    UFUNCTION()
    bool CanPlaceObjectIn(AActor* ActorToBePlaced, TMap<EBMInput, FName>& InvalidInputActions);
    
    UFUNCTION()
    bool CanBeAttachedTo(AActor* ActorToBeAttached);
    
    UFUNCTION()
    bool CanAnotherTubeConnectDirectly();
    
    UFUNCTION()
    float CalculateVolumeFromPercentage(float Value);
    
    UFUNCTION()
    bool CalculateAndGetTransferableContents(float MaxSize);
    
    UFUNCTION()
    bool AreAnyTubesConnected();
    
    UFUNCTION()
    void ApplyUpdates();
    
    UFUNCTION()
    float AirlockPressureRelease(float Carbonation, float Threshold);
    
    UFUNCTION()
    void AddYeastAsUsedOnBeer(FName Yeast);
    
    UFUNCTION(BlueprintCallable)
    void AddLiquidVolume(float Mass, float Temperature);
    
    UFUNCTION()
    void AddItemAsUsedOnBeer(FName Item);
    
    UFUNCTION(BlueprintCallable)
    void AddIngredientVolume(float Mass, float Temperature, FName IngredientName);
    
    
    // Fix for true pure virtual functions not being implemented
};

