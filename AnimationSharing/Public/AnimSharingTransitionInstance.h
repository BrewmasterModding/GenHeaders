#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnimSharingTransitionInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(NonTransient)
class UAnimSharingTransitionInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> FromComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> ToComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    float BlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Transient)
    bool bBlendBool;
    
public:
    UAnimSharingTransitionInstance();
};

