#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMInteractionComponent.h"
#include "ECarryState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BMOriginalMaterialsOfActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EBMInteractingWith.h"
#include "EBMAudioAction.h"
#include "BMBuildModeComponent.generated.h"

class UMaterialInterface;
class UPrimitiveComponent;
class UCameraComponent;
class UBoxComponent;
class ABMCharacter;
class ABMPlayerController;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMBuildModeComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UPrimitiveComponent* RootComp;
    
    UPROPERTY(Instanced)
    UBoxComponent* SwapBoxCollisionComp;
    
    UPROPERTY()
    ABMCharacter* PlayerChar;
    
    UPROPERTY()
    ABMPlayerController* PC;
    
    UPROPERTY(Instanced)
    UCameraComponent* PlayerCamera;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ECarryState CarryState;
    
    UPROPERTY()
    FVector BoundsExtent;
    
    UPROPERTY()
    FLinearColor OriginalColour;
    
    UPROPERTY()
    TArray<UMaterialInterface*> OriginalMaterials;
    
    UPROPERTY()
    TMap<UPrimitiveComponent*, FBMOriginalMaterialsOfActor> OriginalMaterialsOfAllActors;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInterface* InvalidPlacementMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InvalidPlacementOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLinearColor InvalidPlacementColour;
    
    UPROPERTY()
    bool bHasCollision;
    
    UPROPERTY()
    bool bHasPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bCanRotate;
    
    UPROPERTY()
    bool bCanPlace;
    
    UPROPERTY()
    bool bValidTargetForPlacement;
    
    UPROPERTY()
    bool bIsOriginalMaterial;
    
    UPROPERTY()
    bool bCanCancel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CarryTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CarryZAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 SlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bPlacementSliderOn;
    
    UPROPERTY()
    FVector PlaceDownSocketOffset;
    
    UPROPERTY()
    bool bHasPlaceDownSocket;
    
    UPROPERTY()
    FTransform OriginalTransform;
    
    UPROPERTY()
    FTransform BuildTransform;
    
    UPROPERTY()
    FRotator LastSafeRotation;
    
    UPROPERTY()
    EBMInteractingWith BMInteractingWith;
    
    UPROPERTY()
    bool bEnableSwapMode;
    
    UPROPERTY()
    bool bDisableRotation;
    
public:
    UBMBuildModeComponent();
protected:
    UFUNCTION()
    void PlayInteractionAudio(EBMAudioAction AudioAction, AActor* DockingContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlacementSliderUpdated(bool bOn);
    
public:
    UFUNCTION()
    void ExitSwapModeSafeGuard();
    
protected:
    UFUNCTION()
    void ConfirmSwap();
    
    UFUNCTION()
    void CancelSwap();
    
};

