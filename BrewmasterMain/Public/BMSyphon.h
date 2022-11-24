#pragma once
#include "CoreMinimal.h"
#include "BMBaseTap.h"
#include "BMSyphon.generated.h"

class USkeletalMeshComponent;
class UBMObjectTransfer;
class UBMCarryableComponent;
class UBMSetFlowInteractionComp;
class UBMDockingAnimationComponent;
class AActor;
class UBMPlayerAttachmentComponent;

UCLASS()
class BREWMASTERMAIN_API ABMSyphon : public ABMBaseTap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* ContainerClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* ContainerClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* TubeClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* SyphonBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* SyphonTop;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMObjectTransfer* ObjectTransferComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMCarryableComponent* CarryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMDockingAnimationComponent* DockingAnimationSystem;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPlayerAttachmentComponent* PlayerAttachmentComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMSetFlowInteractionComp* SetFlowInteractionComponent;
    
public:
    ABMSyphon();
    UFUNCTION()
    void ItemDocked(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetTubeClips();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetContainerClips();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USkeletalMeshComponent* GetBottomOfSyhpon();
    
};

