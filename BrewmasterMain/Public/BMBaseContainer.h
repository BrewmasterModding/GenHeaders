#pragma once
#include "CoreMinimal.h"
#include "BMBaseActor.h"
#include "EBMPerformance.h"
#include "EBMPlatformLowLevelEnum.h"
#include "ESizeBand.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "BMBaseContainer.generated.h"

class UBMObjectTransfer;
class USplineComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UProceduralMeshComponent;
class UStaticMesh;
class UBMCarryableComponent;
class UBMPourableComponent;
class UBMAnalogueControlComponent;
class UBMPouringMeshComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Abstract)
class BREWMASTERMAIN_API ABMBaseContainer : public ABMBaseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* MainContainerMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_LiquidContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMPlatformLowLevelEnum, EBMPerformance> PlatformOptimisedMeshSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> SM_Low_LiquidContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> SM_Medium_LiquidContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> SM_High_LiquidContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_LiquidOverflowContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> SM_Low_LiquidOverflowContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> SM_Medium_LiquidOverflowContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> SM_High_LiquidOverflowContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* SM_Overflowing_SupportMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UProceduralMeshComponent* BaseProcMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UProceduralMeshComponent* BaseOverflowProcMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UProceduralMeshComponent* PM_Liquid;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UProceduralMeshComponent* PM_Grain;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMObjectTransfer* ObjectTransferComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMCarryableComponent* CarryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPourableComponent* PourComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMAnalogueControlComponent* AnalogueControlComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPouringMeshComponent* PouringSpline;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPouringMeshComponent* GrainPouringSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* LaceMeshInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* LaceMeshOuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* LiquidMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* LiquidMaterial_DefaultLit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* GrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* OverflowMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* OverflowMaterial_DefaultLit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* LaceMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* LiquidMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* GrainMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* OverflowMaterialInstance;
    
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicLaceMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicOuterLaceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* WaterLevelMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* WaterLevelDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WaterLevelMaterialSlot;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    ESizeBand ContainerSize;
    
public:
    UPROPERTY(EditAnywhere)
    FComponentReference ContainerSpline;
    
    UPROPERTY(Instanced)
    USplineComponent* ContainerLipSpline;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* GrainPouringFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* GrainPouringSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GrainPouringTranslucencySortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, float> GrainPouringScalarUserParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY()
    float HeightOriginToLiquidTop;
    
    ABMBaseContainer();
    UFUNCTION()
    float GetRadius();
    
    UFUNCTION()
    USkeletalMeshComponent* GetMainContainerMesh();
    
    UFUNCTION()
    float GetHeight();
    
    UFUNCTION()
    USplineComponent* GetConenctionSpline();
    
};

