#pragma once
#include "CoreMinimal.h"
#include "AnimNode_PoseHandler.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAlphaBlendOption -FallbackName=EAlphaBlendOption
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "AnimNode_PoseBlendNode.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    FPoseLink SourcePose;
    
    UPROPERTY(EditAnywhere)
    EAlphaBlendOption BlendOption;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CustomCurve;
    
    FAnimNode_PoseBlendNode();
};

