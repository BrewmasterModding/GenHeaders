#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BMAnalogueControlData.generated.h"

class UCurveFloat;
class USceneComponent;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMAnalogueControlData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FComponentReference AnimatingComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* VariableAnimationSecondsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CurveXAxisIsDistanceFromTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FinalLocationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator FinalRotationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketPivotPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZOffsetForPouringPosition;
    
    UPROPERTY(Instanced)
    USceneComponent* AnimatingComponent;
    
    UPROPERTY(Instanced)
    USceneComponent* PivotComp;
    
    FBMAnalogueControlData();
};

