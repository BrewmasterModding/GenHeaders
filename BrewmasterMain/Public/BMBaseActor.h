#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EBMScaleMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EBMVisibilityMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "BMItemData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EBMCollisionMode.h"
#include "BMBaseActor.generated.h"

class UBMHighlightComponent;
class ABMBaseActor;
class UChildActorComponent;
class UPrimitiveComponent;

UCLASS(Abstract)
class BREWMASTERMAIN_API ABMBaseActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FadeTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CameraDepthFadeLength;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CameraDepthFadeOffset;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMHighlightComponent* HighlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPermanentlyInLevel;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle ActorDataSource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle ArtDataSource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldAutoRegisterWithBrewSim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldNotSave;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSaveComponentsOnly;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bSaveChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<ABMBaseActor>> ChildActorTypesToAttach;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UChildActorComponent*> SpawnedChildActors;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bLoadedFromSave;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FBMItemData ItemData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisallowInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnorePlayerCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NeverModifyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NeverModifyScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool NeverModifyVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ObjectiveMarkerOffset;
    
    UPROPERTY()
    float TraceDistanceToPlayer;
    
    ABMBaseActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupIngredientContentsForIcon(const FDataTableRowHandle& DataSource);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SetupActorFromData();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpecificMeshVisibility(EBMVisibilityMode VisibilityMode, bool Invisible, bool EffectChildrenComps, UPrimitiveComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    UBMHighlightComponent* GetHighlightComp();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckedRegisterSelfWithSimulator();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeActorVisibilityMode(EBMVisibilityMode VisibilityMode, bool EffectAttachedActors, bool Invisible, bool EffectChildrenComps);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActorScaleMode(EBMScaleMode ScaleMode, bool EffectAttachedActors);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActorCollisionMode(EBMCollisionMode CollisionMode, bool EffectAttachedActors, bool Disable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ArtChangesFromData(const FDataTableRowHandle& DataSource);
    
};

