#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EBMParamControlType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BMEditableParamID.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMEditableParamID : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName UniqueParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMParamControlType ControlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D FloatMinMax;
    
    UPROPERTY(VisibleAnywhere)
    bool bIsTextParam;
    
    FBMEditableParamID();
};

