#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "BMInWorldInteraction.h"
#include "OnRightStickInputDelegate.h"
#include "EBMInput.h"
#include "EBMXrayInformationMode.h"
#include "BMPlayerInventoryData.h"
#include "OnSwapInventoryFailedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMHitCounter.h"
#include "BMCharacter.generated.h"

class UBMInteractionComponent;
class UBMAudioAssetListBase;
class ABMBaseActor;
class AActor;
class UBMHighlightComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class ACameraActor;
class UTweenContainer;
class UBMPlayerInventoryInteractionComp;
class UBMObjectDistanceSort;
class UCameraComponent;
class USkeletalMeshComponent;
class UBMCarryableComponent;
class USceneComponent;
class UAudioComponent;

UCLASS()
class BREWMASTERMAIN_API ABMCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FBMInWorldInteraction> PossibleInteractions;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<EBMInput> PossibleInputs;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FBMInWorldInteraction> InvalidInteractions;
    
    UPROPERTY()
    AActor* Active;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMInteractionComponent* ActiveSequenceInteractionComp;
    
    UPROPERTY(Instanced)
    TArray<UBMHighlightComponent*> CurrentlyHighlightedObjects;
    
    UPROPERTY(Instanced)
    TArray<UBMHighlightComponent*> CurrentlyHighlightedObjectsTemp;
    
    UPROPERTY(Instanced)
    TMap<ABMBaseActor*, UBMHighlightComponent*> PreviousHighlightedObjects;
    
    UPROPERTY(Instanced)
    TMap<ABMBaseActor*, UBMHighlightComponent*> HighlightsToRemoveMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AActor*> ControllingOwnHighlight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EBMXrayInformationMode CurrentXRayMode;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsContextMenuVisible;
    
    UPROPERTY()
    ACameraActor* InteractionCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ACameraActor> CameraClass;
    
    UPROPERTY()
    TArray<AActor*> DitherFadedActors;
    
    UPROPERTY()
    TMap<UMaterialInstanceDynamic*, UTweenContainer*> ActiveTweens;
    
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 InteractionLength;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* CarrySockets;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPlayerInventoryInteractionComp* PlayerInventoryComp;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMObjectDistanceSort* ObjectDistanceSortComp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FBMPlayerInventoryData PlayerInventoryData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bShouldParentAttachmentHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MaxAngleDifferenceForCameraBlend;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float GamepadCursorSensitivity;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnRightStickInput RightStickInputDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnSwapInventoryFailed OnSwapInventoryFailed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FadeTime;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCameraComponent* FirstPersonCamera;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* WatchMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bGamepadSticksSwapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseCarryTestA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool UseCarryTestB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* ScalingPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector CarryModeBOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool AllowPutDownWhileStowed;
    
protected:
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAudioComponent* FootstepAudioComponent;
    
public:
    ABMCharacter();
protected:
    UFUNCTION()
    void UpdateXRayWidget(AActor* Interactee, TArray<FBMInWorldInteraction> PossibleInteraction);
    
public:
    UFUNCTION()
    void UpdateXRayMode();
    
protected:
    UFUNCTION()
    void UpdateIteractiveCameraAngle(bool StateChanged);
    
    UFUNCTION()
    void UpdateActorsInCursor(TArray<FBMHitCounter>& ActorsInCursor, FHitResult HitResult);
    
    UFUNCTION()
    void UnFadeAllDitherFadeActors();
    
public:
    UFUNCTION()
    void ToggleUpXRayMode();
    
    UFUNCTION()
    void ToggleDownXRayMode();
    
protected:
    UFUNCTION()
    void StartActorsToDitherFade(TArray<AActor*> ActorsToFade);
    
    UFUNCTION()
    bool ShouldKeepHighlight(UBMInteractionComponent* InteractionComp);
    
public:
    UFUNCTION()
    void SetActiveSequenceInteraction(UBMInteractionComponent* NewInteractionComp);
    
    UFUNCTION()
    void RemoveAllActorsControllingOwnHighlight();
    
    UFUNCTION()
    void RemoveActorControllingOwnHighlight(AActor* AddingActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionSequenceActiveStateChange(bool bSequenceActive);
    
    UFUNCTION()
    bool HandleInWorldInput(EBMInput InputID, int32 PressedKeyID);
    
    UFUNCTION()
    USceneComponent* GetScalingPoint();
    
protected:
    UFUNCTION(BlueprintPure)
    static FString GetInteractionString_Debug(FBMInWorldInteraction Interaction);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetCurrentActiveItem();
    
protected:
    UFUNCTION()
    void FindAllActorsToDitherFade(TArray<AActor*>& ActorsToFade, float DistToObj, FVector CameraPos, FVector FocusPoint);
    
public:
    UFUNCTION()
    void CreateInteractionCamera();
    
protected:
    UFUNCTION()
    void ChangeCamera(AActor* CameraChangingFrom, AActor* CameraChangingTo);
    
public:
    UFUNCTION()
    void CarryComponentUpdate(UBMCarryableComponent* CarryableComponent, AActor* Interactee);
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanPlayerMoveOrAdjustView();
    
    UFUNCTION(BlueprintPure)
    bool CanCameraLookInSequence();
    
    UFUNCTION(BlueprintCallable)
    void AmountToYaw(float AmountToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AmountToPitch(float AmountToAdd);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddControllerCursorInput(FVector2D InVector, bool bIsGamepad);
    
    UFUNCTION()
    void AddActorControllingOwnHighlight(AActor* AddingActor);
    
};

