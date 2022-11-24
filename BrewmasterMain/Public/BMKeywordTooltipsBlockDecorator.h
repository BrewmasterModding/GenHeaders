#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "BMKeywordTooltipsBlockDecorator.generated.h"

class UDataTable;

UCLASS(Abstract)
class BREWMASTERMAIN_API UBMKeywordTooltipsBlockDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDataTable* TipTypeSet;
    
public:
    UBMKeywordTooltipsBlockDecorator();
};

