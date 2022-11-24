#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMBaseEquipment.h"
#include "BMSaveableActorInterface.h"
#include "OnAnimationFinishedDelegate.h"
#include "BMTube.generated.h"

class UStaticMesh;
class UMeshComponent;
class ABMBaseTap;
class UMaterial;
class UNiagaraComponent;
class USplineComponent;
class UBMObjectTransfer;
class USplineMeshComponent;
class UMaterialInstanceDynamic;
class ABMPump;
class ABMThermalCoupling;
class UBMAudioAssetListBase;
class AActor;
class ABMDynamicContainer;
class UTweenContainer;

UCLASS()
class BREWMASTERMAIN_API ABMTube : public ABMBaseEquipment, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector StartPoint;
    
    UPROPERTY()
    FVector EndPoint;
    
    UPROPERTY(EditAnywhere, Instanced)
    UMeshComponent* DefaultMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UMeshComponent* TubePreviewMeshComponent;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* TubeOutsideMesh;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* TubeInsideMesh;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* TubeLiquidMesh;
    
    UPROPERTY(EditAnywhere)
    UMaterial* LiquidMat;
    
    UPROPERTY(EditAnywhere)
    UMaterial* TubeMat;
    
    UPROPERTY(EditAnywhere, Instanced)
    UMeshComponent* TubeStartMesh;
    
    UPROPERTY(EditAnywhere, Instanced)
    UMeshComponent* TubeEndMesh;
    
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraComponent* TubeConnectionPreview;
    
    UPROPERTY(EditAnywhere, Instanced)
    USplineComponent* Spline;
    
    UPROPERTY(EditAnywhere)
    int32 SplineSegments;
    
    UPROPERTY(EditAnywhere, Instanced)
    UBMObjectTransfer* ObjectTransferSystem;
    
    UPROPERTY(EditAnywhere, Instanced)
    TMap<int32, USplineMeshComponent*> SplineMeshes;
    
    UPROPERTY(SaveGame)
    bool bIsPoint1TapConnection;
    
    UPROPERTY(SaveGame)
    bool bIsPoint2TapConnection;
    
    UPROPERTY()
    TMap<int32, UMaterialInstanceDynamic*> LiquidMaterials;
    
    UPROPERTY(EditAnywhere)
    bool bIsStaticTube;
    
    UPROPERTY()
    bool RemovedLastPoint;
    
    UPROPERTY()
    bool bIsConnected;
    
    UPROPERTY(SaveGame)
    FVector AttachPosition1;
    
    UPROPERTY(SaveGame)
    FVector AttachPosition2;
    
    UPROPERTY()
    ABMPump* ConnectedPump;
    
    UPROPERTY()
    ABMThermalCoupling* ConnectedThermalCoupling;
    
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
public:
    UPROPERTY(SaveGame)
    AActor* ActorConnectedpoint1;
    
    UPROPERTY(SaveGame)
    AActor* ActorConnectedpoint2;
    
    UPROPERTY()
    ABMBaseTap* Tap1;
    
    UPROPERTY()
    ABMBaseTap* Tap2;
    
    UPROPERTY()
    float MaxRangeDistance;
    
    UPROPERTY(SaveGame)
    ABMDynamicContainer* Container1;
    
    UPROPERTY(SaveGame)
    ABMDynamicContainer* Container2;
    
    UPROPERTY(EditAnywhere)
    FName LiquidMask1Name;
    
    UPROPERTY(EditAnywhere)
    FName LiquidMask2Name;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnAnimationFinished TubeAnimationFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ABMBaseTap> RimConnectionTapClass;
    
    UPROPERTY(EditAnywhere)
    float LiquidFlowTime;
    
    UPROPERTY()
    float SplineAnimationCurrentDistance;
    
    UPROPERTY()
    int32 CurrentSplineIndex;
    
    UPROPERTY()
    float AnimationTime;
    
    UPROPERTY()
    float CurrentAnimationTime;
    
    UPROPERTY()
    float AnimationRate;
    
    UPROPERTY()
    bool FillingTube;
    
    UPROPERTY()
    bool EmptyingTube;
    
    UPROPERTY()
    bool bisTubeFilled;
    
    UPROPERTY()
    float LiquidShaderValue;
    
    UPROPERTY()
    float CurrentRateValue;
    
    UPROPERTY()
    ABMDynamicContainer* FlowingFromContainer;
    
    UPROPERTY()
    ABMDynamicContainer* FlowingToContainer;
    
    UPROPERTY()
    UTweenContainer* ActiveTweenContainer;
    
private:
    UPROPERTY()
    bool bShouldBeDeletedOverride;
    
public:
    ABMTube();
    UFUNCTION(BlueprintCallable)
    void TweenHideTubeConnectionPreview();
    
    UFUNCTION(BlueprintCallable)
    bool TryInterruptActiveTween(bool bCompleteTween);
    
    UFUNCTION()
    void StopTransfer();
    
    UFUNCTION(BlueprintCallable)
    void ShowTubeConnectionPreview();
    
    UFUNCTION(BlueprintCallable)
    void SetupTubeConnectionPreview(FVector StartPos, FVector EndPos);
    
    UFUNCTION(BlueprintCallable)
    void SetUpConnectionBetweenTaps();
    
    UFUNCTION()
    void PlayEmptyingAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnTubeConnectionFinished(UTweenContainer* TweenContainer);
    
    UFUNCTION(BlueprintCallable)
    void HideTubeConnection();
    
    UFUNCTION(BlueprintCallable)
    UMeshComponent* GetTubePreviewMesh();
    
    UFUNCTION(BlueprintCallable)
    ABMDynamicContainer* GetOtherConnectedContainer(ABMBaseTap* TapRequesting);
    
    UFUNCTION()
    bool GetIsConnected();
    
    UFUNCTION()
    bool GetFlowDirection();
    
    UFUNCTION(BlueprintCallable)
    void DetachTubes(bool bShouldDeleteTube, bool bLeaveExtraInventorySpace, bool bIgnorePickUp);
    
    UFUNCTION()
    void DetachTubeFromActor(AActor* ConnectionPoint, bool Delete, bool bLeaveExtraInventorySpace);
    
    UFUNCTION()
    void CalculateSectionAnimation(int32 CurrentIndex);
    
    UFUNCTION()
    FVector CalculateAndSetTangent(FVector Normal);
    
    UFUNCTION()
    bool AttemptToReachFloorFromStartPoint(FVector StartPos, FVector EndPos);
    
    UFUNCTION()
    bool AttemptToReachFloorFromEndPoint(FVector StartPos, FVector EndPos);
    
    
    // Fix for true pure virtual functions not being implemented
};

