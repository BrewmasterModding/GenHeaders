#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMIncludeOnPlatforms.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMIncludeOnPlatforms : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncludeOnPC;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncludeOnPS;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncludeOnSwitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncludeOnXBox;
    
    FBMIncludeOnPlatforms();
};

