#pragma once
#include "CoreMinimal.h"
#include "BMSavableComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EDockingState.h"
#include "BMAttachPointID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "OnUndockedDelegate.h"
#include "OnDockedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESizeBand.h"
#include "EBMTransferType.h"
#include "BMDockingAnimationComponent.generated.h"

class USceneComponent;
class AActor;
class UBMObjectTransfer;
class UAnimSequence;
class UAnimationAsset;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBMDockingAnimationComponent : public UActorComponent, public IBMSavableComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<AActor*> DockedObjects;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FBMAttachPointID, FBMAttachPointID> SocketsDockedTogether;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<FName, bool> SocketUseMap;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<bool> ClipPointUse;
    
    UPROPERTY(EditAnywhere)
    FName RootObjectBoneName;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FName DefaultSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseThisObjectSocket;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FBMAttachPointID DockeePoint;
    
    UPROPERTY(Instanced)
    UBMObjectTransfer* ObjectTransferSystem;
    
    UPROPERTY(Instanced, SaveGame)
    USceneComponent* ObjectDockedTo;
    
    UPROPERTY(SaveGame)
    FBMAttachPointID AttachPointToDockTo;
    
    UPROPERTY(SaveGame)
    EDockingState DockingState;
    
    UPROPERTY()
    FTimerHandle UndockingAnimationTimerHandle;
    
    UPROPERTY()
    FTimerHandle DockingAnimationTimerHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnUndocked ObjectUndocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnDocked ObjectDocked;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* DockingAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* UndockingAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* DockingResponseAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* UndockingResponseAnimation;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfClipPoints;
    
    UPROPERTY(VisibleAnywhere)
    FVector ClipPointsCentrePoint;
    
    UPROPERTY(VisibleAnywhere)
    float ClipPointsRadius;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ESizeBand, int32> ContainerSizeToNumberOfClips;
    
public:
    UBMDockingAnimationComponent();
    UFUNCTION(BlueprintCallable)
    void UndockObject();
    
    UFUNCTION(BlueprintCallable)
    void UnDockingReaction();
    
protected:
    UFUNCTION()
    void UndockingAnimationComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDockingState(EDockingState NewDockingState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveDockedChild(AActor* Child);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayDetachAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayAttachAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(USceneComponent* AnimatingObject, UAnimationAsset* AnimationToPlay, bool IsLooping);
    
    UFUNCTION()
    void MovementComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAttachmentPointFree(FBMAttachPointID AttachmentPoint);
    
    UFUNCTION(BlueprintCallable)
    void DockToObjectSocket(FBMAttachPointID DockPointID, EBMTransferType transferType);
    
    UFUNCTION(BlueprintCallable)
    void DockingReaction();
    
protected:
    UFUNCTION()
    void DockingAnimationComplete();
    
    UFUNCTION()
    void DetachComplete();
    
    UFUNCTION(BlueprintCallable)
    void AddDockedChild(AActor* Child);
    
    
    // Fix for true pure virtual functions not being implemented
};

