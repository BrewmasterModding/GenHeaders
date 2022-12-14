#pragma once
#include "CoreMinimal.h"
#include "BlendBoneByChannelEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneControlSpace -FallbackName=EBoneControlSpace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBias -FallbackName=InputScaleBias
#include "AnimNode_BlendBoneByChannel.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendBoneByChannel : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink B;
    
    UPROPERTY(EditAnywhere)
    TArray<FBlendBoneByChannelEntry> BoneDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> TransformsSpace;
    
    FAnimNode_BlendBoneByChannel();
};

