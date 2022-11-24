#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "ECarryState.h"
#include "BMShakingComponent.generated.h"

class UBMCarryableComponent;
class UAnimSequenceBase;
class UBMObjectTransfer;
class ABMDynamicContainer;
class UAnimInstance;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMShakingComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMObjectTransfer* ObjectTransferComp;
    
    UPROPERTY(Instanced)
    UBMCarryableComponent* CarryComponent;
    
    UPROPERTY()
    ABMDynamicContainer* PourTarget;
    
    UPROPERTY()
    UAnimInstance* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZOffsetFromSocket;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PourSocketName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    ECarryState ShakeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExtraZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LockToAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* ShakeAnimation;
    
    UBMShakingComponent();
protected:
    UFUNCTION()
    void TransferIngredient();
    
    UFUNCTION()
    void CompleteMovement();
    
public:
    UFUNCTION()
    void AnimationCallback();
    
};

