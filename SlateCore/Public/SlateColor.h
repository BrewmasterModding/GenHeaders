#pragma once
#include "CoreMinimal.h"
#include "ESlateColorStylingMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SlateColor.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FSlateColor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SpecifiedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESlateColorStylingMode::Type> ColorUseRule;
    
public:
    FSlateColor();
};

