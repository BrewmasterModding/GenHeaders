#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EMouseCursor -FallbackName=EMouseCursor
#include "PropertyBinding.h"
#include "MouseCursorBinding.generated.h"

UCLASS()
class UMG_API UMouseCursorBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UMouseCursorBinding();
    UFUNCTION()
    TEnumAsByte<EMouseCursor::Type> GetValue() const;
    
};

