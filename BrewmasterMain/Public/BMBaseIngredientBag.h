#pragma once
#include "CoreMinimal.h"
#include "BMBaseIngredient.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMBaseIngredientBag.generated.h"

class UBMCarryableComponent;
class UBMPlayerAttachmentComponent;
class UMaterialInstanceDynamic;
class UBMDockingAnimationComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UMaterialInterface;
class AActor;

UCLASS()
class BREWMASTERMAIN_API ABMBaseIngredientBag : public ABMBaseIngredient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPlayerAttachmentComponent* AttachmentComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMDockingAnimationComponent* DockingComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* ClipHanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* IngredientMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* IngredientMaterialInstance;
    
    UPROPERTY(Instanced)
    UBMCarryableComponent* AttachedParentCarryComp;
    
    UPROPERTY(EditDefaultsOnly)
    USkeletalMesh* SittingBag;
    
    UPROPERTY(EditDefaultsOnly)
    USkeletalMesh* Bag;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle MorphTargetsData;
    
    UPROPERTY()
    FTimerHandle WetnessFadeHandle;
    
    UPROPERTY(SaveGame)
    bool BaseDampnessTriggered;
    
    UPROPERTY(EditDefaultsOnly)
    float TopHeightLagTime;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseDampnessStart;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseDampnessEnd;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseDampnessFadeTime;
    
    UPROPERTY(SaveGame)
    bool bIsSitting;
    
    UPROPERTY(SaveGame)
    bool ClipVisible;
    
    UPROPERTY(SaveGame)
    FVector Position;
    
    UPROPERTY(EditDefaultsOnly)
    float BufferFromWall;
    
public:
    ABMBaseIngredientBag();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLabel();
    
    UFUNCTION()
    void SetClipHangerVisibility();
    
    UFUNCTION()
    void CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee);
    
    UFUNCTION()
    void AttachmentStateChanged(AActor* Actor);
    
};

