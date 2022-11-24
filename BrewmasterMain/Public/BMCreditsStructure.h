#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "BMCreditsStructure.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCreditsStructure : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ObjectType;
    
    UPROPERTY(EditAnywhere)
    FString Text;
    
    UPROPERTY(EditAnywhere)
    FString TextStyle;
    
    FBMCreditsStructure();
};

