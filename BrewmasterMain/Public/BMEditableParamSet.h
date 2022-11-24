#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMEditableParamID.h"
#include "EBMLabelTextSlot.h"
#include "BMEditableParamSet.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMEditableParamSet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMEditableParamID> Params;
    
    UPROPERTY(VisibleAnywhere)
    TArray<EBMLabelTextSlot> RelevantText;
    
    FBMEditableParamSet();
};

