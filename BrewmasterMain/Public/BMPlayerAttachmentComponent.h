#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EBMIngredientContainerSize.h"
#include "BMInteractionComponent.h"
#include "SocketData.h"
#include "BMAttachPointID.h"
#include "ESizeBand.h"
#include "AttachmentCompleteDelegate.h"
#include "EBMContainerAttachmentType.h"
#include "BMPlayerAttachmentComponent.generated.h"

class UStaticMeshComponent;
class AActor;
class UBoxComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMPlayerAttachmentComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> SocketsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DefaultSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSocketData> SocketClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UClass*> ClippableClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESizeBand MinClippableObjectSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESizeBand MaxClippableObjectSize;
    
    UPROPERTY(EditDefaultsOnly)
    EBMIngredientContainerSize MinClippableIngredientSize;
    
    UPROPERTY(EditDefaultsOnly)
    EBMIngredientContainerSize MaxClippableIngredientSize;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ESizeBand, EBMIngredientContainerSize> MaxSizeOverridesIngredients;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ESizeBand, ESizeBand> MaxSizeOverridesOther;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<UClass*> AllAttachableClasses;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* MeshToPreview;
    
protected:
    UPROPERTY()
    FTransform LastTransform;
    
    UPROPERTY()
    AActor* ActorOutline;
    
    UPROPERTY()
    FBMAttachPointID PreviewAttachPoint;
    
    UPROPERTY()
    AActor* PreviewAttachToActor;
    
    UPROPERTY()
    bool bGhostPreviewActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldPreventPouring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugCollisionDrawing;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBoxComponent* AdditionalCollider;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsPlaceOnType;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FAttachmentComplete FAttachmentCompleteEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMContainerAttachmentType ContainerAttachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBMContainerAttachmentType> AllowedAttachmentCombinations;
    
    UBMPlayerAttachmentComponent();
protected:
    UFUNCTION()
    void TransferComplete();
    
    UFUNCTION()
    void DockComplete(AActor* ActorDocking);
    
};

