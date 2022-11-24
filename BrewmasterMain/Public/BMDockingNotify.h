#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "BMDockingNotify.generated.h"

UCLASS(CollapseCategories)
class BREWMASTERMAIN_API UBMDockingNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UBMDockingNotify();
};

