#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "BMActionGlyphDecorator.generated.h"

class UBMActionGlyph;

UCLASS(Abstract, BlueprintType)
class BREWMASTERMAIN_API UBMActionGlyphDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float GlyphScaleMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UBMActionGlyph> ActionGlyphBP;
    
    UBMActionGlyphDecorator();
};

