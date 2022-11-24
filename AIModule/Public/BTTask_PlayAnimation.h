#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_PlayAnimation.generated.h"

class USkeletalMeshComponent;
class UBehaviorTreeComponent;
class UAnimationAsset;

UCLASS()
class AIMODULE_API UBTTask_PlayAnimation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimationAsset* AnimationToPlay;
    
    UPROPERTY(EditAnywhere)
    uint8 bLooping: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bNonBlocking: 1;
    
    UPROPERTY(Instanced)
    UBehaviorTreeComponent* MyOwnerComp;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* CachedSkelMesh;
    
    UBTTask_PlayAnimation();
};

