#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "BMUndockingNotify.generated.h"

UCLASS(CollapseCategories)
class BREWMASTERMAIN_API UBMUndockingNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UBMUndockingNotify();
};

