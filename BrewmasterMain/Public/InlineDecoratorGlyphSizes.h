#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "InlineDecoratorGlyphSizes.generated.h"

USTRUCT(BlueprintType)
struct FInlineDecoratorGlyphSizes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector2D PrimaryGlyphSize;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D MultiButtonIconSize;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D SecondaryGlyphSize;
    
    BREWMASTERMAIN_API FInlineDecoratorGlyphSizes();
};

